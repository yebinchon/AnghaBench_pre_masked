
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int len; TYPE_3__* items; } ;
struct TYPE_5__ {TYPE_1__ map; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_6__ {struct rmsgpack_dom_value value; int key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rmsgpack_dom_value const*,int *) ;

struct rmsgpack_dom_value *FUNC_1(
      const struct rmsgpack_dom_value *VAR_1,
      const struct rmsgpack_dom_value *VAR_2)
{
   unsigned VAR_3;
   if (VAR_1->type != VAR_0)
      return ((void*)0);

   for (VAR_3 = 0; VAR_3 < VAR_1->val.map.len; VAR_3++)
   {
      if (FUNC_0(VAR_2, &VAR_1->val.map.items[VAR_3].key) == 0)
         return &VAR_1->val.map.items[VAR_3].value;
   }
   return ((void*)0);
}
