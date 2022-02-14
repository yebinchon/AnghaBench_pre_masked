
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 int FUNC_0 (int,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 unsigned long VAR_29;

 VAR_20 = FUNC_1(VAR_0);
 if (!FUNC_0(VAR_20, VAR_18, VAR_19))
  FUNC_4("DDR controller is not initialized\n");


 VAR_21 = FUNC_0(VAR_20, VAR_12, VAR_13);
 VAR_22 = FUNC_0(VAR_20, VAR_10, VAR_11);
 VAR_23 = FUNC_0(VAR_20, VAR_14, VAR_15);

 VAR_24 = FUNC_5();
 if (!VAR_24)
  FUNC_4("No memory installed\n");
 if (VAR_24 > VAR_21)
  FUNC_4("DDR wrong CS configuration\n");


 VAR_20 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_20, VAR_16, VAR_17))
  VAR_28 = 4;
 else
  VAR_28 = 8;


  VAR_20 = FUNC_1(VAR_2);

 VAR_26 = FUNC_0(VAR_20, VAR_4, VAR_5);
 if (VAR_26 > VAR_23)
  FUNC_4("DDR wrong APIN configuration\n");
 VAR_26 = VAR_23 - VAR_26;


 VAR_20 = FUNC_1(VAR_3);

 VAR_25 = FUNC_0(VAR_20, VAR_8, VAR_9);
 if (VAR_25 > VAR_22)
  FUNC_4("DDR wrong COL configuration\n");
 VAR_25 = VAR_22 - VAR_25;

 if (FUNC_0(VAR_20, VAR_6, VAR_7))
  VAR_27 = 8;
 else
  VAR_27 = 4;

 VAR_29 = VAR_24 * (1 << (VAR_25+VAR_26)) * VAR_27 * VAR_28;
 VAR_29 = FUNC_2(VAR_29);
 FUNC_3(0, VAR_29);
}
