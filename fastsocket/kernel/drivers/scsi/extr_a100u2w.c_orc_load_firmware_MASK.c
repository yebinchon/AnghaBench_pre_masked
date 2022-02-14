
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct orc_host {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static u8 FUNC_8(struct orc_host * VAR_10)
{
 u32 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u8 *VAR_14, VAR_15;




 VAR_15 = FUNC_1(VAR_10->base + VAR_6);
 FUNC_4(VAR_15 | VAR_1, VAR_10->base + VAR_6);
 FUNC_4(0x00, VAR_10->base + VAR_3);
 FUNC_6(0x0000, VAR_10->base + VAR_2);
 if (FUNC_1(VAR_10->base + VAR_4) != 0x55) {
  FUNC_4(VAR_15, VAR_10->base + VAR_6);
  return 0;
 }
 FUNC_6(0x0001, VAR_10->base + VAR_2);
 if (FUNC_1(VAR_10->base + VAR_4) != 0xAA) {
  FUNC_4(VAR_15, VAR_10->base + VAR_6);
  return 0;
 }

 FUNC_4(VAR_9 | VAR_0, VAR_10->base + VAR_7);
 VAR_14 = (u8 *) & VAR_11;
 VAR_11 = FUNC_0(0);
 FUNC_6(0x0010, VAR_10->base + VAR_2);
 *VAR_14 = FUNC_1(VAR_10->base + VAR_4);
 FUNC_6(0x0011, VAR_10->base + VAR_2);
 *(VAR_14 + 1) = FUNC_1(VAR_10->base + VAR_4);
 FUNC_6(0x0012, VAR_10->base + VAR_2);
 *(VAR_14 + 2) = FUNC_1(VAR_10->base + VAR_4);
 FUNC_6(*(VAR_14 + 2), VAR_10->base + VAR_3);
 FUNC_5(FUNC_3(VAR_11), VAR_10->base + VAR_5);



 FUNC_7(500);
 VAR_12 = (u16) FUNC_3(VAR_11);
 for (VAR_13 = 0, VAR_14 = (u8 *) & VAR_11;
      VAR_13 < 0x1000;
      VAR_13++, VAR_12++) {
  FUNC_6(VAR_12, VAR_10->base + VAR_2);
  *VAR_14++ = FUNC_1(VAR_10->base + VAR_4);
  if ((VAR_13 % 4) == 3) {
   FUNC_5(FUNC_3(VAR_11), VAR_10->base + VAR_8);
   VAR_14 = (u8 *) & VAR_11;
  }
 }



 FUNC_4(VAR_9 | VAR_0, VAR_10->base + VAR_7);
 VAR_12 -= 0x1000;
 for (VAR_13 = 0, VAR_14 = (u8 *) & VAR_11;
      VAR_13 < 0x1000;
      VAR_13++, VAR_12++) {
  FUNC_6(VAR_12, VAR_10->base + VAR_2);
  *VAR_14++ = FUNC_1(VAR_10->base + VAR_4);
  if ((VAR_13 % 4) == 3) {
   if (FUNC_2(VAR_10->base + VAR_8) != FUNC_3(VAR_11)) {
    FUNC_4(VAR_9, VAR_10->base + VAR_7);
    FUNC_4(VAR_15, VAR_10->base + VAR_6);
    return 0;
   }
   VAR_14 = (u8 *) & VAR_11;
  }
 }


 FUNC_4(VAR_9, VAR_10->base + VAR_7);
 FUNC_4(VAR_15, VAR_10->base + VAR_6);
 return 1;
}
