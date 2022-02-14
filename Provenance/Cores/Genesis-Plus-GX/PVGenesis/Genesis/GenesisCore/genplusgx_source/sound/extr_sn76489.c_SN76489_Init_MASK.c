
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int blip_t ;
struct TYPE_2__ {int** PreAmp; int SRWidth; int NoiseFeedback; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int ** VAR_6 ;

void FUNC_0(blip_t* VAR_7, blip_t* VAR_8, int VAR_9)
{
  int VAR_10;

  VAR_6[0] = VAR_7;
  VAR_6[1] = VAR_8;

  for (VAR_10=0; VAR_10<4; VAR_10++)
  {
    VAR_2[VAR_10][0] = 100;
    VAR_2[VAR_10][1] = 100;
  }

  if (VAR_9 == VAR_3)
  {
    VAR_2 = VAR_0;
    VAR_2 = VAR_4;
  }
  else
  {
    VAR_2 = VAR_1;
    VAR_2 = VAR_5;
  }
}
