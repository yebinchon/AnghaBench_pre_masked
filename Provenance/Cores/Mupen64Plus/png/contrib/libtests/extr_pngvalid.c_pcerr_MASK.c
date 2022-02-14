
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double maxpc16; double maxpc8; scalar_t__ calculations_use_input_precision; scalar_t__ assume_16_bit_calculations; } ;
typedef TYPE_1__ png_modifier ;



__attribute__((used)) static double FUNC_0(const png_modifier *VAR_0, int VAR_1, int VAR_2)
{



   if (VAR_0->assume_16_bit_calculations ||
      (VAR_0->calculations_use_input_precision ? VAR_1 : VAR_2) == 16)
      return VAR_0->maxpc16 * .01;
   else
      return VAR_0->maxpc8 * .01;
}
