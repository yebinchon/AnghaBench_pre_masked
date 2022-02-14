
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ field_hash; int in_cheevos; int in_lboards; } ;
typedef TYPE_1__ rcheevos_countud_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t) ;

__attribute__((used)) static int FUNC_1(void* VAR_2,
      const char* VAR_3, size_t VAR_4)
{
   rcheevos_countud_t* VAR_5 = (rcheevos_countud_t*)VAR_2;

   VAR_5->field_hash = FUNC_0(VAR_3, VAR_4);

   if (VAR_5->field_hash == VAR_0)
      VAR_5->in_cheevos = 1;
   else if (VAR_5->field_hash == VAR_1)
      VAR_5->in_lboards = 1;

   return 0;
}
