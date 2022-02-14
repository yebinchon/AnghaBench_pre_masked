
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_shndx; int st_name; } ;
typedef TYPE_1__ Elf64_Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Elf64_Sym *VAR_1, unsigned int VAR_2, char *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_1[VAR_4].st_shndx == VAR_0) {
   char *VAR_5 = VAR_3 + VAR_1[VAR_4].st_name;
   if (VAR_5[0] == '.')
    FUNC_0(VAR_5, VAR_5+1, FUNC_1(VAR_5));
  }
 }
}
