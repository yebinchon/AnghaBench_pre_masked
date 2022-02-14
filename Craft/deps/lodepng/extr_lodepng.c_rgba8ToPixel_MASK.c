
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ colortype; int bitdepth; } ;
typedef TYPE_1__ LodePNGColorMode ;
typedef int ColorTree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char*,size_t,int,int) ;
 int FUNC_1 (int *,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static unsigned FUNC_2(unsigned char* VAR_5, size_t VAR_6,
                             const LodePNGColorMode* VAR_7, ColorTree* VAR_8 ,
                             unsigned char VAR_9, unsigned char VAR_10, unsigned char VAR_11, unsigned char VAR_12)
{
  if(VAR_7->colortype == VAR_0)
  {
    unsigned char VAR_13 = VAR_9; ;
    if(VAR_7->bitdepth == 8) VAR_5[VAR_6] = VAR_13;
    else if(VAR_7->bitdepth == 16) VAR_5[VAR_6 * 2 + 0] = VAR_5[VAR_6 * 2 + 1] = VAR_13;
    else
    {

      VAR_13 = (VAR_13 >> (8 - VAR_7->bitdepth)) & ((1 << VAR_7->bitdepth) - 1);
      FUNC_0(VAR_5, VAR_6, VAR_7->bitdepth, VAR_13);
    }
  }
  else if(VAR_7->colortype == VAR_3)
  {
    if(VAR_7->bitdepth == 8)
    {
      VAR_5[VAR_6 * 3 + 0] = VAR_9;
      VAR_5[VAR_6 * 3 + 1] = VAR_10;
      VAR_5[VAR_6 * 3 + 2] = VAR_11;
    }
    else
    {
      VAR_5[VAR_6 * 6 + 0] = VAR_5[VAR_6 * 6 + 1] = VAR_9;
      VAR_5[VAR_6 * 6 + 2] = VAR_5[VAR_6 * 6 + 3] = VAR_10;
      VAR_5[VAR_6 * 6 + 4] = VAR_5[VAR_6 * 6 + 5] = VAR_11;
    }
  }
  else if(VAR_7->colortype == VAR_2)
  {
    int VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    if(VAR_14 < 0) return 82;
    if(VAR_7->bitdepth == 8) VAR_5[VAR_6] = VAR_14;
    else FUNC_0(VAR_5, VAR_6, VAR_7->bitdepth, VAR_14);
  }
  else if(VAR_7->colortype == VAR_1)
  {
    unsigned char VAR_15 = VAR_9; ;
    if(VAR_7->bitdepth == 8)
    {
      VAR_5[VAR_6 * 2 + 0] = VAR_15;
      VAR_5[VAR_6 * 2 + 1] = VAR_12;
    }
    else if(VAR_7->bitdepth == 16)
    {
      VAR_5[VAR_6 * 4 + 0] = VAR_5[VAR_6 * 4 + 1] = VAR_15;
      VAR_5[VAR_6 * 4 + 2] = VAR_5[VAR_6 * 4 + 3] = VAR_12;
    }
  }
  else if(VAR_7->colortype == VAR_4)
  {
    if(VAR_7->bitdepth == 8)
    {
      VAR_5[VAR_6 * 4 + 0] = VAR_9;
      VAR_5[VAR_6 * 4 + 1] = VAR_10;
      VAR_5[VAR_6 * 4 + 2] = VAR_11;
      VAR_5[VAR_6 * 4 + 3] = VAR_12;
    }
    else
    {
      VAR_5[VAR_6 * 8 + 0] = VAR_5[VAR_6 * 8 + 1] = VAR_9;
      VAR_5[VAR_6 * 8 + 2] = VAR_5[VAR_6 * 8 + 3] = VAR_10;
      VAR_5[VAR_6 * 8 + 4] = VAR_5[VAR_6 * 8 + 5] = VAR_11;
      VAR_5[VAR_6 * 8 + 6] = VAR_5[VAR_6 * 8 + 7] = VAR_12;
    }
  }

  return 0;
}
