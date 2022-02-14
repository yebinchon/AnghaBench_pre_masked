
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s8 ;
typedef int s32 ;



__attribute__((used)) static void FUNC_0(s8 *VAR_0,s8 *VAR_1,s8 VAR_2,s8 VAR_3,s8 VAR_4)
{
 s32 VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;

 VAR_5 = *VAR_0;
 VAR_6 = *VAR_1;
 if(VAR_5>=0) VAR_7 = 1;
 else { VAR_7 = -1; VAR_5 = -(VAR_5); }

 if(VAR_6>=0) VAR_8 = 1;
 else { VAR_8 = -1; VAR_6 = -(VAR_6); }

 if(VAR_5<=VAR_4) VAR_5 = 0;
 else VAR_5 -= VAR_4;

 if(VAR_6<=VAR_4) VAR_6 = 0;
 else VAR_6 -= VAR_4;

 if(VAR_5!=0 || VAR_6!=0) {
  s32 VAR_10,VAR_11,VAR_12;

  VAR_10 = (VAR_5 * VAR_3);
  VAR_11= (VAR_6 * VAR_3);
  VAR_12 = (VAR_2 * VAR_3);
  if(VAR_11<=VAR_10) {
   VAR_9 = ((VAR_5 * VAR_3) + (VAR_6 * (VAR_2 - VAR_3)));
   if(VAR_12<VAR_9) {
    VAR_5 = ((VAR_5 * VAR_12)/VAR_9);
    VAR_6 = ((VAR_6 * VAR_12)/VAR_9);
   }
  } else {
   VAR_9 = ((VAR_6 * VAR_3) + (VAR_5 * (VAR_2 - VAR_3)));
   if(VAR_12<VAR_9) {
    VAR_5 = ((VAR_5 * VAR_12)/VAR_9);
    VAR_6 = ((VAR_6 * VAR_12)/VAR_9);
   }
  }
  *VAR_0 = (s8)(VAR_5 * VAR_7);
  *VAR_1 = (s8)(VAR_6 * VAR_8);
 } else
  *VAR_0 = *VAR_1 = 0;
}
