
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bool_; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_5__ {int int_; int uint_; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ val; } ;
struct TYPE_7__ {TYPE_4__ value; } ;
struct argument {scalar_t__ type; TYPE_3__ a; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct rmsgpack_dom_value*,TYPE_4__*) ;

__attribute__((used)) static struct rmsgpack_dom_value FUNC_1(
      struct rmsgpack_dom_value VAR_4,
      unsigned VAR_5, const struct argument * VAR_6)
{
   struct argument VAR_7;
   struct rmsgpack_dom_value VAR_8;

   VAR_8.type = VAR_1;
   VAR_8.val.bool_ = 0;

   if (VAR_5 == 1)
   {
      VAR_7 = VAR_6[0];

      if (VAR_7.type != VAR_0)
         VAR_8.val.bool_ = 0;
      else
      {
         if (VAR_4.type == VAR_3 && VAR_7.a.value.type == VAR_2)
         {
            VAR_7.a.value.type = VAR_3;
            VAR_7.a.value.val.uint_ = VAR_7.a.value.val.int_;
         }
         VAR_8.val.bool_ = (FUNC_0(&VAR_4, &VAR_7.a.value) == 0);
      }
   }

   return VAR_8;
}
