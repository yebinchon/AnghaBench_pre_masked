
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static UBYTE FUNC_0(void)
{
 static int VAR_12 = 0;
 UBYTE VAR_13 = VAR_1;
 int VAR_14 = VAR_8 >= 0 ? VAR_8 : -VAR_8;
 int VAR_15 = VAR_9 >= 0 ? VAR_9 : -VAR_9;
 if (VAR_14 >= VAR_15) {
  if (VAR_8 == 0)
   return VAR_13;
  if (VAR_8 < 0) {
   VAR_13 &= VAR_3;
   VAR_7 = 0;
   VAR_10--;
   VAR_8 += 1 << VAR_5;
   if (VAR_8 > 0)
    VAR_8 = 0;
  }
  else {
   VAR_13 &= VAR_4;
   VAR_7 = 1;
   VAR_10++;
   VAR_8 -= 1 << VAR_5;
   if (VAR_8 < 0)
    VAR_8 = 0;
  }
  VAR_12 -= VAR_15;
  if (VAR_12 < 0) {
   VAR_12 += VAR_14;
   if (VAR_9 < 0) {
    VAR_13 &= VAR_2;
    VAR_6 = 0;
    VAR_11--;
    VAR_9 += 1 << VAR_5;
    if (VAR_9 > 0)
     VAR_9 = 0;
   }
   else {
    VAR_13 &= VAR_0;
    VAR_6 = 1;
    VAR_11++;
    VAR_9 -= 1 << VAR_5;
    if (VAR_9 < 0)
     VAR_9 = 0;
   }
  }
 }
 else {
  if (VAR_9 < 0) {
   VAR_13 &= VAR_2;
   VAR_6 = 0;
   VAR_11--;
   VAR_9 += 1 << VAR_5;
   if (VAR_9 > 0)
    VAR_9 = 0;
  }
  else {
   VAR_13 &= VAR_0;
   VAR_6 = 1;
   VAR_11++;
   VAR_9 -= 1 << VAR_5;
   if (VAR_9 < 0)
    VAR_9 = 0;
  }
  VAR_12 -= VAR_14;
  if (VAR_12 < 0) {
   VAR_12 += VAR_15;
   if (VAR_8 < 0) {
    VAR_13 &= VAR_3;
    VAR_7 = 0;
    VAR_10--;
    VAR_8 += 1 << VAR_5;
    if (VAR_8 > 0)
     VAR_8 = 0;
   }
   else {
    VAR_13 &= VAR_4;
    VAR_7 = 1;
    VAR_10++;
    VAR_8 -= 1 << VAR_5;
    if (VAR_8 < 0)
     VAR_8 = 0;
   }
  }
 }
 return VAR_13;
}
