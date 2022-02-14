
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8 ;
struct TYPE_4__ {int h; } ;
struct TYPE_6__ {TYPE_1__ viewport; } ;
struct TYPE_5__ {int ypos; void* size; void* attr; void* xpos; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;

void FUNC_0(int VAR_7)
{
  int VAR_8 = 0;


  int VAR_9 = 0;


  if (!(VAR_3[1] & 0x10))
  {

    uint8 *VAR_10 = &VAR_6[(VAR_3[5] << 7) & 0x3F80];


    int VAR_11;


    int VAR_12 = 8;


    VAR_12 <<= ((VAR_3[1] & 0x02) >> 1);


    VAR_12 <<= (VAR_3[1] & 0x01);


    do
    {

      VAR_11 = VAR_10[VAR_8 << 2];


      if (VAR_11 == 0xD0)
      {
        break;
      }


      if (VAR_11 >= 224)
      {
        VAR_11 -= 256;
      }


      VAR_11 = VAR_7 - VAR_11;


      if ((VAR_11 >= 0) && (VAR_11 < VAR_12))
      {

        if (VAR_9 == 4)
        {

          if (VAR_7 < VAR_0.viewport.h)
          {
            VAR_4 = 0x40;
          }
          break;
        }


        VAR_11 >>= (VAR_3[1] & 0x01);


        VAR_2[VAR_9].ypos = VAR_11;
        VAR_2[VAR_9].xpos = VAR_10[(VAR_8 << 2) + 1];
        VAR_2[VAR_9].attr = VAR_10[(VAR_8 << 2) + 2];
        VAR_2[VAR_9].size = VAR_10[(VAR_8 << 2) + 3];


        ++VAR_9;
      }
    }
    while (++VAR_8 < 32);
  }


  VAR_1 = VAR_9;


  VAR_5 = (VAR_5 & 0xE0) | (VAR_8 & 0x1F);
}
