
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double maxout16; int maxout8; scalar_t__ calculations_use_input_precision; } ;
typedef TYPE_1__ png_modifier ;



__attribute__((used)) static double FUNC_0(const png_modifier *VAR_0, int VAR_1, int VAR_2)
{







   if (VAR_2 == 2)
      return .73182-.5;

   if (VAR_2 == 4)
      return .90644-.5;

   if ((VAR_0->calculations_use_input_precision ? VAR_1 : VAR_2) == 16)
      return VAR_0->maxout16;




   else if (VAR_2 == 16)
      return VAR_0->maxout8 * 257;

   else
      return VAR_0->maxout8;
}
