
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_boot_param {int dummy; } ;
struct elfhdr {int* e_ident; scalar_t__ e_type; unsigned long e_entry; unsigned long e_phnum; unsigned long e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; int p_filesz; unsigned long p_offset; scalar_t__ p_memsz; int p_paddr; } ;
struct disk_stat {int fd; int count; } ;
struct disk_req {int len; long addr; } ;
typedef int mem ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct elfhdr*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 void* FUNC_7 (int,long,long,unsigned long,int ) ;
 scalar_t__ FUNC_8 (int*,char*,int) ;
 struct ia64_boot_param* FUNC_9 (char*,long) ;

void
FUNC_10 (void)
{
 static char VAR_11[4096];
 static char VAR_12[1024];
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 struct disk_req VAR_16;
 struct disk_stat VAR_17;
 struct elfhdr *VAR_18;
 struct elf_phdr *VAR_19;
 unsigned long VAR_20, VAR_21, VAR_22;
 register struct ia64_boot_param *VAR_23;
 char *VAR_24, *VAR_25;
 long VAR_26 = 0;

 FUNC_7(0, 0, 0, 0, VAR_3);
 VAR_26 = FUNC_7((long) VAR_12, 0, 0, 0, VAR_5);

 VAR_24 = "vmlinux";
 VAR_25 = VAR_12;
 if (VAR_26 > 0) {
  VAR_24 = VAR_12;
  while (*VAR_25 != ' ' && *VAR_25 != '\0')
   ++VAR_25, --VAR_26;
  if (*VAR_25 == ' ')
   *VAR_25++ = '\0', --VAR_26;
 }

 if (VAR_26 <= 0) {
  VAR_25 = "";
  VAR_26 = 1;
 }

 VAR_14 = FUNC_7((long) VAR_24, 1, 0, 0, VAR_7);

 if (VAR_14 < 0) {
  FUNC_1(VAR_24);
  FUNC_1(": file not found, reboot now\n");
  for(;;);
 }
 VAR_17.fd = VAR_14;
 VAR_13 = 0;

 VAR_16.len = sizeof(VAR_11);
 VAR_16.addr = (long) VAR_11;
 FUNC_7(VAR_14, 1, (long) &VAR_16, VAR_13, VAR_8);
 FUNC_7((long) &VAR_17, 0, 0, 0, VAR_9);

 VAR_18 = (struct elfhdr *) VAR_11;
 if (VAR_18->e_ident[0] == 0x7f && FUNC_8(VAR_18->e_ident + 1, "ELF", 3) != 0) {
  FUNC_1("not an ELF file\n");
  return;
 }
 if (VAR_18->e_type != VAR_0) {
  FUNC_1("not an ELF executable\n");
  return;
 }
 if (!FUNC_3(VAR_18)) {
  FUNC_1("kernel not for this processor\n");
  return;
 }

 VAR_20 = VAR_18->e_entry;
 VAR_22 = VAR_18->e_phnum;
 VAR_21 = VAR_18->e_phoff;

 FUNC_1("loading ");
 FUNC_1(VAR_24);
 FUNC_1("...\n");

 for (VAR_15 = 0; VAR_15 < VAR_22; ++VAR_15) {
  VAR_16.len = sizeof(*VAR_19);
  VAR_16.addr = (long) VAR_11;
  FUNC_7(VAR_14, 1, (long) &VAR_16, VAR_21, VAR_8);
  FUNC_7((long) &VAR_17, 0, 0, 0, VAR_9);
  if (VAR_17.count != sizeof(*VAR_19)) {
   FUNC_1("failed to read phdr\n");
   return;
  }
  VAR_21 += sizeof(*VAR_19);

  VAR_19 = (struct elf_phdr *) VAR_11;

  if (VAR_19->p_type != VAR_1)
   continue;

  VAR_16.len = VAR_19->p_filesz;
  VAR_16.addr = FUNC_0(VAR_19->p_paddr);
  FUNC_7(VAR_14, 1, (long) &VAR_16, VAR_19->p_offset, VAR_8);
  FUNC_7((long) &VAR_17, 0, 0, 0, VAR_9);
  FUNC_6((char *)FUNC_0(VAR_19->p_paddr) + VAR_19->p_filesz, 0,
         VAR_19->p_memsz - VAR_19->p_filesz);
 }
 FUNC_7(VAR_14, 0, 0, 0, VAR_2);

 FUNC_1("starting kernel...\n");


 FUNC_4(VAR_10, 0xffffc000000UL);

 VAR_23 = FUNC_9(VAR_25, VAR_26);

 FUNC_7(0, (long) VAR_24, 0, 0, VAR_6);

 FUNC_2();
 FUNC_5((unsigned long) VAR_23, VAR_20);

 FUNC_1("kernel returned!\n");
 FUNC_7(-1, 0, 0, 0, VAR_4);
}
