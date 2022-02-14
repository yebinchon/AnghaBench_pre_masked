
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned int len; struct rmsgpack_dom_value* items; } ;
struct TYPE_10__ {unsigned int len; TYPE_3__* items; } ;
struct TYPE_8__ {int len; int buff; } ;
struct TYPE_7__ {int len; int buff; } ;
struct TYPE_12__ {TYPE_5__ array; TYPE_4__ map; TYPE_2__ binary; TYPE_1__ string; int uint_; int int_; int bool_; } ;
struct rmsgpack_dom_value {int type; TYPE_6__ val; } ;
struct TYPE_9__ {struct rmsgpack_dom_value value; struct rmsgpack_dom_value key; } ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(
      const struct rmsgpack_dom_value *VAR_0,
      const struct rmsgpack_dom_value *VAR_1
)
{
   int VAR_2;
   unsigned VAR_3;

   if (VAR_0 == VAR_1)
      return 1;

   if (VAR_0->type != VAR_1->type)
      return 1;

   switch (VAR_0->type)
   {
      case 130:
         return 0;
      case 133:
         return VAR_0->val.bool_ == VAR_1->val.bool_ ? 0 : 1;
      case 132:
         return VAR_0->val.int_ == VAR_1->val.int_ ? 0 : 1;
      case 128:
         return VAR_0->val.uint_ == VAR_1->val.uint_ ? 0 : 1;
      case 129:
         if (VAR_0->val.string.len != VAR_1->val.string.len)
            return 1;
         return FUNC_1(VAR_0->val.string.buff, VAR_1->val.string.buff, VAR_0->val.string.len);
      case 134:
         if (VAR_0->val.binary.len != VAR_1->val.binary.len)
            return 1;
         return FUNC_0(VAR_0->val.binary.buff, VAR_1->val.binary.buff, VAR_0->val.binary.len);
      case 131:
         if (VAR_0->val.map.len != VAR_1->val.map.len)
            return 1;
         for (VAR_3 = 0; VAR_3 < VAR_0->val.map.len; VAR_3++)
         {
            if ((VAR_2 = FUNC_2(&VAR_0->val.map.items[VAR_3].key,
                        &VAR_1->val.map.items[VAR_3].key)) != 0)
               return VAR_2;
            if ((VAR_2 = FUNC_2(&VAR_0->val.map.items[VAR_3].value,
                        &VAR_1->val.map.items[VAR_3].value)) != 0)
               return VAR_2;
         }
         break;
      case 135:
         if (VAR_0->val.array.len != VAR_1->val.array.len)
            return 1;
         for (VAR_3 = 0; VAR_3 < VAR_0->val.array.len; VAR_3++)
         {
            if ((VAR_2 = FUNC_2(&VAR_0->val.array.items[VAR_3],
                        &VAR_1->val.array.items[VAR_3])) != 0)
               return VAR_2;
         }
         break;
   }

   return 1;
}
