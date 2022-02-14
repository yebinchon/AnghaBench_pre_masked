
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_2__ {int attr; int xpos; int ypos; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

void FUNC_0(int VAR_8)
{

  int VAR_9;


  int VAR_10;


  int VAR_11;


  int VAR_12 = 0;


  int VAR_13 = 0;


  int VAR_14 = 16 + ((VAR_3[12] & 1) << 2);


  int VAR_15 = VAR_14 << 2;


  uint16 *VAR_16 = (uint16 *) &VAR_7[VAR_5];


  uint16 *VAR_17 = (uint16 *) &VAR_4[0];


  VAR_8 += 0x81;

  do
  {

    VAR_9 = (VAR_17[VAR_12] >> VAR_0) & 0x1FF;
    VAR_11 = VAR_17[VAR_12 + 1] >> 8;


    VAR_10 = 8 + ((VAR_11 & 3) << 3);


    VAR_9 = VAR_8 - VAR_9;


    if ((VAR_9 >= 0) && (VAR_9 < VAR_10))
    {

      if (VAR_13 == VAR_14)
      {
        VAR_6 |= 0x40;
        break;
      }



      VAR_2[VAR_13].attr = VAR_16[VAR_12 + 2];
      VAR_2[VAR_13].xpos = VAR_16[VAR_12 + 3] & 0x1ff;
      VAR_2[VAR_13].ypos = VAR_9;
      VAR_2[VAR_13].size = VAR_11 & 0x0f;
      ++VAR_13;
    }


    VAR_12 = (VAR_17[VAR_12 + 1] & 0x7F) << 2;


    if (VAR_12 == 0) break;
  }
  while (--VAR_15);


  VAR_1 = VAR_13;
}
