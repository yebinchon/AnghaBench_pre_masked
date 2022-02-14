
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; float min; float step; float max; int enforce_minrange; int enforce_maxrange; int flags; int ui_type; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_6__ {int index; } ;
typedef TYPE_2__ rarch_setting_info_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(
      rarch_setting_t **VAR_3,
      rarch_setting_info_t *VAR_4,
      float VAR_5, float VAR_6, float VAR_7,
      bool VAR_8, bool VAR_9)
{
   unsigned VAR_10 = VAR_4->index - 1;

   if ((*VAR_3)[VAR_10].type == VAR_1)
      (*VAR_3)[VAR_4->index - 1].ui_type
                                  = VAR_2;

   (*VAR_3)[VAR_10].min = VAR_5;
   (*VAR_3)[VAR_10].step = VAR_7;
   (*VAR_3)[VAR_10].max = VAR_6;
   (*VAR_3)[VAR_10].enforce_minrange = VAR_8;
   (*VAR_3)[VAR_10].enforce_maxrange = VAR_9;

   (*VAR_3)[VAR_4->index - 1].flags |= VAR_0;
}
