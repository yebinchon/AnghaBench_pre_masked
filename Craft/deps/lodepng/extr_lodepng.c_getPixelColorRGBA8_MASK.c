
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ colortype; int bitdepth; unsigned char key_r; unsigned char key_g; unsigned char key_b; unsigned int palettesize; unsigned char* palette; scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (size_t*,unsigned char const*,size_t) ;

__attribute__((used)) static unsigned FUNC_1(unsigned char* VAR_5, unsigned char* VAR_6,
                                   unsigned char* VAR_7, unsigned char* VAR_8,
                                   const unsigned char* VAR_9, size_t VAR_10,
                                   const LodePNGColorMode* VAR_11,
                                   unsigned VAR_12)
{
  if(VAR_11->colortype == VAR_0)
  {
    if(VAR_11->bitdepth == 8)
    {
      *VAR_5 = *VAR_6 = *VAR_7 = VAR_9[VAR_10];
      if(VAR_11->key_defined && *VAR_5 == VAR_11->key_r) *VAR_8 = 0;
      else *VAR_8 = 255;
    }
    else if(VAR_11->bitdepth == 16)
    {
      *VAR_5 = *VAR_6 = *VAR_7 = VAR_9[VAR_10 * 2 + 0];
      if(VAR_11->key_defined && 256U * VAR_9[VAR_10 * 2 + 0] + VAR_9[VAR_10 * 2 + 1] == VAR_11->key_r) *VAR_8 = 0;
      else *VAR_8 = 255;
    }
    else
    {
      unsigned VAR_13 = ((1U << VAR_11->bitdepth) - 1U);
      size_t VAR_14 = VAR_10 * VAR_11->bitdepth;
      unsigned VAR_15 = FUNC_0(&VAR_14, VAR_9, VAR_11->bitdepth);
      *VAR_5 = *VAR_6 = *VAR_7 = (VAR_15 * 255) / VAR_13;
      if(VAR_11->key_defined && VAR_15 == VAR_11->key_r) *VAR_8 = 0;
      else *VAR_8 = 255;
    }
  }
  else if(VAR_11->colortype == VAR_3)
  {
    if(VAR_11->bitdepth == 8)
    {
      *VAR_5 = VAR_9[VAR_10 * 3 + 0]; *VAR_6 = VAR_9[VAR_10 * 3 + 1]; *VAR_7 = VAR_9[VAR_10 * 3 + 2];
      if(VAR_11->key_defined && *VAR_5 == VAR_11->key_r && *VAR_6 == VAR_11->key_g && *VAR_7 == VAR_11->key_b) *VAR_8 = 0;
      else *VAR_8 = 255;
    }
    else
    {
      *VAR_5 = VAR_9[VAR_10 * 6 + 0];
      *VAR_6 = VAR_9[VAR_10 * 6 + 2];
      *VAR_7 = VAR_9[VAR_10 * 6 + 4];
      if(VAR_11->key_defined && 256U * VAR_9[VAR_10 * 6 + 0] + VAR_9[VAR_10 * 6 + 1] == VAR_11->key_r
         && 256U * VAR_9[VAR_10 * 6 + 2] + VAR_9[VAR_10 * 6 + 3] == VAR_11->key_g
         && 256U * VAR_9[VAR_10 * 6 + 4] + VAR_9[VAR_10 * 6 + 5] == VAR_11->key_b) *VAR_8 = 0;
      else *VAR_8 = 255;
    }
  }
  else if(VAR_11->colortype == VAR_2)
  {
    unsigned VAR_16;
    if(VAR_11->bitdepth == 8) VAR_16 = VAR_9[VAR_10];
    else
    {
      size_t VAR_17 = VAR_10 * VAR_11->bitdepth;
      VAR_16 = FUNC_0(&VAR_17, VAR_9, VAR_11->bitdepth);
    }

    if(VAR_16 >= VAR_11->palettesize)
    {

      if(!VAR_12) return (VAR_11->bitdepth == 8 ? 46 : 47);
      *VAR_5 = *VAR_6 = *VAR_7 = 0;
      *VAR_8 = 255;
    }
    else
    {
      *VAR_5 = VAR_11->palette[VAR_16 * 4 + 0];
      *VAR_6 = VAR_11->palette[VAR_16 * 4 + 1];
      *VAR_7 = VAR_11->palette[VAR_16 * 4 + 2];
      *VAR_8 = VAR_11->palette[VAR_16 * 4 + 3];
    }
  }
  else if(VAR_11->colortype == VAR_1)
  {
    if(VAR_11->bitdepth == 8)
    {
      *VAR_5 = *VAR_6 = *VAR_7 = VAR_9[VAR_10 * 2 + 0];
      *VAR_8 = VAR_9[VAR_10 * 2 + 1];
    }
    else
    {
      *VAR_5 = *VAR_6 = *VAR_7 = VAR_9[VAR_10 * 4 + 0];
      *VAR_8 = VAR_9[VAR_10 * 4 + 2];
    }
  }
  else if(VAR_11->colortype == VAR_4)
  {
    if(VAR_11->bitdepth == 8)
    {
      *VAR_5 = VAR_9[VAR_10 * 4 + 0];
      *VAR_6 = VAR_9[VAR_10 * 4 + 1];
      *VAR_7 = VAR_9[VAR_10 * 4 + 2];
      *VAR_8 = VAR_9[VAR_10 * 4 + 3];
    }
    else
    {
      *VAR_5 = VAR_9[VAR_10 * 8 + 0];
      *VAR_6 = VAR_9[VAR_10 * 8 + 2];
      *VAR_7 = VAR_9[VAR_10 * 8 + 4];
      *VAR_8 = VAR_9[VAR_10 * 8 + 6];
    }
  }

  return 0;
}
