
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitdepth; scalar_t__ colortype; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned FUNC_0(unsigned char* VAR_4, size_t VAR_5,
                              const LodePNGColorMode* VAR_6,
                              unsigned short VAR_7, unsigned short VAR_8, unsigned short VAR_9, unsigned short VAR_10)
{
  if(VAR_6->bitdepth != 16) return 85;
  if(VAR_6->colortype == VAR_0)
  {
    unsigned short VAR_11 = VAR_7; ;
    VAR_4[VAR_5 * 2 + 0] = (VAR_11 >> 8) & 255;
    VAR_4[VAR_5 * 2 + 1] = VAR_11 & 255;
  }
  else if(VAR_6->colortype == VAR_2)
  {
    VAR_4[VAR_5 * 6 + 0] = (VAR_7 >> 8) & 255;
    VAR_4[VAR_5 * 6 + 1] = VAR_7 & 255;
    VAR_4[VAR_5 * 6 + 2] = (VAR_8 >> 8) & 255;
    VAR_4[VAR_5 * 6 + 3] = VAR_8 & 255;
    VAR_4[VAR_5 * 6 + 4] = (VAR_9 >> 8) & 255;
    VAR_4[VAR_5 * 6 + 5] = VAR_9 & 255;
  }
  else if(VAR_6->colortype == VAR_1)
  {
    unsigned short VAR_12 = VAR_7; ;
    VAR_4[VAR_5 * 4 + 0] = (VAR_12 >> 8) & 255;
    VAR_4[VAR_5 * 4 + 1] = VAR_12 & 255;
    VAR_4[VAR_5 * 4 + 2] = (VAR_10 >> 8) & 255;
    VAR_4[VAR_5 * 4 + 3] = VAR_10 & 255;
  }
  else if(VAR_6->colortype == VAR_3)
  {
    VAR_4[VAR_5 * 8 + 0] = (VAR_7 >> 8) & 255;
    VAR_4[VAR_5 * 8 + 1] = VAR_7 & 255;
    VAR_4[VAR_5 * 8 + 2] = (VAR_8 >> 8) & 255;
    VAR_4[VAR_5 * 8 + 3] = VAR_8 & 255;
    VAR_4[VAR_5 * 8 + 4] = (VAR_9 >> 8) & 255;
    VAR_4[VAR_5 * 8 + 5] = VAR_9 & 255;
    VAR_4[VAR_5 * 8 + 6] = (VAR_10 >> 8) & 255;
    VAR_4[VAR_5 * 8 + 7] = VAR_10 & 255;
  }

  return 0;
}
