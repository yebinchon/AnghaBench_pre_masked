
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN76496 {scalar_t__* Volume; int* Count; int* Output; int RNG; int NoiseFB; scalar_t__* Period; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct SN76496 VAR_2 ;

void FUNC_0(short *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct SN76496 *VAR_7 = &VAR_2;


 for (VAR_6 = 0;VAR_6 < 4;VAR_6++)
 {
  if (VAR_7->Volume[VAR_6] == 0)
  {



   if (VAR_7->Count[VAR_6] <= VAR_4*VAR_1) VAR_7->Count[VAR_6] += VAR_4*VAR_1;
  }
 }

 while (VAR_4 > 0)
 {
  int VAR_8[4];
  unsigned int VAR_9;
  int VAR_10;




  VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = 0;

  for (VAR_6 = 0;VAR_6 < 3;VAR_6++)
  {
   if (VAR_7->Output[VAR_6]) VAR_8[VAR_6] += VAR_7->Count[VAR_6];
   VAR_7->Count[VAR_6] -= VAR_1;
   while (VAR_7->Count[VAR_6] <= 0)
   {
    VAR_7->Count[VAR_6] += VAR_7->Period[VAR_6];
    if (VAR_7->Count[VAR_6] > 0)
    {
     VAR_7->Output[VAR_6] ^= 1;
     if (VAR_7->Output[VAR_6]) VAR_8[VAR_6] += VAR_7->Period[VAR_6];
     break;
    }
    VAR_7->Count[VAR_6] += VAR_7->Period[VAR_6];
    VAR_8[VAR_6] += VAR_7->Period[VAR_6];
   }
   if (VAR_7->Output[VAR_6]) VAR_8[VAR_6] -= VAR_7->Count[VAR_6];
  }

  VAR_10 = VAR_1;
  do
  {
   int VAR_11;

   if (VAR_7->Count[3] < VAR_10) VAR_11 = VAR_7->Count[3];
   else VAR_11 = VAR_10;

   if (VAR_7->Output[3]) VAR_8[3] += VAR_7->Count[3];
   VAR_7->Count[3] -= VAR_11;
   if (VAR_7->Count[3] <= 0)
   {
    if (VAR_7->RNG & 1) VAR_7->RNG ^= VAR_7->NoiseFB;
    VAR_7->RNG >>= 1;
    VAR_7->Output[3] = VAR_7->RNG & 1;
    VAR_7->Count[3] += VAR_7->Period[3];
    if (VAR_7->Output[3]) VAR_8[3] += VAR_7->Period[3];
   }
   if (VAR_7->Output[3]) VAR_8[3] -= VAR_7->Count[3];

   VAR_10 -= VAR_11;
  } while (VAR_10 > 0);

  VAR_9 = VAR_8[0] * VAR_7->Volume[0] + VAR_8[1] * VAR_7->Volume[1] +
    VAR_8[2] * VAR_7->Volume[2] + VAR_8[3] * VAR_7->Volume[3];

  if (VAR_9 > VAR_0 * VAR_1) VAR_9 = VAR_0 * VAR_1;

  if ((VAR_9 /= VAR_1))
   *VAR_3 += VAR_9;
  if(VAR_5) VAR_3+=2;
  else VAR_3++;

  VAR_4--;
 }
}
