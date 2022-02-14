
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bool_; int int_; } ;
struct rmsgpack_dom_value {int type; TYPE_1__ val; } ;
struct TYPE_6__ {unsigned int uint_; int int_; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ val; } ;
struct TYPE_8__ {TYPE_3__ value; } ;
struct argument {scalar_t__ type; TYPE_4__ a; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static struct rmsgpack_dom_value FUNC_0(
      struct rmsgpack_dom_value VAR_2,
      unsigned VAR_3, const struct argument * VAR_4)
{
   struct rmsgpack_dom_value VAR_5;
   unsigned VAR_6 = 0;

   VAR_5.type = VAR_1;
   VAR_5.val.bool_ = 0;

   (void)VAR_6;

   if (VAR_3 != 2)
      return VAR_5;
   if (VAR_4[0].type != VAR_0 || VAR_4[1].type != VAR_0)
      return VAR_5;
   if (VAR_4[0].a.value.type != 129 || VAR_4[1].a.value.type != 129)
      return VAR_5;

   switch (VAR_2.type)
   {
      case 129:
         VAR_5.val.bool_ = (
               (VAR_2.val.int_ >= VAR_4[0].a.value.val.int_)
               && (VAR_2.val.int_ <= VAR_4[1].a.value.val.int_));
         break;
      case 128:
         VAR_5.val.bool_ = (
               ((unsigned)VAR_2.val.int_ >= VAR_4[0].a.value.val.uint_)
               && (VAR_2.val.int_ <= VAR_4[1].a.value.val.int_));
         break;
      default:
         return VAR_5;
   }

   return VAR_5;
}
