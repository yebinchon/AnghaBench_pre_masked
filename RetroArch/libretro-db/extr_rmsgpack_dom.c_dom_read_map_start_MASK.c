
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {unsigned int len; struct rmsgpack_dom_pair* items; } ;
struct TYPE_4__ {TYPE_1__ map; } ;
struct rmsgpack_dom_value {TYPE_2__ val; int type; } ;
struct rmsgpack_dom_pair {int key; int value; } ;
struct dom_reader_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 struct rmsgpack_dom_value* FUNC_1 (struct dom_reader_state*) ;
 scalar_t__ FUNC_2 (struct dom_reader_state*,int *) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_2, void *VAR_3)
{
   unsigned VAR_4;
   struct rmsgpack_dom_pair *VAR_5 = ((void*)0);
   struct dom_reader_state *VAR_6 = (struct dom_reader_state *)VAR_3;
   struct rmsgpack_dom_value *VAR_7 = FUNC_1(VAR_6);

   VAR_7->type = VAR_1;
   VAR_7->val.map.len = VAR_2;
   VAR_7->val.map.items = ((void*)0);

   VAR_5 = (struct rmsgpack_dom_pair *)FUNC_0(VAR_2,
         sizeof(struct rmsgpack_dom_pair));

   if (!VAR_5)
      return -VAR_0;

   VAR_7->val.map.items = VAR_5;

   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   {
      if (FUNC_2(VAR_6, &VAR_5[VAR_4].value) < 0)
         return -VAR_0;
      if (FUNC_2(VAR_6, &VAR_5[VAR_4].key) < 0)
         return -VAR_0;
   }

   return 0;
}
