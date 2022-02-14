
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ hash; struct TYPE_13__* next; int value; } ;
typedef TYPE_4__ dat_converter_match_key_t ;
struct TYPE_14__ {scalar_t__ type; int count; TYPE_3__* values; } ;
typedef TYPE_5__ dat_converter_list_t ;
struct TYPE_10__ {char const* string; TYPE_5__* list; } ;
struct TYPE_11__ {scalar_t__ hash; scalar_t__ type; TYPE_1__ value; int key; } ;
struct TYPE_12__ {TYPE_2__ map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;

__attribute__((used)) static const char* FUNC_2(
      dat_converter_list_t* VAR_2,
      dat_converter_match_key_t* VAR_3)
{
   int VAR_4;

   FUNC_0(VAR_3);

   if (VAR_2->type != VAR_0)
      return ((void*)0);

   for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++)
   {
      if (VAR_2->values[VAR_4].map.hash == VAR_3->hash)
      {
         FUNC_0(FUNC_1(VAR_2->values[VAR_4].map.key, VAR_3->value));

         if (VAR_3->next)
            return FUNC_2(
                  VAR_2->values[VAR_4].map.value.list, VAR_3->next);

         if (VAR_2->values[VAR_4].map.type == VAR_1)
            return VAR_2->values[VAR_4].map.value.string;

         return ((void*)0);

      }
   }
   return ((void*)0);
}
