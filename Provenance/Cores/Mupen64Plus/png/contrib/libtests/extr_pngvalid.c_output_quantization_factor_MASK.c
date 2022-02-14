
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ calculations_use_input_precision; } ;
typedef TYPE_1__ png_modifier ;



__attribute__((used)) static int FUNC_0(const png_modifier *VAR_0, int VAR_1,
   int VAR_2)
{
   if (VAR_2 == 16 && VAR_1 != 16 &&
      VAR_0->calculations_use_input_precision)
      return 257;
   else
      return 1;
}
