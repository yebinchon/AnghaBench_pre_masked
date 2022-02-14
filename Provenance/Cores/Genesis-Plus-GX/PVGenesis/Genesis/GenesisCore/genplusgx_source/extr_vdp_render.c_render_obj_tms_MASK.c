
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_5__ {int h; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {int gg_extra; } ;
struct TYPE_6__ {int xpos; int size; int attr; int ypos; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_0 (int*,int,int) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;

void FUNC_1(int VAR_13)
{
  int VAR_14, VAR_15, VAR_16, VAR_17;
  uint8 *VAR_18, *VAR_19;
  uint8 VAR_20, VAR_21[2];
  uint16 VAR_22;


  int VAR_23 = 8;


  VAR_23 <<= ((VAR_7[1] & 0x02) >> 1);


  VAR_23 <<= (VAR_7[1] & 0x01);


  VAR_9 |= VAR_8;
  VAR_8 = 0;


  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++)
  {

    VAR_16 = VAR_6[VAR_15].xpos;


    VAR_20 = VAR_6[VAR_15].size;


    VAR_16 -= ((VAR_20 & 0x80) >> 2);


    VAR_18 = &VAR_3[0][0x20 + VAR_16];

    if ((VAR_16 + VAR_23) > 256)
    {

      VAR_17 = 256 - VAR_16;

      VAR_16 = 0;
    }
    else
    {
      VAR_17 = VAR_23;

      if (VAR_16 < 0)
      {

        VAR_16 = 0 - VAR_16;
      }
      else
      {
        VAR_16 = 0;
      }
    }


    VAR_20 &= 0x0F;


    VAR_22 = VAR_6[VAR_15].attr;


    VAR_22 &= ~((VAR_7[1] & 0x02) >> 0);
    VAR_22 &= ~((VAR_7[1] & 0x02) >> 1);


    VAR_19 = (uint8 *)&VAR_12[((VAR_7[6] << 11) & 0x3800) | (VAR_22 << 3) | VAR_6[VAR_15].ypos];


    VAR_21[0] = VAR_19[0x00];
    VAR_21[1] = VAR_19[0x10];

    if (VAR_7[1] & 0x01)
    {

      for (VAR_14=VAR_16; VAR_14<VAR_17; VAR_14+=2)
      {
        VAR_22 = VAR_21[(VAR_14 >> 4) & 1];
        VAR_22 = (VAR_22 >> (7 - ((VAR_14 >> 1) & 7))) & 0x01;
        VAR_22 = VAR_22 * VAR_20;
        VAR_22 |= (VAR_18[VAR_14] << 8);
        VAR_18[VAR_14] = VAR_4[5][VAR_22];
        VAR_9 |= ((VAR_22 & 0x8000) >> 10);
        VAR_22 &= 0x00FF;
        VAR_22 |= (VAR_18[VAR_14+1] << 8);
        VAR_18[VAR_14+1] = VAR_4[5][VAR_22];
        VAR_9 |= ((VAR_22 & 0x8000) >> 10);
      }
    }
    else
    {

      for (VAR_14=VAR_16; VAR_14<VAR_17; VAR_14++)
      {
        VAR_22 = VAR_21[(VAR_14 >> 3) & 1];
        VAR_22 = (VAR_22 >> (7 - (VAR_14 & 7))) & 0x01;
        VAR_22 = VAR_22 * VAR_20;
        VAR_22 |= (VAR_18[VAR_14] << 8);
        VAR_18[VAR_14] = VAR_4[5][VAR_22];
        VAR_9 |= ((VAR_22 & 0x8000) >> 10);
      }
    }
  }


  if ((VAR_10 == VAR_0) && !VAR_2.gg_extra && (VAR_11 < VAR_1.viewport.h))
  {
    int VAR_24 = VAR_11 - (VAR_1.viewport.h - 144) / 2;
    if ((VAR_24 < 0) || (VAR_24 >= 144))
    {
      FUNC_0(&VAR_3[0][0x20], 0x40, VAR_13);
    }
    else
    {
      if (VAR_1.viewport.x > 0)
      {
        FUNC_0(&VAR_3[0][0x20], 0x40, 48);
        FUNC_0(&VAR_3[0][0x20+48+160], 0x40, 48);
      }
    }
  }
}
