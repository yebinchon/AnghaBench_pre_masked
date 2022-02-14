
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct dump_hdr_s390 {int tod; scalar_t__ arch_id; scalar_t__ cpu_id; int dump_level; int page_size; int num_pages; int memory_end; int memory_start; int memory_size; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct dump_hdr_lkcd {int header_size; TYPE_1__ time; int version; int magic_number; int utsname_domainname; int utsname_version; int utsname_release; int utsname_nodename; int utsname_sysname; int utsname_machine; int panic_string; int dump_level; int page_size; int num_dump_pages; int memory_end; int memory_start; int memory_size; } ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct dump_hdr_s390 *VAR_4,
        struct dump_hdr_lkcd *VAR_5)
{
 struct timeval VAR_6;


 __u64 VAR_7 = VAR_4->tod;
 VAR_7 -= 0x8126d60e46000000LL - (0x3c26700LL * 1000000 * 4096);
 VAR_7 >>= 12;
 VAR_6.tv_sec = VAR_7 / 1000000;
 VAR_6.tv_usec = VAR_7 % 1000000;

 VAR_5->memory_size = VAR_4->memory_size;
 VAR_5->memory_start = VAR_4->memory_start;
 VAR_5->memory_end = VAR_4->memory_end;
 VAR_5->num_dump_pages = VAR_4->num_pages;
 VAR_5->page_size = VAR_4->page_size;
 VAR_5->dump_level = VAR_4->dump_level;

 FUNC_0(VAR_5->panic_string, "zSeries-dump (CPUID = %16llx)",
  (unsigned long long) VAR_4->cpu_id);

 if (VAR_4->arch_id == VAR_0)
  FUNC_1(VAR_5->utsname_machine, "s390");
 else if (VAR_4->arch_id == VAR_1)
  FUNC_1(VAR_5->utsname_machine, "s390x");
 else
  FUNC_1(VAR_5->utsname_machine, "<unknown>");

 FUNC_1(VAR_5->utsname_sysname, "<unknown>");
 FUNC_1(VAR_5->utsname_nodename, "<unknown>");
 FUNC_1(VAR_5->utsname_release, "<unknown>");
 FUNC_1(VAR_5->utsname_version, "<unknown>");
 FUNC_1(VAR_5->utsname_domainname, "<unknown>");

 VAR_5->magic_number = VAR_2;
 VAR_5->version = VAR_3;
 VAR_5->header_size = sizeof(struct dump_hdr_lkcd);
 VAR_5->time.tv_sec = VAR_6.tv_sec;
 VAR_5->time.tv_usec = VAR_6.tv_usec;
}
