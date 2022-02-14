
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


struct TYPE_11__ {int buff; } ;
struct TYPE_12__ {int bool_; TYPE_5__ string; } ;
struct rmsgpack_dom_value {scalar_t__ type; TYPE_6__ val; } ;
struct TYPE_7__ {int buff; } ;
struct TYPE_8__ {TYPE_1__ string; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_10__ {TYPE_3__ value; } ;
struct argument {scalar_t__ type; TYPE_4__ a; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct rmsgpack_dom_value FUNC_1(
      struct rmsgpack_dom_value VAR_3,
      unsigned VAR_4, const struct argument * VAR_5)
{
   struct rmsgpack_dom_value VAR_6;
   unsigned VAR_7 = 0;

   VAR_6.type = VAR_1;
   VAR_6.val.bool_ = 0;

   (void)VAR_7;

   if (VAR_4 != 1)
      return VAR_6;
   if (VAR_5[0].type != VAR_0 || VAR_5[0].a.value.type != VAR_2)
      return VAR_6;
   if (VAR_3.type != VAR_2)
      return VAR_6;
   VAR_6.val.bool_ = FUNC_0(
         VAR_5[0].a.value.val.string.buff,
         VAR_3.val.string.buff,
         0
         ) == 0;
   return VAR_6;
}
