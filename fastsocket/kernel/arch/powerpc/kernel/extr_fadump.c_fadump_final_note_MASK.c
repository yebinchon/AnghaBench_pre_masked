
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct elf_note {scalar_t__ n_type; scalar_t__ n_descsz; scalar_t__ n_namesz; } ;
typedef int note ;


 int FUNC_0 (int *,struct elf_note*,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0)
{
 struct elf_note VAR_1;

 VAR_1.n_namesz = 0;
 VAR_1.n_descsz = 0;
 VAR_1.n_type = 0;
 FUNC_0(VAR_0, &VAR_1, sizeof(VAR_1));
}
