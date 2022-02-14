
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_prpsinfo {char pr_sname; int pr_fname; } ;
typedef int prpsinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct elf_prpsinfo*,int ,int) ;
 void* FUNC_1 (void*,int ,struct elf_prpsinfo*,int,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_2)
{
 struct elf_prpsinfo VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.pr_sname = 'R';
 FUNC_2(VAR_3.pr_fname, "vmlinux");
 return FUNC_1(VAR_2, VAR_1, &VAR_3, sizeof(VAR_3),
         VAR_0);
}
