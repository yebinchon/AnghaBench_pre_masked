
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bool_; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_3__ val; } ;
struct TYPE_4__ {int argv; int argc; int (* func ) (struct rmsgpack_dom_value,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ invocation; int value; } ;
struct argument {scalar_t__ type; TYPE_2__ a; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rmsgpack_dom_value FUNC_0 (struct rmsgpack_dom_value,int,struct argument*) ;
 struct rmsgpack_dom_value FUNC_1 (int ,int ,int *) ;
 struct rmsgpack_dom_value* FUNC_2 (struct rmsgpack_dom_value*,int *) ;
 int FUNC_3 (struct rmsgpack_dom_value,int ,int ) ;

__attribute__((used)) static struct rmsgpack_dom_value FUNC_4(
      struct rmsgpack_dom_value VAR_4,
      unsigned VAR_5, const struct argument *VAR_6)
{
   unsigned VAR_7;
   struct argument VAR_8;
   struct rmsgpack_dom_value VAR_9;
   struct rmsgpack_dom_value VAR_10;
   struct rmsgpack_dom_value *VAR_11 = ((void*)0);

   VAR_9.type = VAR_1;
   VAR_9.val.bool_ = 1;

   VAR_10.type = VAR_3;

   if (VAR_5 % 2 != 0)
   {
      VAR_9.val.bool_ = 0;
      return VAR_9;
   }

   if (VAR_4.type != VAR_2)
      return VAR_9;

   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += 2)
   {
      VAR_8 = VAR_6[VAR_7];
      if (VAR_8.type != VAR_0)
      {
         VAR_9.val.bool_ = 0;
         goto clean;
      }
      VAR_11 = FUNC_2(&VAR_4, &VAR_8.a.value);
      if (!VAR_11)
         VAR_11 = &VAR_10;
      VAR_8 = VAR_6[VAR_7 + 1];
      if (VAR_8.type == VAR_0)
         VAR_9 = FUNC_0(*VAR_11, 1, &VAR_8);
      else
      {
         VAR_9 = FUNC_1(VAR_8.a.invocation.func(
                  *VAR_11,
                  VAR_8.a.invocation.argc,
                  VAR_8.a.invocation.argv
                  ), 0, ((void*)0));
         VAR_11 = ((void*)0);
      }
      if (!VAR_9.val.bool_)
         break;
   }
clean:
   return VAR_9;
}
