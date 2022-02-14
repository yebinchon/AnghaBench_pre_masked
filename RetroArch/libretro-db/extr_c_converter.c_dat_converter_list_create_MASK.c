
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int capacity; int * values; int * bt_root; scalar_t__ count; int type; } ;
typedef TYPE_1__ dat_converter_list_t ;
typedef int dat_converter_list_item_t ;
typedef int dat_converter_list_enum ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static dat_converter_list_t* FUNC_1(
      dat_converter_list_enum VAR_0)
{
   dat_converter_list_t* VAR_1 = FUNC_0(sizeof(*VAR_1));

   VAR_1->type = VAR_0;
   VAR_1->count = 0;
   VAR_1->capacity = (1 << 2);
   VAR_1->bt_root = ((void*)0);
   VAR_1->values = (dat_converter_list_item_t*)FUNC_0(
         sizeof(*VAR_1->values) * VAR_1->capacity);

   return VAR_1;
}
