
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int stackaddr ;
struct TYPE_5__ {int cputype; int cpusubtype; } ;
struct TYPE_4__ {char* name; char* description; } ;
typedef TYPE_1__ NXArchInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int *,size_t*,int *,int ) ;

void FUNC_4(void)
{
 int VAR_2;
 uint64_t VAR_3;
 size_t VAR_4 = sizeof(VAR_3);
 const NXArchInfo *VAR_5 = FUNC_0(VAR_1.cputype, VAR_1.cpusubtype & ~VAR_0);

 FUNC_2("executable load address = 0x%016llx\n", (uint64_t)(uintptr_t)&VAR_1);
 FUNC_2("executable cputype 0x%08x cpusubtype 0x%08x (%s:%s)\n",
     VAR_1.cputype,
     VAR_1.cpusubtype,
     VAR_5 ? VAR_5->name : "unknown",
     VAR_5 ? VAR_5->description : "unknown");

 VAR_2 = FUNC_3("kern.usrstack64", &VAR_3, &VAR_4, ((void*)0), 0);
 if (VAR_2 == -1)
  FUNC_1(1, "sysctlbyname");

 FUNC_2("          stack address = 0x%016llx\n", VAR_3);
}
