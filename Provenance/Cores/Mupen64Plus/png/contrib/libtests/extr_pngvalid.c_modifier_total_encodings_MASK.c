
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ngammas; unsigned int nencodings; int bit_depth; scalar_t__ assume_16_bit_calculations; } ;
typedef TYPE_1__ png_modifier ;



__attribute__((used)) static unsigned int
FUNC_0(const png_modifier *VAR_0)
{
   return 1 +
      VAR_0->ngammas +
      VAR_0->nencodings +
      ((VAR_0->bit_depth == 16 || VAR_0->assume_16_bit_calculations) ?
         VAR_0->nencodings : 0);
}
