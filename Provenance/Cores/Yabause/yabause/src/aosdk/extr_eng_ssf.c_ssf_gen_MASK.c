
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;

s32 FUNC_5(s16 *VAR_5, u32 VAR_6)
{
 int VAR_7;
 s16 VAR_8[44100/30], VAR_9[44100/30];

 s16 *VAR_10 = VAR_5;
 int VAR_11;

 VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  s32 VAR_12=0, VAR_13=0;
  s16 VAR_14[2];
  FUNC_0((11300000/60)/735);
  FUNC_4(1);
  FUNC_2(&VAR_12, &VAR_13, 1);
  FUNC_3();
  FUNC_1 (&VAR_12, &VAR_13, VAR_14, 1);
  VAR_8[VAR_11] = VAR_14[0];
  VAR_9[VAR_11] = VAR_14[1];
  VAR_11++;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {

  if (VAR_4 >= VAR_2)
  {
   if (VAR_4 >= VAR_3)
   {

    VAR_8[VAR_7] = 0;
    VAR_9[VAR_7] = 0;
    return VAR_0;
   }
   else
   {
    s32 VAR_15 = 256 - (256*(VAR_4 - VAR_2)/(VAR_3-VAR_2));
    VAR_8[VAR_7] = (VAR_8[VAR_7] * VAR_15)>>8;
    VAR_9[VAR_7] = (VAR_9[VAR_7] * VAR_15)>>8;

    VAR_4++;
   }
  }
  else
  {
   VAR_4++;
  }

  *VAR_10++ = VAR_8[VAR_7];
  *VAR_10++ = VAR_9[VAR_7];
 }

 return VAR_1;
}
