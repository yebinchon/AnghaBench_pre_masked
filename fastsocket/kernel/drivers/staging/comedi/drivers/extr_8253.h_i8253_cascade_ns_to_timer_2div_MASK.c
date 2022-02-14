
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



__attribute__((used)) static inline void FUNC_0(int VAR_1,
        unsigned int *VAR_2,
        unsigned int *VAR_3,
        unsigned int *VAR_4,
        int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17, VAR_18;
 static const unsigned int VAR_19 = 0x10000;



 VAR_7 = *VAR_2 ? *VAR_2 : VAR_19;
 VAR_8 = *VAR_3 ? *VAR_3 : VAR_19;
 VAR_6 = VAR_7 * VAR_8;
 if (VAR_7 * VAR_8 * VAR_1 == *VAR_4 &&
     VAR_7 > 1 && VAR_7 <= VAR_19 && VAR_8 > 1 && VAR_8 <= VAR_19 &&

     VAR_6 > VAR_7 && VAR_6 > VAR_8 &&
     VAR_6 * VAR_1 > VAR_6 &&
     VAR_6 * VAR_1 > VAR_1) {
  return;
 }

 VAR_6 = *VAR_4 / VAR_1;

 VAR_12 = VAR_13 = 0;
 VAR_9 = VAR_10 = 0;

 VAR_11 = 0;
 VAR_14 = 0xffffffff;

 VAR_8 = VAR_19;
 VAR_16 = VAR_6 / VAR_8;
 if (VAR_16 < 2)
  VAR_16 = 2;
 for (VAR_7 = VAR_16; VAR_7 <= VAR_6 / VAR_7 + 1 && VAR_7 <= VAR_19;
      VAR_7++) {
  for (VAR_8 = VAR_6 / VAR_7;
       VAR_7 * VAR_8 <= VAR_6 + VAR_7 + 1 && VAR_8 <= VAR_19;
       VAR_8++) {
   VAR_15 = VAR_1 * VAR_7 * VAR_8;
   if (VAR_15 <= *VAR_4 && VAR_15 > VAR_11) {
    VAR_11 = VAR_15;
    VAR_9 = VAR_7;
    VAR_10 = VAR_8;
   }
   if (VAR_15 >= *VAR_4 && VAR_15 < VAR_14) {
    VAR_14 = VAR_15;
    VAR_12 = VAR_7;
    VAR_13 = VAR_8;
   }
  }
 }

 VAR_5 &= VAR_0;
 switch (VAR_5) {
 case 129:
 default:
  VAR_18 = VAR_12 * VAR_13 * VAR_1;
  VAR_17 = VAR_9 * VAR_10 * VAR_1;
  if (VAR_18 - *VAR_4 < *VAR_4 - VAR_17) {
   VAR_7 = VAR_12;
   VAR_8 = VAR_13;
  } else {
   VAR_7 = VAR_9;
   VAR_8 = VAR_10;
  }
  break;
 case 128:
  VAR_7 = VAR_12;
  VAR_8 = VAR_13;
  break;
 case 130:
  VAR_7 = VAR_9;
  VAR_8 = VAR_10;
  break;
 }

 *VAR_4 = VAR_7 * VAR_8 * VAR_1;
 *VAR_2 = VAR_7 & 0xffff;
 *VAR_3 = VAR_8 & 0xffff;
 return;
}
