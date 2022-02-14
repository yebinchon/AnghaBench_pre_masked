
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* Registers; int* ToneFreqPos; int NoiseFreq; scalar_t__ clocks; int NoiseShiftRegister; scalar_t__ LatchedRegister; scalar_t__** ChanOut; scalar_t__** Channel; scalar_t__* ToneFreqVals; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0()
{
  int VAR_2;

  for(VAR_2 = 0; VAR_2 <= 3; VAR_2++)
  {

    VAR_1[2*VAR_2] = 1;
    VAR_1[2*VAR_2+1] = 0xf;


    VAR_1[VAR_2] = 0;


    VAR_1[VAR_2] = 1;


    VAR_1[VAR_2][0] = 0;
    VAR_1[VAR_2][1] = 0;


    VAR_1[VAR_2][0] = 0;
    VAR_1[VAR_2][1] = 0;
  }


  VAR_1 = 0;


  VAR_1=VAR_0;
  VAR_1 = 0x10;


  VAR_1 = 0;
}
