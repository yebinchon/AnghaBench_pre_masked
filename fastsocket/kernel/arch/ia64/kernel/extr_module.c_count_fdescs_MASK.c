
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int r_info; } ;
typedef TYPE_1__ Elf64_Rela ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_2 (const Elf64_Rela *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  switch (FUNC_0(VAR_0[VAR_2].r_info)) {
        case 139:
        case 141:
        case 140:
        case 138:
        case 137:
        case 134:
        case 133:
        case 132:
        case 131:
        case 130:
        case 129:
        case 135:
        case 136:






        case 128:
   if (!FUNC_1(VAR_0, VAR_2))
    VAR_3++;
   break;
  }
 }
 return VAR_3;
}
