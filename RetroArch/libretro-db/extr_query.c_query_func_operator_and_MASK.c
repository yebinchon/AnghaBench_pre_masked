
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bool_; } ;
struct rmsgpack_dom_value {TYPE_3__ val; int type; } ;
struct TYPE_4__ {int argv; int argc; int (* func ) (struct rmsgpack_dom_value,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ invocation; } ;
struct argument {scalar_t__ type; TYPE_2__ a; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct rmsgpack_dom_value FUNC_0 (struct rmsgpack_dom_value,int,struct argument const*) ;
 struct rmsgpack_dom_value FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct rmsgpack_dom_value,int ,int ) ;

__attribute__((used)) static struct rmsgpack_dom_value FUNC_3(
      struct rmsgpack_dom_value VAR_2,
      unsigned VAR_3, const struct argument * VAR_4)
{
   unsigned VAR_5;
   struct rmsgpack_dom_value VAR_6;

   VAR_6.type = VAR_1;
   VAR_6.val.bool_ = 0;

   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   {
      if (VAR_4[VAR_5].type == VAR_0)
         VAR_6 = FUNC_0(VAR_2, 1, &VAR_4[VAR_5]);
      else
      {
         VAR_6 = FUNC_1(
               VAR_4[VAR_5].a.invocation.func(VAR_2,
                  VAR_4[VAR_5].a.invocation.argc,
                  VAR_4[VAR_5].a.invocation.argv
                  ),
               0, ((void*)0));
      }

      if (!VAR_6.val.bool_)
         return VAR_6;
   }
   return VAR_6;
}
