
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef char u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 char const FUNC_0 (char const) ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char FUNC_1 (char) ;
 int FUNC_2 (char,char*) ;
 scalar_t__ FUNC_3 (char) ;

int
FUNC_4(const u_int16_t * VAR_13, size_t VAR_14, u_int8_t * VAR_15,
               size_t * VAR_16, size_t VAR_17, u_int16_t VAR_18, int VAR_19)
{
 u_int8_t * VAR_20;
 u_int8_t * VAR_21;
 u_int16_t VAR_22;
 u_int16_t * VAR_23 = ((void*)0);
 u_int16_t VAR_24[8];
 int VAR_25 = 0;
 size_t VAR_26;
 int VAR_27 = (VAR_19 & VAR_11);
 int VAR_28 = ((VAR_19 & VAR_10) == 0);
 int VAR_29 = (VAR_19 & VAR_9);
 int VAR_30 = (VAR_19 & VAR_12);
 int VAR_31 = 0;

 VAR_20 = VAR_15;
 VAR_21 = VAR_20 + VAR_17;
 if (VAR_28)
  --VAR_21;
 VAR_26 = VAR_14 / 2;

 while (VAR_26-- > 0) {
  if (VAR_25 > 0) {
   --VAR_25;
   VAR_22 = *VAR_23++;
  } else {
   VAR_22 = VAR_27 ? FUNC_0(*VAR_13++) : *VAR_13++;

   if (VAR_29 && FUNC_3(VAR_22)) {
    VAR_25 = FUNC_2(VAR_22, VAR_24) - 1;
    VAR_26 += VAR_25;
    VAR_22 = VAR_24[0];
    VAR_23 = &VAR_24[1];
   }
  }


  if (VAR_22 == '/') {
   if (VAR_18)
    VAR_22 = VAR_18;
   else {
    VAR_22 = '_';
    VAR_31 = VAR_0;
   }
  } else if (VAR_22 == '\0') {
   VAR_22 = VAR_8;
  }

  if (VAR_22 < 0x0080) {
   if (VAR_15 >= VAR_21) {
    VAR_31 = VAR_1;
    break;
   }
   *VAR_15++ = VAR_22;

  } else if (VAR_22 < 0x800) {
   if ((VAR_15 + 1) >= VAR_21) {
    VAR_31 = VAR_1;
    break;
   }
   *VAR_15++ = 0xc0 | (VAR_22 >> 6);
   *VAR_15++ = 0x80 | (0x3f & VAR_22);

  } else {

   if (VAR_22 == 0xFFFE || VAR_22 == 0xFFFF) {
    VAR_31 = VAR_0;
    break;
   }


   if (VAR_22 >= VAR_4 && VAR_22 <= VAR_5
    && VAR_26 > 0) {
    u_int16_t VAR_32;
    u_int32_t VAR_33;

    VAR_32 = VAR_27 ? FUNC_0(*VAR_13) : *VAR_13;
    if (VAR_32 >= VAR_6 && VAR_32 <= VAR_7) {
     VAR_33 = ((VAR_22 - VAR_4) << VAR_3)
      + (VAR_32 - VAR_6) + VAR_2;
     if ((VAR_15 + 3) >= VAR_21) {
      VAR_31 = VAR_1;
      break;
     }
     --VAR_26;
     ++VAR_13;
     *VAR_15++ = 0xf0 | (VAR_33 >> 18);
     *VAR_15++ = 0x80 | (0x3f & (VAR_33 >> 12));
     *VAR_15++ = 0x80 | (0x3f & (VAR_33 >> 6));
     *VAR_15++ = 0x80 | (0x3f & VAR_33);
     continue;
    }
   } else if (VAR_30) {
    VAR_22 = FUNC_1(VAR_22);
    if (VAR_22 < 0x0080) {
     if (VAR_15 >= VAR_21) {
      VAR_31 = VAR_1;
      break;
     }
     *VAR_15++ = VAR_22;
     continue;
    }
   }
   if ((VAR_15 + 2) >= VAR_21) {
    VAR_31 = VAR_1;
    break;
   }
   *VAR_15++ = 0xe0 | (VAR_22 >> 12);
   *VAR_15++ = 0x80 | (0x3f & (VAR_22 >> 6));
   *VAR_15++ = 0x80 | (0x3f & VAR_22);
  }
 }

 *VAR_16 = VAR_15 - VAR_20;
 if (VAR_28)
  *VAR_15++ = '\0';

 return (VAR_31);
}
