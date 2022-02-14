
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SDRAM_TRP ;
typedef scalar_t__ SDRAM_TRCD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int) ;
 int VAR_8 ;
 int FUNC_13 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;

void FUNC_17(void)
{




 if (!(VAR_2 & VAR_9)) {



  VAR_10 = (0
   | FUNC_14(VAR_16)
   | FUNC_15(VAR_11));




 VAR_0 = (0
  | FUNC_4((int)((VAR_18 + 2) + 0.5 ))
  | FUNC_5(VAR_21 + 1)
  | FUNC_2((int)((VAR_18*2) + 2))
  | FUNC_0((int)((SDRAM_TRCD ) + 0.5))
  | FUNC_1((int)((SDRAM_TRP ) + 0.5))
  | FUNC_3((int)(((VAR_20) ) + 0.5))
  | FUNC_6(3));
 VAR_1 = (0
  | FUNC_8(VAR_17/2 + 1)
  | FUNC_10(VAR_17/2 + VAR_21)
  | FUNC_9((int)((VAR_18+VAR_17/2-1.0)+0.5))
  | FUNC_7(VAR_17-1));





        VAR_2 = (0
  | VAR_7
  | VAR_3
  | VAR_4
  | FUNC_12(1)
  | FUNC_13((int)(((VAR_19/(VAR_22*64)) - 1) + 0.5))
  | VAR_8
  | VAR_5);




 VAR_12 = (0
  | VAR_13
  | FUNC_16(0x0)
  | VAR_15);




 VAR_12 = (0
  | VAR_14
  | FUNC_16(0x163)
  | VAR_15);




 VAR_2 |= VAR_5;




 VAR_2 |= VAR_6;
 VAR_2 |= VAR_6;




 VAR_12 = (0
  | VAR_14
  | FUNC_16(0x063)
  | VAR_15);




 VAR_2 &= ~VAR_7;
 VAR_2 |= (0
  | VAR_9
  | FUNC_11(0xC));
 }
}
