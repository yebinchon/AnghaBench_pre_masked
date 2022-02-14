
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ e_type; scalar_t__ e_machine; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__) ;

__attribute__((used)) static int32_t FUNC_1 (void *VAR_2)
{
   Elf32_Ehdr *VAR_3 = (Elf32_Ehdr*)VAR_2;

   if (!FUNC_0 (*VAR_3))
      return 0;

   if (VAR_3->e_type != VAR_1)
      return -1;

   if (VAR_3->e_machine != VAR_0)
      return -1;

   return 1;
}
