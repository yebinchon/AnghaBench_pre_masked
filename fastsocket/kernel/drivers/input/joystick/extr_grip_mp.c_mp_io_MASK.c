
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (int,int,int,struct gameport*,int*) ;

__attribute__((used)) static int FUNC_4(struct gameport* VAR_9, int VAR_10, int VAR_11, u32 *VAR_12)
{
 u8 VAR_13;
 u8 VAR_14;
 u32 VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18;



 *VAR_12 = 0;
 VAR_13 = FUNC_1(VAR_9);
 if (VAR_13 & 1)
  return VAR_3;

 for (VAR_18 = 0; VAR_18 < 64; VAR_18++) {
  VAR_13 = FUNC_1(VAR_9);
  VAR_17 |= 1 << ((VAR_13 >> 4) & 3);
 }

 if (VAR_17 == 1) {
  VAR_13 = FUNC_1(VAR_9);
  VAR_17 = VAR_13 & 0xf0;

  if (VAR_13 & 0x31)
   return VAR_2;
  FUNC_2(VAR_9);

  if (!FUNC_3(0x10, 0, 308, VAR_9, &VAR_13))
   return VAR_2;
 } else
  return VAR_3;



 if (VAR_13 & 0x20) {
  VAR_17 |= VAR_13 >> 4;

  if (VAR_17 != 0xb)
   return 0;
  VAR_14 = 7;
  VAR_16 = 3;
  VAR_15 = (VAR_4 | VAR_5) >> 28;
 } else {
  VAR_14 = 1;
  VAR_16 = 1;
  VAR_15 = (VAR_4 | VAR_6) >> 28;
 }



 while (1) {
  if (!FUNC_3(0, 0x10, 77, VAR_9, &VAR_13))
   return VAR_2;
  VAR_13 = (VAR_13 >> 5) & VAR_14;

  if (VAR_15 & VAR_4)
   break;
  VAR_15 = (VAR_15 << VAR_16) | VAR_13;

  if (!FUNC_3(0x10, 0, 77, VAR_9, &VAR_13))
   return VAR_2;
 }

 if (VAR_13)
  return VAR_2;



 if (VAR_16 == 3) {
  VAR_15 = (VAR_15 & 0xffff0000) | ((VAR_15 << 1) & 0xffff);
  VAR_15 = (VAR_15 >> 2) | 0xf0000000;
 }

 if (FUNC_0(VAR_15) == 1)
  return VAR_2;



 if (!FUNC_3(0x30, 0, 77, VAR_9, &VAR_13))
  return VAR_2;

 VAR_13 = FUNC_1(VAR_9);

 if (VAR_13 & 1)
  return VAR_2;

 FUNC_2(VAR_9);

 if (!FUNC_3(0, 0x20, 77, VAR_9, &VAR_13))
  return VAR_2;



 *VAR_12 = VAR_15;
 if ((VAR_10 == 0) || ((VAR_10 & VAR_3) && !(VAR_15 & VAR_7)))
  return VAR_0;

 if (VAR_15 & VAR_8)
  return VAR_0 | VAR_3;



 if (!FUNC_3(0x20, 0, 77, VAR_9, &VAR_13))
  return VAR_0 | VAR_2;

 VAR_13 = FUNC_1(VAR_9);
 if (VAR_13 & 1)
  return VAR_0 | VAR_2;



 FUNC_2(VAR_9);
 do {
  if (!FUNC_3(0x20, 0x10, 116, VAR_9, &VAR_13))
   return VAR_0 | VAR_2;

  if (!FUNC_3(0x30, 0, 193, VAR_9, &VAR_13))
   return VAR_0 | VAR_2;

  if (VAR_13 & 1)
   return VAR_0 | VAR_2;

  if (VAR_11 & 1)
   FUNC_2(VAR_9);

  VAR_11 >>= 1;
 } while (VAR_11);

 return VAR_0 | VAR_1;
}
