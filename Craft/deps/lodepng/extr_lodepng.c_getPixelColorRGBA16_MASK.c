
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitdepth; scalar_t__ colortype; unsigned int key_r; unsigned int key_g; unsigned int key_b; scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned FUNC_0(unsigned short* VAR_4, unsigned short* VAR_5, unsigned short* VAR_6, unsigned short* VAR_7,
                                    const unsigned char* VAR_8, size_t VAR_9, const LodePNGColorMode* VAR_10)
{
  if(VAR_10->bitdepth != 16) return 85;

  if(VAR_10->colortype == VAR_0)
  {
    *VAR_4 = *VAR_5 = *VAR_6 = 256 * VAR_8[VAR_9 * 2 + 0] + VAR_8[VAR_9 * 2 + 1];
    if(VAR_10->key_defined && 256U * VAR_8[VAR_9 * 2 + 0] + VAR_8[VAR_9 * 2 + 1] == VAR_10->key_r) *VAR_7 = 0;
    else *VAR_7 = 65535;
  }
  else if(VAR_10->colortype == VAR_2)
  {
    *VAR_4 = 256 * VAR_8[VAR_9 * 6 + 0] + VAR_8[VAR_9 * 6 + 1];
    *VAR_5 = 256 * VAR_8[VAR_9 * 6 + 2] + VAR_8[VAR_9 * 6 + 3];
    *VAR_6 = 256 * VAR_8[VAR_9 * 6 + 4] + VAR_8[VAR_9 * 6 + 5];
    if(VAR_10->key_defined && 256U * VAR_8[VAR_9 * 6 + 0] + VAR_8[VAR_9 * 6 + 1] == VAR_10->key_r
       && 256U * VAR_8[VAR_9 * 6 + 2] + VAR_8[VAR_9 * 6 + 3] == VAR_10->key_g
       && 256U * VAR_8[VAR_9 * 6 + 4] + VAR_8[VAR_9 * 6 + 5] == VAR_10->key_b) *VAR_7 = 0;
    else *VAR_7 = 65535;
  }
  else if(VAR_10->colortype == VAR_1)
  {
    *VAR_4 = *VAR_5 = *VAR_6 = 256 * VAR_8[VAR_9 * 4 + 0] + VAR_8[VAR_9 * 4 + 1];
    *VAR_7 = 256 * VAR_8[VAR_9 * 4 + 2] + VAR_8[VAR_9 * 4 + 3];
  }
  else if(VAR_10->colortype == VAR_3)
  {
    *VAR_4 = 256 * VAR_8[VAR_9 * 8 + 0] + VAR_8[VAR_9 * 8 + 1];
    *VAR_5 = 256 * VAR_8[VAR_9 * 8 + 2] + VAR_8[VAR_9 * 8 + 3];
    *VAR_6 = 256 * VAR_8[VAR_9 * 8 + 4] + VAR_8[VAR_9 * 8 + 5];
    *VAR_7 = 256 * VAR_8[VAR_9 * 8 + 6] + VAR_8[VAR_9 * 8 + 7];
  }
  else return 85;

  return 0;
}
