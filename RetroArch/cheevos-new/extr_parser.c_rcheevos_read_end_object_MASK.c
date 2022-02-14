
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_lboards; scalar_t__ in_cheevos; } ;
typedef TYPE_1__ rcheevos_readud_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void* VAR_0)
{
   rcheevos_readud_t* VAR_1 = (rcheevos_readud_t*)VAR_0;

   if (VAR_1->in_cheevos)
      return FUNC_0(VAR_1);

   if (VAR_1->in_lboards)
      return FUNC_1(VAR_1);

   return 0;
}
