
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const** badge_id_list; int* badge_locked; } ;
typedef TYPE_1__ badges_ctx_t ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1 (badges_ctx_t *VAR_0, int VAR_1,
      const char *VAR_2, bool VAR_3)
{
   if (!VAR_0)
      return;

   VAR_0->badge_id_list[VAR_1] = VAR_2;
   VAR_0->badge_locked[VAR_1] = VAR_3;
   FUNC_0(VAR_0, VAR_1);
}
