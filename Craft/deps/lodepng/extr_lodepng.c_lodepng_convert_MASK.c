
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ colortype; int bitdepth; size_t palettesize; unsigned char* palette; } ;
typedef TYPE_1__ LodePNGColorMode ;
typedef int ColorTree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned char,unsigned char,unsigned char,unsigned char,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned char const*,size_t,TYPE_1__ const*) ;
 unsigned int FUNC_4 (unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char const*,size_t,TYPE_1__ const*,unsigned int) ;
 unsigned int FUNC_5 (unsigned char*,size_t,int,unsigned char const*,TYPE_1__ const*,unsigned int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__ const*) ;
 size_t FUNC_7 (unsigned int,unsigned int,TYPE_1__ const*) ;
 unsigned int FUNC_8 (unsigned char*,size_t,TYPE_1__*,unsigned short,unsigned short,unsigned short,unsigned short) ;
 unsigned int FUNC_9 (unsigned char*,size_t,TYPE_1__*,int *,unsigned char,unsigned char,unsigned char,unsigned char) ;

unsigned FUNC_10(unsigned char* VAR_3, const unsigned char* VAR_4,
                         LodePNGColorMode* VAR_5, const LodePNGColorMode* VAR_6,
                         unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
  unsigned VAR_10 = 0;
  size_t VAR_11;
  ColorTree VAR_12;
  size_t VAR_13 = VAR_7 * VAR_8;

  if(FUNC_6(VAR_5, VAR_6))
  {
    size_t VAR_14 = FUNC_7(VAR_7, VAR_8, VAR_6);
    for(VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) VAR_3[VAR_11] = VAR_4[VAR_11];
    return VAR_10;
  }

  if(VAR_5->colortype == VAR_0)
  {
    size_t VAR_15 = 1 << VAR_5->bitdepth;
    if(VAR_5->palettesize < VAR_15) VAR_15 = VAR_5->palettesize;
    FUNC_2(&VAR_12);
    for(VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
    {
      unsigned char* VAR_16 = &VAR_5->palette[VAR_11 * 4];
      FUNC_0(&VAR_12, VAR_16[0], VAR_16[1], VAR_16[2], VAR_16[3], VAR_11);
    }
  }

  if(VAR_6->bitdepth == 16 && VAR_5->bitdepth == 16)
  {
    for(VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
    {
      unsigned short VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
      VAR_10 = FUNC_3(&VAR_17, &VAR_18, &VAR_19, &VAR_20, VAR_4, VAR_11, VAR_6);
      if(VAR_10) break;
      VAR_10 = FUNC_8(VAR_3, VAR_11, VAR_5, VAR_17, VAR_18, VAR_19, VAR_20);
      if(VAR_10) break;
    }
  }
  else if(VAR_5->bitdepth == 8 && VAR_5->colortype == VAR_2)
  {
    VAR_10 = FUNC_5(VAR_3, VAR_13, 1, VAR_4, VAR_6, VAR_9);
  }
  else if(VAR_5->bitdepth == 8 && VAR_5->colortype == VAR_1)
  {
    VAR_10 = FUNC_5(VAR_3, VAR_13, 0, VAR_4, VAR_6, VAR_9);
  }
  else
  {
    unsigned char VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
    for(VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
    {
      VAR_10 = FUNC_4(&VAR_21, &VAR_22, &VAR_23, &VAR_24, VAR_4, VAR_11, VAR_6, VAR_9);
      if(VAR_10) break;
      VAR_10 = FUNC_9(VAR_3, VAR_11, VAR_5, &VAR_12, VAR_21, VAR_22, VAR_23, VAR_24);
      if(VAR_10) break;
    }
  }

  if(VAR_5->colortype == VAR_0)
  {
    FUNC_1(&VAR_12);
  }

  return VAR_10;
}
