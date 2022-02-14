
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int ** VAR_20 ;
 scalar_t__* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__* VAR_24 ;
 scalar_t__* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__* VAR_28 ;
 scalar_t__* VAR_29 ;
 int FUNC_2 (scalar_t__*,scalar_t__,int) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__* VAR_32 ;
 scalar_t__* VAR_33 ;
 scalar_t__* VAR_34 ;

void FUNC_3(UBYTE VAR_35)
{
 int VAR_36;
 UBYTE VAR_37;


 if (VAR_3 == VAR_1) {
  FUNC_0(&VAR_12, 1);
  if (VAR_12 > 0){
   FUNC_0(&VAR_27, 1);
   FUNC_0(&VAR_11, 1);
   FUNC_1(VAR_28, VAR_12 * 0x4000);
  }
  FUNC_0(&VAR_31, 1);
  if (VAR_31 > 0) {
   FUNC_0(&VAR_30, 1);
   FUNC_1(VAR_32, VAR_31 * 0x1000);
  }
 }


 VAR_36 = VAR_18 > 64 ? 64 : VAR_18;
 FUNC_0(&VAR_36, 1);
 FUNC_1(&VAR_16[0], 65536);

 FUNC_1(&VAR_10[0], 65536);
 if (VAR_3 == VAR_2) {
  if (VAR_35 != 0)
   FUNC_1(&VAR_13[0], 8192);
  FUNC_1(&VAR_34[0], 8192);

  if (VAR_35 != 0)
   FUNC_1(&VAR_17[0], 16384);
  FUNC_1(&VAR_33[0], 16384);
  if (VAR_35 != 0)
   FUNC_1(VAR_21, 0x2000);
 }


 VAR_36 = (VAR_18 - 64) / 16;
 if (VAR_36 < 0)
  VAR_36 = 0;
 FUNC_0(&VAR_36, 1);
 if (VAR_18 == VAR_7 || VAR_18 == VAR_6) {

  VAR_36 = VAR_18 - 320;
  FUNC_0(&VAR_36, 1);
 }
 VAR_37 = VAR_22 | VAR_23;
 FUNC_1(&VAR_37, 1);

 FUNC_0(&VAR_14, 1);

 if (VAR_18 > 64) {
  FUNC_1(&VAR_25[0], VAR_26);
  if (VAR_0 != ((void*)0) && VAR_19)
   FUNC_1(VAR_24, 0x800);
 }


 if (VAR_3 == VAR_2 && VAR_18 > 20) {
  FUNC_0(&VAR_15, 1);
  if (VAR_15) {
   FUNC_1( VAR_29, 0x800 );
  }
 }
}
