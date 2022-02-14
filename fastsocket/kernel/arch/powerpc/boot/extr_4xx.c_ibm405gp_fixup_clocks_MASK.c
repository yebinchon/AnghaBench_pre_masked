
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;

void FUNC_5(unsigned int VAR_4, unsigned int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7 = FUNC_2(VAR_0);
 u32 VAR_8 = FUNC_2(VAR_1);
 u32 VAR_9 = FUNC_2(VAR_2);
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_18 = (8 - ((VAR_6 & 0xe0000000) >> 29));
 VAR_20 = (VAR_6 & 0x1e000000) >> 25;
 if (VAR_20 == 0)
  VAR_20 = 16;
 VAR_21 = ((VAR_6 & 0x00060000) >> 17) + 1;
 VAR_22 = ((VAR_6 & 0x00018000) >> 15) + 1;
 VAR_24 = ((VAR_6 & 0x00001800) >> 13) + 1;
 VAR_23 = ((VAR_6 & 0x00001800) >> 11) + 2;
 VAR_25 = ((VAR_7 & 0x3e) >> 1) + 1;


 if ((FUNC_3() & 0xfffffff0) == (0x50910951 & 0xfffffff0)) {
  VAR_19 = 8 - (VAR_6 & 0x00000007);
  if (!(VAR_9 & 0x00001000))
   if (VAR_9 & 0x00000020)
    VAR_17 = VAR_19 * 2 * VAR_24;
   else
    VAR_17 = VAR_19 * VAR_21 * VAR_24;
  else if (VAR_9 & 0x00000020)
   if (VAR_9 & 0x00000800)
    VAR_17 = VAR_19 * 2 * VAR_23;
   else
    VAR_17 = VAR_20 * VAR_18;
  else if (VAR_23 == VAR_20)
   VAR_17 = VAR_20 * VAR_21 * VAR_23;
  else
   VAR_17 = VAR_20 * VAR_19 * VAR_21;

  VAR_10 = VAR_4 * VAR_17 / VAR_18;
  VAR_11 = VAR_4 * VAR_17 / (VAR_19 * VAR_21);
 } else {
  VAR_17 = VAR_18 * VAR_20 * VAR_21;
  VAR_10 = VAR_4 * VAR_17 / VAR_18;
  VAR_11 = VAR_10 / VAR_21;
 }
 VAR_12 = VAR_11 / VAR_22;
 VAR_13 = VAR_11 / VAR_23;

 if (VAR_7 & 0x80)

  VAR_15 = VAR_5;
 else
  VAR_15 = VAR_10 / VAR_25;

 if (VAR_7 & 0x40)

  VAR_16 = VAR_5;
 else
  VAR_16 = VAR_10 / VAR_25;


 VAR_8 = VAR_8 & ~0x00800000;
 FUNC_4(VAR_1, VAR_8);
 VAR_14 = VAR_10;

 FUNC_1(VAR_10, VAR_14, 0);
 FUNC_0("/plb", VAR_11);
 FUNC_0("/plb/opb", VAR_12);
 FUNC_0("/plb/ebc", VAR_13);
 FUNC_0("/plb/opb/serial@ef600300", VAR_15);
 FUNC_0("/plb/opb/serial@ef600400", VAR_16);
}
