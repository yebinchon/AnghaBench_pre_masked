
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UWORD ;
typedef int ULONG ;
typedef int UBYTE ;
struct TYPE_2__ {scalar_t__ nDigitized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int * VAR_13 ;
 scalar_t__ VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_1__ VAR_32 ;
 int* VAR_33 ;
 int* VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 int * VAR_39 ;

__attribute__((used)) static void FUNC_0(UWORD VAR_40, UBYTE VAR_41, UBYTE VAR_42,
      UBYTE VAR_43)
{
 ULONG VAR_44 = 0;
 UBYTE VAR_45;
 UBYTE VAR_46;
 UBYTE VAR_47;


 VAR_47 = VAR_42 << 2;


 switch (VAR_40 & 0x0f) {
 case 131:

  VAR_46 = 1 << VAR_25;
  if (VAR_16[VAR_42] & VAR_20)
   VAR_46 |= 1 << VAR_26;
  break;
 case 136:

  VAR_33[VAR_25 + VAR_47] = (VAR_41 & VAR_29) * VAR_43;
  VAR_46 = 1 << VAR_25;
  break;
 case 130:

  VAR_46 = 1 << VAR_26;
  break;
 case 135:

  VAR_33[VAR_26 + VAR_47] = (VAR_41 & VAR_29) * VAR_43;
  VAR_46 = 1 << VAR_26;
  break;
 case 129:

  VAR_46 = 1 << VAR_27;
  if (VAR_16[VAR_42] & VAR_24)
   VAR_46 |= 1 << VAR_28;
  break;
 case 134:

  VAR_33[VAR_27 + VAR_47] = (VAR_41 & VAR_29) * VAR_43;
  VAR_46 = 1 << VAR_27;
  break;
 case 128:

  VAR_46 = 1 << VAR_28;
  break;
 case 133:

  VAR_33[VAR_28 + VAR_47] = (VAR_41 & VAR_29) * VAR_43;
  VAR_46 = 1 << VAR_28;
  break;
 case 132:

  VAR_46 = 15;
  break;
 default:
  VAR_46 = 0;
  break;
 }
 if (VAR_46 & (1 << VAR_25)) {

  if (VAR_16[VAR_42] & VAR_19)
   VAR_44 = VAR_17[VAR_25 + VAR_47] + 4;
  else
   VAR_44 = (VAR_17[VAR_25 + VAR_47] + 1) * VAR_18[VAR_42];

  if (VAR_44 != VAR_3[VAR_25 + VAR_47]) {
   VAR_3[VAR_25 + VAR_47] = VAR_44;

   if (VAR_2[VAR_25 + VAR_47] > VAR_44) {
    VAR_2[VAR_25 + VAR_47] = VAR_44;
   }
  }
 }

 if (VAR_46 & (1 << VAR_26)) {

  if (VAR_16[VAR_42] & VAR_20) {
   if (VAR_16[VAR_42] & VAR_19)
    VAR_44 = VAR_17[VAR_26 + VAR_47] * 256 +
     VAR_17[VAR_25 + VAR_47] + 7;
   else
    VAR_44 = (VAR_17[VAR_26 + VAR_47] * 256 +
         VAR_17[VAR_25 + VAR_47] + 1) * VAR_18[VAR_42];
  }
  else
   VAR_44 = (VAR_17[VAR_26 + VAR_47] + 1) * VAR_18[VAR_42];

  if (VAR_44 != VAR_3[VAR_26 + VAR_47]) {
   VAR_3[VAR_26 + VAR_47] = VAR_44;

   if (VAR_2[VAR_26 + VAR_47] > VAR_44) {
    VAR_2[VAR_26 + VAR_47] = VAR_44;
   }
  }
 }

 if (VAR_46 & (1 << VAR_27)) {

  if (VAR_16[VAR_42] & VAR_23)
   VAR_44 = VAR_17[VAR_27 + VAR_47] + 4;
  else
   VAR_44 = (VAR_17[VAR_27 + VAR_47] + 1) * VAR_18[VAR_42];

  if (VAR_44 != VAR_3[VAR_27 + VAR_47]) {
   VAR_3[VAR_27 + VAR_47] = VAR_44;

   if (VAR_2[VAR_27 + VAR_47] > VAR_44) {
    VAR_2[VAR_27 + VAR_47] = VAR_44;
   }
  }
 }

 if (VAR_46 & (1 << VAR_28)) {

  if (VAR_16[VAR_42] & VAR_24) {
   if (VAR_16[VAR_42] & VAR_23)
    VAR_44 = VAR_17[VAR_28 + VAR_47] * 256 +
     VAR_17[VAR_27 + VAR_47] + 7;
   else
    VAR_44 = (VAR_17[VAR_28 + VAR_47] * 256 +
         VAR_17[VAR_27 + VAR_47] + 1) * VAR_18[VAR_42];
  }
  else
   VAR_44 = (VAR_17[VAR_28 + VAR_47] + 1) * VAR_18[VAR_42];

  if (VAR_44 != VAR_3[VAR_28 + VAR_47]) {
   VAR_3[VAR_28 + VAR_47] = VAR_44;

   if (VAR_2[VAR_28 + VAR_47] > VAR_44) {
    VAR_2[VAR_28 + VAR_47] = VAR_44;
   }
  }
 }


 for (VAR_45 = VAR_25; VAR_45 <= VAR_28; VAR_45++) {
  if (VAR_46 & (1 << VAR_45)) {
   if ( (VAR_15[VAR_45 + VAR_47] & VAR_30) ||
    ((VAR_15[VAR_45 + VAR_47] & VAR_29) == 0)
    || (!VAR_1 && (VAR_3[VAR_45 + VAR_47] < (VAR_31 >> 8)))
    ) {

    VAR_4[VAR_45 + VAR_47] = 1;


    if ((VAR_45 == VAR_27 && !(VAR_16[VAR_42] & VAR_21)) ||
     (VAR_45 == VAR_28 && !(VAR_16[VAR_42] & VAR_22)) ||
     (VAR_45 == VAR_25) ||
     (VAR_45 == VAR_26)
     || (!VAR_1 && (VAR_3[VAR_45 + VAR_47] < (VAR_31 >> 8)))
    ) {

     VAR_3[VAR_45 + VAR_47] = 0x7fffffffL;
     VAR_2[VAR_45 + VAR_47] = 0x7fffffffL;
    }
   }
  }
 }


}
