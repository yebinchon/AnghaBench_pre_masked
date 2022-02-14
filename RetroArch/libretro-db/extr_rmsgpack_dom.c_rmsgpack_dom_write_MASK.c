
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
typedef int RFILE ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(RFILE *VAR_0, const struct rmsgpack_dom_value *VAR_1)
{
   unsigned VAR_2;
   int VAR_3 = 0;
   int VAR_4 = 0;

   switch (VAR_1->type)
   {
      case 130:
         return FUNC_5(VAR_0);
      case 133:
         return FUNC_2(VAR_0, VAR_1->val.bool_);
      case 132:
         return FUNC_3(VAR_0, VAR_1->val.int_);
      case 128:
         return FUNC_7(VAR_0, VAR_1->val.uint_);
      case 129:
         return FUNC_6(VAR_0, VAR_1->val.string.buff, VAR_1->val.string.len);
      case 134:
         return FUNC_1(VAR_0, VAR_1->val.binary.buff, VAR_1->val.binary.len);
      case 131:
         if ((VAR_3 = FUNC_4(VAR_0, VAR_1->val.map.len)) < 0)
            return VAR_3;
         VAR_4 += VAR_3;

         for (VAR_2 = 0; VAR_2 < VAR_1->val.map.len; VAR_2++)
         {
            if ((VAR_3 = FUNC_8(VAR_0, &VAR_1->val.map.items[VAR_2].key)) < 0)
               return VAR_3;
            VAR_4 += VAR_3;
            if ((VAR_3 = FUNC_8(VAR_0, &VAR_1->val.map.items[VAR_2].value)) < 0)
               return VAR_3;
            VAR_4 += VAR_3;
         }
         break;
      case 135:
         if ((VAR_3 = FUNC_0(VAR_0, VAR_1->val.array.len)) < 0)
            return VAR_3;
         VAR_4 += VAR_3;

         for (VAR_2 = 0; VAR_2 < VAR_1->val.array.len; VAR_2++)
         {
            if ((VAR_3 = FUNC_8(VAR_0, &VAR_1->val.array.items[VAR_2])) < 0)
               return VAR_3;
            VAR_4 += VAR_3;
         }
   }
   return VAR_4;
}
