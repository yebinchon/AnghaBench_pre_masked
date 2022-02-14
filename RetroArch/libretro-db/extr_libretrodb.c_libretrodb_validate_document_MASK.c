
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; char* buff; } ;
struct TYPE_6__ {unsigned int len; TYPE_1__* items; } ;
struct TYPE_8__ {TYPE_3__ string; TYPE_2__ map; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_4__ val; } ;
struct TYPE_5__ {struct rmsgpack_dom_value value; struct rmsgpack_dom_value key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct rmsgpack_dom_value *VAR_3)
{
   unsigned VAR_4;
   struct rmsgpack_dom_value VAR_5, VAR_6;
   int VAR_7 = 0;

   if (VAR_3->type != VAR_1)
      return -VAR_0;

   for (VAR_4 = 0; VAR_4 < VAR_3->val.map.len; VAR_4++)
   {
      VAR_5 = VAR_3->val.map.items[VAR_4].key;
      VAR_6 = VAR_3->val.map.items[VAR_4].value;

      if (VAR_5.type != VAR_2)
         return -VAR_0;

      if (VAR_5.val.string.len <= 0)
         return -VAR_0;

      if (VAR_5.val.string.buff[0] == '$')
         return -VAR_0;

      if (VAR_6.type != VAR_1)
         continue;

      if ((VAR_7 == FUNC_0(&VAR_6)) != 0)
         return VAR_7;
   }

   return VAR_7;
}
