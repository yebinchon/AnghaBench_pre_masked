
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_0 (void)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3=0 ; VAR_3<VAR_0 ; VAR_3+=2)
 {
  VAR_4 = VAR_2[VAR_3]>>8;
  if (VAR_4 > 0x7fff)
   VAR_1[VAR_3] = 0x7fff;
  else if (VAR_4 < -32768)
   VAR_1[VAR_3] = -32768;
  else
   VAR_1[VAR_3] = VAR_4;

  VAR_4 = VAR_2[VAR_3+1]>>8;
  if (VAR_4 > 0x7fff)
   VAR_1[VAR_3+1] = 0x7fff;
  else if (VAR_4 < -32768)
   VAR_1[VAR_3+1] = -32768;
  else
   VAR_1[VAR_3+1] = VAR_4;
 }
}
