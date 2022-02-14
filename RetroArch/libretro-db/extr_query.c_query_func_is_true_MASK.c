
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bool_; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_1__ val; } ;
struct argument {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct rmsgpack_dom_value FUNC_0(
      struct rmsgpack_dom_value VAR_1,
      unsigned VAR_2, const struct argument *VAR_3)
{
   struct rmsgpack_dom_value VAR_4;

   VAR_4.type = VAR_0;
   VAR_4.val.bool_ = 0;

   if (VAR_2 > 0 || VAR_1.type != VAR_0)
      VAR_4.val.bool_ = 0;
   else
      VAR_4.val.bool_ = VAR_1.val.bool_;

   return VAR_4;
}
