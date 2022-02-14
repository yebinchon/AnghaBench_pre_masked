
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,unsigned int,unsigned int) ;

void FUNC_11(unsigned int VAR_6, unsigned int VAR_7)
{
 u32 VAR_8 = FUNC_8(VAR_5);
 u32 VAR_9 = FUNC_8(VAR_4);
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18 = FUNC_5(VAR_8);
 u32 VAR_19 = FUNC_1(VAR_8);

 if (VAR_8 & VAR_2) {

  VAR_10 = VAR_11 = VAR_6;
 } else {
  if (VAR_8 & VAR_3)

   VAR_17 = FUNC_4(VAR_8) * VAR_18 * VAR_19;
  else

   VAR_17 = FUNC_2(VAR_8) * FUNC_3(VAR_8);
  VAR_10 = VAR_6 * VAR_17 / FUNC_3(VAR_8);
  VAR_11 = VAR_6 * VAR_17 / FUNC_4(VAR_8);
 }

 VAR_12 = VAR_11 / VAR_18;
 VAR_13 = VAR_12 / VAR_19;


 if ((FUNC_9() & 0xf0000fff) == 0x40000440)

  VAR_14 = VAR_6;
 else

  VAR_14 = VAR_10;

 if (VAR_9 & VAR_0)

  VAR_15 = VAR_7;
 else

  VAR_15 = VAR_11 / FUNC_0(VAR_9);

 if (VAR_9 & VAR_1)

  VAR_16 = VAR_7;
 else

  VAR_16 = VAR_11 / FUNC_0(VAR_9);

 FUNC_10("PPC440GP: SysClk = %dMHz (%x)\n\r",
        (VAR_6 + 500000) / 1000000, VAR_6);

 FUNC_7(VAR_10, VAR_14, 0);

 FUNC_6("/plb", VAR_11);
 FUNC_6("/plb/opb", VAR_12);
 FUNC_6("/plb/opb/ebc", VAR_13);
 FUNC_6("/plb/opb/serial@40000200", VAR_15);
 FUNC_6("/plb/opb/serial@40000300", VAR_16);
}
