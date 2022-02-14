
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_3__ {int h; } ;
struct TYPE_4__ {TYPE_1__ viewport; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int) ;
 int* VAR_1 ;
 int * VAR_2 ;
 TYPE_2__ VAR_3 ;
 int ** VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

void FUNC_2(int VAR_9, int VAR_10)
{
  int VAR_11;
  uint16 *VAR_12;
  uint32 VAR_13, VAR_14, *VAR_15;


  int VAR_16 = ((VAR_5[0] & 0x40) && (VAR_9 < 0x10)) ? 0x100 : VAR_5[0x08];
  int VAR_17 = VAR_16 & 7;


  uint32 *VAR_18 = (uint32 *)&VAR_4[0][0x20 + VAR_17];


  int VAR_19 = VAR_9 + VAR_8;


  uint16 VAR_20 = ~0x3C00 ^ (VAR_5[2] << 10);


  if (VAR_6 > VAR_0)
  {
    VAR_20 |= 0x400;
  }


  if (VAR_3.viewport.h > 192)
  {

    VAR_19 = VAR_19 % 256;


    VAR_12 = (uint16 *)&VAR_7[(0x3700 & VAR_20) + ((VAR_19 >> 3) << 6)];
  }
  else
  {

    VAR_19 = VAR_19 % 224;


    VAR_12 = (uint16 *)&VAR_7[(0x3800 + ((VAR_19 >> 3) << 6)) & VAR_20];
  }


  VAR_19 = (VAR_19 & 7) << 3;


  VAR_16 = (0x100 - VAR_16) >> 3;


  if (VAR_17)
  {
    FUNC_1(&VAR_4[0][0x20], 0, VAR_17);
    VAR_16++;
  }


  VAR_10 >>= 3;


  for(VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_16++)
  {

    if((VAR_11 == 24) && (VAR_5[0] & 0x80))
    {

      if (VAR_3.viewport.h > 192)
      {
        VAR_12 = (uint16 *)&VAR_7[(0x3700 & VAR_20) + ((VAR_9 >> 3) << 6)];
      }
      else
      {
        VAR_12 = (uint16 *)&VAR_7[(0x3800 + ((VAR_9 >> 3) << 6)) & VAR_20];
      }


      VAR_19 = (VAR_9 & 7) << 3;
    }


    VAR_13 = VAR_12[VAR_16 % VAR_10];

    VAR_13 = (((VAR_13 & 0xFF) << 8) | ((VAR_13 & 0xFF00) >> 8));



    VAR_14 = VAR_1[(VAR_13 >> 11) & 3];


    VAR_15 = (uint32 *)&VAR_2[((VAR_13 & 0x7FF) << 6) | (VAR_19)];
    *VAR_18++ = (VAR_15[0] | VAR_14);
    *VAR_18++ = (VAR_15[1] | VAR_14);

  }
}
