
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


typedef size_t uint32_t ;
struct TYPE_11__ {size_t len; struct rmsgpack_dom_value* items; } ;
struct TYPE_10__ {size_t len; TYPE_3__* items; } ;
struct TYPE_8__ {int len; int buff; } ;
struct TYPE_7__ {int buff; } ;
struct TYPE_12__ {TYPE_5__ array; TYPE_4__ map; TYPE_2__ binary; TYPE_1__ string; int bool_; int uint_; int int_; } ;
struct rmsgpack_dom_value {int type; TYPE_6__ val; } ;
typedef int lua_State ;
struct TYPE_9__ {struct rmsgpack_dom_value value; struct rmsgpack_dom_value key; } ;
 int FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_0, struct rmsgpack_dom_value *VAR_1)
{
   uint32_t VAR_2;

   switch(VAR_1->type)
   {
      case 132:
         FUNC_4(VAR_0, VAR_1->val.int_);
         break;
      case 128:
         FUNC_4(VAR_0, VAR_1->val.uint_);
         break;
      case 134:
         FUNC_2(VAR_0, VAR_1->val.binary.buff, VAR_1->val.binary.len);
         break;
      case 133:
         FUNC_1(VAR_0, VAR_1->val.bool_);
         break;
      case 130:
         FUNC_3(VAR_0);
         break;
      case 129:
         FUNC_2(VAR_0, VAR_1->val.string.buff, VAR_1->val.binary.len);
         break;
      case 131:
         FUNC_0(VAR_0, 0, VAR_1->val.map.len);
         for (VAR_2 = 0; VAR_2 < VAR_1->val.map.len; VAR_2++)
         {
            FUNC_6(VAR_0, &VAR_1->val.map.items[VAR_2].key);
            FUNC_6(VAR_0, &VAR_1->val.map.items[VAR_2].value);
            FUNC_5(VAR_0, -3);
         }
         break;
      case 135:
         FUNC_0(VAR_0, VAR_1->val.array.len, 0);
         for (VAR_2 = 0; VAR_2 < VAR_1->val.array.len; VAR_2++)
         {
            FUNC_4(VAR_0, VAR_2 + 1);
            FUNC_6(VAR_0, &VAR_1->val.array.items[VAR_2]);
            FUNC_5(VAR_0, -3);
         }
         break;
   }
}
