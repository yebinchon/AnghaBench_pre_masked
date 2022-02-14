
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clocks; unsigned int LatchedRegister; int* Registers; unsigned int** Channel; unsigned int** PreAmp; int NoiseFreq; int NoiseShiftRegister; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6;

  if (VAR_4 > VAR_3)
  {

    FUNC_0(VAR_4);


    VAR_3 += ((VAR_4 - VAR_3 + VAR_2 - 1) / VAR_2) * VAR_2;
  }

  if (VAR_5 & 0x80)
  {

    VAR_3 = VAR_6 = (VAR_5 >> 4) & 0x07;
  }
  else
  {

    VAR_6 = VAR_3;
  }

  switch (VAR_6)
  {
    case 0:
    case 2:
    case 4:
    {
      if (VAR_5 & 0x80)
      {

        VAR_3[VAR_6] = (VAR_3[VAR_6] & 0x3f0) | (VAR_5 & 0xf);
      }
      else
      {

        VAR_3[VAR_6] = (VAR_3[VAR_6] & 0x00f) | ((VAR_5 & 0x3f) << 4);
      }


      if (VAR_3[VAR_6] == 0)
      {
        VAR_3[VAR_6] = 1;
      }
      break;
    }

    case 1:
    case 3:
    case 5:
    {
      VAR_5 &= 0x0f;
      VAR_3[VAR_6] = VAR_5;
      VAR_5 = VAR_1[VAR_5];
      VAR_6 >>= 1;
      VAR_3[VAR_6][0] = (VAR_5 * VAR_3[VAR_6][0]) / 100;
      VAR_3[VAR_6][1] = (VAR_5 * VAR_3[VAR_6][1]) / 100;
      break;
    }

    case 6:
    {
      VAR_3[6] = VAR_5 & 0x0f;


      VAR_3 = VAR_0;


      VAR_3 = 0x10 << (VAR_5&0x3);
      break;
    }

    case 7:
    {
      VAR_5 &= 0x0f;
      VAR_3[7] = VAR_5;
      VAR_5 = VAR_1[VAR_5];
      VAR_3[3][0] = (VAR_5 * VAR_3[3][0]) / 100;
      VAR_3[3][1] = (VAR_5 * VAR_3[3][1]) / 100;
      break;
    }
  }
}
