
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int r_info; } ;
typedef TYPE_1__ Elf_Rela ;


 int FUNC_0 (int ) ;



__attribute__((used)) static inline unsigned long FUNC_1(const Elf_Rela *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = 0;

 for (; VAR_1 > 0; VAR_1--, VAR_0++)
 {
  switch (FUNC_0(VAR_0->r_info)) {
   case 129:
   case 128:
    VAR_2++;
  }
 }

 return VAR_2;
}
