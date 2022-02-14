
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ colortype; int bitdepth; unsigned char const key_r; unsigned char key_g; unsigned char key_b; unsigned int palettesize; unsigned char* palette; scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (size_t*,unsigned char const*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned char* VAR_5, size_t VAR_6,
                                    unsigned VAR_7, const unsigned char* VAR_8,
                                    const LodePNGColorMode* VAR_9,
                                    unsigned VAR_10)
{
  unsigned VAR_11 = VAR_7 ? 4 : 3;
  size_t VAR_12;
  if(VAR_9->colortype == VAR_0)
  {
    if(VAR_9->bitdepth == 8)
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_5[1] = VAR_5[2] = VAR_8[VAR_12];
        if(VAR_7) VAR_5[3] = VAR_9->key_defined && VAR_8[VAR_12] == VAR_9->key_r ? 0 : 255;
      }
    }
    else if(VAR_9->bitdepth == 16)
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_5[1] = VAR_5[2] = VAR_8[VAR_12 * 2];
        if(VAR_7) VAR_5[3] = VAR_9->key_defined && 256U * VAR_8[VAR_12 * 2 + 0] + VAR_8[VAR_12 * 2 + 1] == VAR_9->key_r ? 0 : 255;
      }
    }
    else
    {
      unsigned VAR_13 = ((1U << VAR_9->bitdepth) - 1U);
      size_t VAR_14 = 0;
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        unsigned VAR_15 = FUNC_0(&VAR_14, VAR_8, VAR_9->bitdepth);
        VAR_5[0] = VAR_5[1] = VAR_5[2] = (VAR_15 * 255) / VAR_13;
        if(VAR_7) VAR_5[3] = VAR_9->key_defined && VAR_15 == VAR_9->key_r ? 0 : 255;
      }
    }
  }
  else if(VAR_9->colortype == VAR_3)
  {
    if(VAR_9->bitdepth == 8)
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_8[VAR_12 * 3 + 0];
        VAR_5[1] = VAR_8[VAR_12 * 3 + 1];
        VAR_5[2] = VAR_8[VAR_12 * 3 + 2];
        if(VAR_7) VAR_5[3] = VAR_9->key_defined && VAR_5[0] == VAR_9->key_r
           && VAR_5[1]== VAR_9->key_g && VAR_5[2] == VAR_9->key_b ? 0 : 255;
      }
    }
    else
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_8[VAR_12 * 6 + 0];
        VAR_5[1] = VAR_8[VAR_12 * 6 + 2];
        VAR_5[2] = VAR_8[VAR_12 * 6 + 4];
        if(VAR_7) VAR_5[3] = VAR_9->key_defined
           && 256U * VAR_8[VAR_12 * 6 + 0] + VAR_8[VAR_12 * 6 + 1] == VAR_9->key_r
           && 256U * VAR_8[VAR_12 * 6 + 2] + VAR_8[VAR_12 * 6 + 3] == VAR_9->key_g
           && 256U * VAR_8[VAR_12 * 6 + 4] + VAR_8[VAR_12 * 6 + 5] == VAR_9->key_b ? 0 : 255;
      }
    }
  }
  else if(VAR_9->colortype == VAR_2)
  {
    unsigned VAR_16;
    size_t VAR_17 = 0;
    for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
    {
      if(VAR_9->bitdepth == 8) VAR_16 = VAR_8[VAR_12];
      else VAR_16 = FUNC_0(&VAR_17, VAR_8, VAR_9->bitdepth);

      if(VAR_16 >= VAR_9->palettesize)
      {

        if(!VAR_10) return (VAR_9->bitdepth == 8 ? 46 : 47);
        VAR_5[0] = VAR_5[1] = VAR_5[2] = 0;
        if(VAR_7) VAR_5[3] = 255;
      }
      else
      {
        VAR_5[0] = VAR_9->palette[VAR_16 * 4 + 0];
        VAR_5[1] = VAR_9->palette[VAR_16 * 4 + 1];
        VAR_5[2] = VAR_9->palette[VAR_16 * 4 + 2];
        if(VAR_7) VAR_5[3] = VAR_9->palette[VAR_16 * 4 + 3];
      }
    }
  }
  else if(VAR_9->colortype == VAR_1)
  {
    if(VAR_9->bitdepth == 8)
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_5[1] = VAR_5[2] = VAR_8[VAR_12 * 2 + 0];
        if(VAR_7) VAR_5[3] = VAR_8[VAR_12 * 2 + 1];
      }
    }
    else
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_5[1] = VAR_5[2] = VAR_8[VAR_12 * 4 + 0];
        if(VAR_7) VAR_5[3] = VAR_8[VAR_12 * 4 + 2];
      }
    }
  }
  else if(VAR_9->colortype == VAR_4)
  {
    if(VAR_9->bitdepth == 8)
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_8[VAR_12 * 4 + 0];
        VAR_5[1] = VAR_8[VAR_12 * 4 + 1];
        VAR_5[2] = VAR_8[VAR_12 * 4 + 2];
        if(VAR_7) VAR_5[3] = VAR_8[VAR_12 * 4 + 3];
      }
    }
    else
    {
      for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++, VAR_5 += VAR_11)
      {
        VAR_5[0] = VAR_8[VAR_12 * 8 + 0];
        VAR_5[1] = VAR_8[VAR_12 * 8 + 2];
        VAR_5[2] = VAR_8[VAR_12 * 8 + 4];
        if(VAR_7) VAR_5[3] = VAR_8[VAR_12 * 8 + 6];
      }
    }
  }

  return 0;
}
