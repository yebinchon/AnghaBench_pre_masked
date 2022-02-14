
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int NoiseFreq; int* Registers; int* ToneFreqVals; int clocks; int* ToneFreqPos; int NoiseShiftRegister; int NoiseFeedback; int SRWidth; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
  int VAR_3;


  int VAR_4 = VAR_1;
  if (VAR_4 == 0x80)
  {
    VAR_4 = VAR_1[2*2];
    VAR_1[3] = VAR_1[2];
  }


  FUNC_0(VAR_1);


  VAR_3 = VAR_1[3];


  while (VAR_3 < VAR_2)
  {

    VAR_1[3] = -VAR_1[3];
    if (VAR_1[3] == 1)
    {

      int VAR_5 = VAR_1;
      if ( VAR_1[6] & 0x4 )
      {





        VAR_5 = ((VAR_5 & VAR_1) && ((VAR_5 & VAR_1) ^ VAR_1));
      }
      else
        VAR_5 = VAR_5 & 1;

      VAR_1 = (VAR_1 >> 1) | (VAR_5 << (VAR_1 - 1));
      FUNC_0(VAR_3);
    }


    VAR_3 += VAR_4 * VAR_0;
  }


  VAR_1[3] = VAR_3;
}
