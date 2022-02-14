
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_6__* list; } ;
struct TYPE_15__ {int key; int hash; scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_3__ dat_converter_map_t ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__* values; } ;
typedef TYPE_4__ dat_converter_list_t ;
struct TYPE_17__ {int hash; size_t index; struct TYPE_17__* right; struct TYPE_17__* left; } ;
typedef TYPE_5__ dat_converter_bt_node_t ;
struct TYPE_18__ {scalar_t__ type; int count; int * values; } ;
struct TYPE_14__ {TYPE_3__ map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static dat_converter_bt_node_t* FUNC_5(
      dat_converter_list_t* VAR_2,
      dat_converter_bt_node_t** VAR_3,
      dat_converter_map_t* VAR_4)
{
   FUNC_3(VAR_4->key);
   FUNC_3(VAR_2->type == VAR_1);

   if (!*VAR_3)
   {
      *VAR_3 = FUNC_0(1, sizeof(dat_converter_bt_node_t));
      return *VAR_3;
   }

   int VAR_5 = (*VAR_3)->hash - VAR_4->hash;

   if (!VAR_5)
      VAR_5 = FUNC_4(VAR_2->values[(*VAR_3)->index].map.key, VAR_4->key);

   if (VAR_5 < 0)
      return FUNC_5(VAR_2, &(*VAR_3)->left, VAR_4);
   else if (VAR_5 > 0)
      return FUNC_5(VAR_2, &(*VAR_3)->right, VAR_4);



   if (VAR_2->values[(*VAR_3)->index].map.type == VAR_0)
   {
      if (VAR_4->type == VAR_0)
      {
         int VAR_6;

         FUNC_3(VAR_2->values[(*VAR_3)->index].map.value.list->type
               == VAR_4->value.list->type);

         for (VAR_6 = 0; VAR_6 < VAR_4->value.list->count; VAR_6++)
            FUNC_1(
                  VAR_2->values[(*VAR_3)->index].map.value.list,
                  &VAR_4->value.list->values[VAR_6]);


         VAR_4->value.list->count = 0;
         FUNC_2(VAR_4->value.list);
      }
   }
   else
      VAR_2->values[(*VAR_3)->index].map = *VAR_4;

   return ((void*)0);
}
