
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN76496 {int LastRegister; int* Register; int* Period; int UpdateStep; int RNG; int* Output; void* NoiseFB; int * VolTable; int * Volume; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct SN76496 VAR_3 ;

void FUNC_0(int VAR_4)
{
 struct SN76496 *VAR_5 = &VAR_3;
 int VAR_6;





 if (VAR_4 & 0x80)
 {
  int VAR_7 = (VAR_4 & 0x70) >> 4;
  int VAR_8 = VAR_7/2;

  VAR_5->LastRegister = VAR_7;
  VAR_5->Register[VAR_7] = (VAR_5->Register[VAR_7] & 0x3f0) | (VAR_4 & 0x0f);
  switch (VAR_7)
  {
   case 0:
   case 2:
   case 4:
    VAR_5->Period[VAR_8] = VAR_5->UpdateStep * VAR_5->Register[VAR_7];
    if (VAR_5->Period[VAR_8] == 0) VAR_5->Period[VAR_8] = VAR_5->UpdateStep;
    if (VAR_7 == 4)
    {

     if ((VAR_5->Register[6] & 0x03) == 0x03)
      VAR_5->Period[3] = 2 * VAR_5->Period[2];
    }
    break;
   case 1:
   case 3:
   case 5:
   case 7:
    VAR_5->Volume[VAR_8] = VAR_5->VolTable[VAR_4 & 0x0f];
    break;
   case 6:
    {
     int VAR_9 = VAR_5->Register[6];
     VAR_5->NoiseFB = (VAR_9 & 4) ? VAR_1 : VAR_0;
     VAR_9 &= 3;

     VAR_5->Period[3] = ((VAR_9&3) == 3) ? 2 * VAR_5->Period[2] : (VAR_5->UpdateStep << (5+(VAR_9&3)));


     VAR_5->RNG = VAR_2;
     VAR_5->Output[3] = VAR_5->RNG & 1;
    }
    break;
  }
 }
 else
 {
  int VAR_10 = VAR_5->LastRegister;
  int VAR_11 = VAR_10/2;

  switch (VAR_10)
  {
   case 0:
   case 2:
   case 4:
    VAR_5->Register[VAR_10] = (VAR_5->Register[VAR_10] & 0x0f) | ((VAR_4 & 0x3f) << 4);
    VAR_5->Period[VAR_11] = VAR_5->UpdateStep * VAR_5->Register[VAR_10];
    if (VAR_5->Period[VAR_11] == 0) VAR_5->Period[VAR_11] = VAR_5->UpdateStep;
    if (VAR_10 == 4)
    {

     if ((VAR_5->Register[6] & 0x03) == 0x03)
      VAR_5->Period[3] = 2 * VAR_5->Period[2];
    }
    break;
   case 1:
   case 3:
   case 5:
   case 7:
    VAR_5->Volume[VAR_11] = VAR_5->VolTable[VAR_4 & 0x0f];
    VAR_5->Register[VAR_10] = (VAR_5->Register[VAR_10] & 0x3f0) | (VAR_4 & 0x0f);
    break;
   case 6:
    {
     VAR_5->Register[VAR_10] = (VAR_5->Register[VAR_10] & 0x3f0) | (VAR_4 & 0x0f);
     VAR_6 = VAR_5->Register[6];
     VAR_5->NoiseFB = (VAR_6 & 4) ? VAR_1 : VAR_0;
     VAR_6 &= 3;

     VAR_5->Period[3] = ((VAR_6&3) == 3) ? 2 * VAR_5->Period[2] : (VAR_5->UpdateStep << (5+(VAR_6&3)));


     VAR_5->RNG = VAR_2;
     VAR_5->Output[3] = VAR_5->RNG & 1;
    }
    break;
  }
 }
}
