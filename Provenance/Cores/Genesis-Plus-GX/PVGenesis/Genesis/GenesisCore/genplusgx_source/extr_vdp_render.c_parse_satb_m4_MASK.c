
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8 ;
typedef int uint16 ;
struct TYPE_4__ {int h; } ;
struct TYPE_6__ {TYPE_1__ viewport; } ;
struct TYPE_5__ {int ypos; void* attr; void* xpos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void** VAR_8 ;

void FUNC_0(int VAR_9)
{
  int VAR_10 = 0;
  uint8 *VAR_11;


  int VAR_12 = 0;


  int VAR_13;


  int VAR_14 = 8 + ((VAR_5[1] & 0x02) << 2);


  uint16 VAR_15 = ~0x3F80 ^ (VAR_5[5] << 7);


  if (VAR_7 > VAR_1)
  {
    VAR_15 |= 0x80;
  }


  VAR_11 = &VAR_8[VAR_15 & 0x3F00];


  do
  {

    VAR_13 = VAR_11[VAR_10];


    if (VAR_13 == (VAR_2.viewport.h + 16))
    {
      break;
    }


    if (VAR_13 >= 240)
    {
      VAR_13 -= 256;
    }


    VAR_13 = VAR_9 - VAR_13;


    if (VAR_7 < VAR_0)
    {
      VAR_13 >>= (VAR_5[1] & 0x01);
    }


    if ((VAR_13 >= 0) && (VAR_13 < VAR_14))
    {

      if (VAR_12 == 8)
      {

        if ((VAR_9 >= 0) && (VAR_9 < VAR_2.viewport.h))
        {
          VAR_6 = 0x40;
        }
        break;
      }


      VAR_4[VAR_12].ypos = VAR_13;
      VAR_4[VAR_12].xpos = VAR_11[(0x80 + (VAR_10 << 1)) & VAR_15];
      VAR_4[VAR_12].attr = VAR_11[(0x81 + (VAR_10 << 1)) & VAR_15];


      ++VAR_12;
    }
  }
  while (++VAR_10 < 64);


  VAR_3 = VAR_12;
}
