
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int) ;

int FUNC_1(u32 *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4,VAR_5,VAR_6,VAR_7;
 u32 VAR_8;
 u32 VAR_9;


 for (VAR_4 = VAR_7 = 0; VAR_4 < VAR_1 * 32; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0,VAR_4);
  if (VAR_6) {
   VAR_7++;
  } else {
   if (VAR_7 >= 29)
    break;
   VAR_7 = 0;
  }
 }


 if (VAR_7 < 29)
  return 0xffffffff;


 for (VAR_7 = 0; VAR_4 < VAR_1 * 32; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0,VAR_4);
  if (VAR_6) {
   break;
  } else {
   VAR_7++;
  }
 }


 if (VAR_7 < 7)
  return 0xffffffff;


 VAR_7 = 0;
 VAR_5 = 1;
 VAR_9 = 0; VAR_8 = 1;
 for (; VAR_4 < VAR_1 * 32; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0,VAR_4);
  if (VAR_5) {
   if(VAR_6) {
    continue;
   } else {
    VAR_7 = 1;
   }
  } else {
   if (VAR_6) {
    if (VAR_7 > (VAR_2 + VAR_3) /2)
     VAR_9 |= VAR_8;
    VAR_8 <<= 1;
    if (VAR_8 == 1)
     break;
   } else {
    VAR_7++;
   }
  }
  VAR_5 = VAR_6;
 }

 return VAR_9;
}
