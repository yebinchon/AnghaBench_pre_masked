
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef unsigned int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int* VAR_15 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (unsigned int,int*,int**) ;
 unsigned int FUNC_3 (unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (unsigned int,int*) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int* VAR_16 ;

int
FUNC_8(const u_int8_t* VAR_17, size_t VAR_18, u_int16_t* VAR_19,
               size_t *VAR_20, size_t VAR_21, u_int16_t VAR_22, int VAR_23)
{
 u_int16_t* VAR_24;
 u_int16_t* VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33;
 int VAR_34;

 VAR_30 = (VAR_23 & VAR_10);
 VAR_31 = (VAR_23 & VAR_12);
 VAR_32 = (VAR_23 & VAR_11);
 VAR_33 = (VAR_23 & VAR_14);

 VAR_24 = VAR_19;
 VAR_25 = (u_int16_t *)((u_int8_t *)VAR_19 + VAR_21);

 while (VAR_18-- > 0 && (VAR_27 = *VAR_17++) != '\0') {
  if (VAR_19 >= VAR_25)
   goto toolong;


  if (VAR_27 < 0x80) {
   VAR_26 = VAR_33 ? FUNC_3(VAR_27, VAR_18 == 0) : VAR_27;
  } else {
   u_int32_t VAR_35;

   VAR_34 = VAR_16[VAR_27 >> 3];
   if ((VAR_34 < 0) || ((int)VAR_18 < VAR_34)) {
    goto escape;
   }
   VAR_18 -= VAR_34;

   switch (VAR_34) {
   case 1:
    VAR_35 = VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape2;
    VAR_35 += VAR_27;
    VAR_35 -= 0x00003080UL;
    if (VAR_35 < 0x0080)
     goto escape2;
    VAR_26 = VAR_35;
           break;
   case 2:
    VAR_35 = VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape2;
    VAR_35 += VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape3;
    VAR_35 += VAR_27;
    VAR_35 -= 0x000E2080UL;
    if (VAR_35 < 0x0800)
     goto escape3;
    if (VAR_35 >= 0xD800) {
     if (VAR_35 <= 0xDFFF)
      goto escape3;
     if (VAR_35 == 0xFFFE || VAR_35 == 0xFFFF)
      goto escape3;
    }
    VAR_26 = VAR_35;
    break;
   case 3:
    VAR_35 = VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape2;
    VAR_35 += VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape3;
    VAR_35 += VAR_27; VAR_35 <<= 6;
    VAR_27 = *VAR_17++;
    if ((VAR_27 >> 6) != 2)
     goto escape4;
           VAR_35 += VAR_27;
    VAR_35 -= 0x03C82080UL + VAR_2;
    VAR_26 = (VAR_35 >> VAR_4) + VAR_5;
    if (VAR_26 < VAR_5 || VAR_26 > VAR_6)
     goto escape4;
    FUNC_2(VAR_26, &VAR_28, &VAR_19);
    if (VAR_19 >= VAR_25)
     goto toolong;
    VAR_26 = (VAR_35 & VAR_3) + VAR_7;
    if (VAR_26 < VAR_7 || VAR_26 > VAR_8) {
     --VAR_19;
     goto escape4;
    }
    *VAR_19++ = VAR_26;
           continue;
   default:
    VAR_29 = VAR_0;
    goto exit;
   }
   if (VAR_30) {
    if (FUNC_7(VAR_26)) {
     u_int16_t VAR_36[8];
     int VAR_37, VAR_38;

     VAR_37 = FUNC_6(VAR_26, VAR_36);

     for (VAR_38 = 0; VAR_38 < VAR_37; ++VAR_38) {
      if (VAR_19 >= VAR_25)
       goto toolong;

      FUNC_2(VAR_36[VAR_38], &VAR_28, &VAR_19);
     }

     continue;
    }
   } else if (VAR_31 && (VAR_19 != VAR_24)) {
    u_int16_t VAR_39, VAR_40;

    if (FUNC_4(VAR_26)) {
     VAR_40 = VAR_19[-1];
     VAR_39 = FUNC_5(VAR_40, VAR_26);
     if (VAR_39) {
      --VAR_19;
      VAR_26 = VAR_39;
     }
    }
   }
   if (VAR_26 == VAR_9)
    VAR_26 = '\0';
  }
  if (VAR_26 == VAR_22)
   VAR_26 = '/';

  FUNC_2(VAR_26, &VAR_28, &VAR_19);
  continue;




escape4:
  VAR_17 -= 3;
  goto escape;
escape3:
  VAR_17 -= 2;
  goto escape;
escape2:
  VAR_17 -= 1;
escape:
  if (!VAR_32) {
   VAR_29 = VAR_0;
   goto exit;
  }
  if (VAR_34 > 0)
   VAR_18 += VAR_34;
  VAR_27 = *(VAR_17 - 1);

  if ((VAR_19 + 2) >= VAR_25)
   goto toolong;


  if (VAR_28 > 1) {
   FUNC_1(VAR_19 - VAR_28, VAR_28);
  }
  VAR_28 = 0;

  VAR_26 = '%';
  *VAR_19++ = VAR_26;
  VAR_26 = VAR_15[VAR_27 >> 4];
  *VAR_19++ = VAR_26;
  VAR_26 = VAR_15[VAR_27 & 0x0F];
  *VAR_19++ = VAR_26;
 }



 if (VAR_28 > 1) {
  FUNC_1(VAR_19 - VAR_28, VAR_28);
 }

 if (VAR_23 & VAR_13) {
  uint16_t *VAR_41 = VAR_24;
  while (VAR_41 < VAR_19) {
   *VAR_41 = FUNC_0(*VAR_41);
   ++VAR_41;
  }
 }

exit:
 *VAR_20 = (u_int8_t*)VAR_19 - (u_int8_t*)VAR_24;

 return (VAR_29);

toolong:
 VAR_29 = VAR_1;
 goto exit;
}
