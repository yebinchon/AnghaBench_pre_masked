
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {int** analog; int y_offset; scalar_t__* system; int x_offset; } ;
struct TYPE_6__ {int Port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int) ;
 int* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void FUNC_1(int VAR_12)
{

  if (VAR_12 == VAR_8.Port)
  {

    int VAR_13 = VAR_6.analog[VAR_12][1] + VAR_6.y_offset;


    if ((VAR_13 == VAR_11) && (VAR_13 < VAR_2.viewport.h))
    {

      if (VAR_7[5] & 0x80)
      {

        int VAR_14 = VAR_6.analog[VAR_12][0];


        if (VAR_6.system[1] == VAR_1)
        {

          if (VAR_10 == VAR_0)
          {
            VAR_14 = (VAR_14 * 304) / 320;
          }
          else
          {
            VAR_14 = (VAR_14 * 289) / 320;
          }
        }


        if (VAR_9[11] & 0x08)
        {
          FUNC_0(2);
        }


        if (VAR_9[0] & 0x02)
        {

          VAR_5 = 0x10000 | (VAR_13 << 8);
        }
        else
        {

          VAR_5 = 0x20000 | (VAR_13 << 8);
        }


        if (VAR_9[12] & 1)
        {
          VAR_5 |= VAR_4[((VAR_14 / 2) + VAR_6.x_offset) % 210];
        }
        else
        {
          VAR_5 |= VAR_3[((VAR_14 / 2) + VAR_6.x_offset) % 171];
        }
      }
    }
    else if (VAR_5 & 0x20000)
    {

      VAR_5 = 0;
    }
  }
}
