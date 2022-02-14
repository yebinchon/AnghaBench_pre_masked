
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ field_hash; int lboard_count; scalar_t__ in_lboards; int unofficial_count; int core_count; scalar_t__ in_cheevos; } ;
typedef TYPE_1__ rcheevos_countud_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_1(void* VAR_2,
      const char* VAR_3, size_t VAR_4)
{
   rcheevos_countud_t* VAR_5 = (rcheevos_countud_t*)VAR_2;

   if (VAR_5->in_cheevos && VAR_5->field_hash == VAR_0)
   {
      long VAR_6 = FUNC_0(VAR_3, ((void*)0), 10);

      if (VAR_6 == 3)
         VAR_5->core_count++;
      else if (VAR_6 == 5)
         VAR_5->unofficial_count++;
   }
   else if (VAR_5->in_lboards && VAR_5->field_hash == VAR_1)
      VAR_5->lboard_count++;

   return 0;
}
