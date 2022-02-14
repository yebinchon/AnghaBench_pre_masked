
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int ULONG ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__,int *,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int* VAR_22 ;

void FUNC_4(int VAR_23, int VAR_24)
{


 int VAR_25 = VAR_14;



 int VAR_26 = VAR_19;


 int VAR_27 = VAR_4 * 4;

 int VAR_28 = VAR_4 * 4 + VAR_14 * 4;

 int VAR_29 = (48 - VAR_7) * 4;


 int VAR_30 = 0;


 int VAR_31 = 0;

 int VAR_32 = 0;




 UWORD VAR_33[4];




 UWORD VAR_34[4 * 4];

 int VAR_35 = 0;
 int VAR_36 = 0;
 int VAR_37 = 0;
 int VAR_38 = 0;

 int VAR_39 = 0;



 int VAR_40 = 0;

 int VAR_41 = 0;




 int VAR_42 = 0;




 int VAR_43 = 0;
 VAR_32 = VAR_13[VAR_16];
 if (VAR_16 == VAR_5 || VAR_16 == VAR_8) {
  VAR_32 *= 2;
 }
 else if (VAR_16 == VAR_6 || VAR_16 == VAR_9) {
  VAR_32 *= 4;
 }
 if (VAR_11 < 2 || (VAR_0 & 3) == 0) {
  VAR_28 = VAR_29;
  VAR_30 = 1;
 }
 if (VAR_23 > VAR_29)
  VAR_23 = VAR_29;
 if (VAR_24 > VAR_29)
  VAR_24 = VAR_29;
 if (VAR_23 < VAR_27)
  VAR_23 = VAR_27;
 if (VAR_24 < VAR_27)
  VAR_24 = VAR_27;
 if (VAR_23 >= VAR_24)
  return;
 if (VAR_23 < VAR_28) {

  VAR_35 = (VAR_23 & (~3));
  VAR_36 = VAR_23 - VAR_35;
  VAR_15 = VAR_35;
  VAR_14 = VAR_25 - (VAR_35 - VAR_27) / 4;
  if (VAR_23 > VAR_22[VAR_16]) {
   VAR_31 = (VAR_23 - VAR_22[VAR_16]) / 4;
   if (((VAR_23 - VAR_22[VAR_16]) & 3) > VAR_36) {
    VAR_36 = ((VAR_23 - VAR_22[VAR_16]) & 3);
    VAR_35 = VAR_23 - VAR_36;
   }
  }
 }
 else if (VAR_23 >= VAR_26) {
  VAR_35 = (VAR_23 & (~3));
  VAR_36 = VAR_23 - VAR_35;
  VAR_19 = VAR_35;
  VAR_30 = 1;
 }
 else {
  VAR_36 = ((VAR_23 - VAR_22[VAR_16]) & 3);
  VAR_35 = VAR_23 - VAR_36;
  VAR_31 = (VAR_35 - VAR_22[VAR_16]) / 4;
  VAR_14 = 0;
 }
 FUNC_3(VAR_33, VAR_21 + VAR_35, VAR_36 * sizeof(UWORD));

 if (VAR_24 <= VAR_28) {

  VAR_14 = (VAR_24 + 3) / 4 - VAR_35 / 4;

  VAR_30 = 1;
 }
 else {

  if (VAR_17) {
   FUNC_0();
   VAR_17 = VAR_2;
  }

  if (VAR_24 > VAR_26) {
   VAR_18 = ((VAR_24 + 3) & (~3));
  }
  else {
   VAR_32 = (VAR_24 - VAR_22[VAR_16] + 3) / 4;
  }
 }
 if (VAR_30) {
  VAR_39 = 0;
  VAR_41 = 0;
  VAR_40 = 0;
 }
 else if (VAR_16 == VAR_5 || VAR_16 == VAR_8) {
  VAR_42 = (VAR_31 & (~1));
  VAR_38 = (VAR_31 - VAR_42) * 4;
  VAR_37 = VAR_22[VAR_16] + VAR_42 * 4;
  VAR_43 = ((VAR_32 + 1) & (~1));
  VAR_39 = (VAR_43 - VAR_42) / 2;
  VAR_41 = VAR_42 * 4;
  VAR_40 = VAR_42 / 2;
 }
 else if (VAR_16 == VAR_6 || VAR_16 == VAR_9) {
  VAR_42 = (VAR_31 & (~3));
  VAR_38 = (VAR_31 - VAR_42) * 4;
  VAR_37 = VAR_22[VAR_16] + VAR_42 * 4;
  VAR_43 = ((VAR_32 + 3) & (~3));
  VAR_39 = (VAR_43 - VAR_42) / 4;
  VAR_41 = VAR_42 * 4;
  VAR_40 = VAR_42 / 4;
 }
 else {
  VAR_39 = VAR_32 - VAR_31;
  VAR_41 = VAR_31 * 4;
  VAR_40 = VAR_31;
 }
 FUNC_3(VAR_34, VAR_21 + VAR_37, VAR_38 * sizeof(UWORD));

 if (VAR_30) {



  if (VAR_11 < 2 || (VAR_0 & 3) == 0 || VAR_24 <= VAR_28) {
   VAR_18 = VAR_15 + VAR_14 * 4;
  }
  else if (VAR_23 >= VAR_26) {
   VAR_15 = VAR_19;
  }
  FUNC_1();
 }
 else {
  FUNC_2(VAR_39,
   VAR_10 + VAR_1 + VAR_12[VAR_16] + VAR_40,
   VAR_21 + VAR_22[VAR_16] + VAR_41,
   (ULONG *) &VAR_3[VAR_22[VAR_16] + VAR_41]);
 }
 FUNC_3(VAR_21 + VAR_37, VAR_34, VAR_38 * sizeof(UWORD));
 FUNC_3(VAR_21 + VAR_35, VAR_33, VAR_36 * sizeof(UWORD));


 VAR_14=VAR_25;
 VAR_19=VAR_26;
 VAR_15 = VAR_4 * 4;
 VAR_18 = (48-VAR_7) *4;
}
