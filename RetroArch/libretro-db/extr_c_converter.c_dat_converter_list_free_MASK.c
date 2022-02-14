
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* list; } ;
struct TYPE_7__ {TYPE_1__ value; int type; } ;
struct TYPE_8__ {int type; size_t count; struct TYPE_8__* values; int bt_root; TYPE_2__ map; struct TYPE_8__* list; } ;
typedef TYPE_3__ dat_converter_list_t ;



 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(dat_converter_list_t* VAR_1)
{
   if (!VAR_1)
      return;
   switch (VAR_1->type)
   {
   case 129:
      while (VAR_1->count--)
         FUNC_2(VAR_1->values[VAR_1->count].list);
      break;
   case 128:
      while (VAR_1->count--)
      {
         if (VAR_1->values[VAR_1->count].map.type == VAR_0)
            FUNC_2(VAR_1->values[VAR_1->count].map.value.list);
      }
      FUNC_0(VAR_1->bt_root);
      break;
   default:
      break;
   }

   FUNC_1(VAR_1->values);
   FUNC_1(VAR_1);
}
