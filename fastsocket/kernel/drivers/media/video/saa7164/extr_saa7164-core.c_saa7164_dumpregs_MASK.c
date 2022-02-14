
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct saa7164_dev {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(struct saa7164_dev *VAR_0, u32 VAR_1)
{
 int VAR_2;

 FUNC_0(1, "--------------------> "
  "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f\n");

 for (VAR_2 = 0; VAR_2 < 0x100; VAR_2 += 16)
  FUNC_0(1, "region0[0x%08x] = "
   "%02x %02x %02x %02x %02x %02x %02x %02x"
   " %02x %02x %02x %02x %02x %02x %02x %02x\n", VAR_2,
   (u8)FUNC_1(VAR_1 + VAR_2 + 0),
   (u8)FUNC_1(VAR_1 + VAR_2 + 1),
   (u8)FUNC_1(VAR_1 + VAR_2 + 2),
   (u8)FUNC_1(VAR_1 + VAR_2 + 3),
   (u8)FUNC_1(VAR_1 + VAR_2 + 4),
   (u8)FUNC_1(VAR_1 + VAR_2 + 5),
   (u8)FUNC_1(VAR_1 + VAR_2 + 6),
   (u8)FUNC_1(VAR_1 + VAR_2 + 7),
   (u8)FUNC_1(VAR_1 + VAR_2 + 8),
   (u8)FUNC_1(VAR_1 + VAR_2 + 9),
   (u8)FUNC_1(VAR_1 + VAR_2 + 10),
   (u8)FUNC_1(VAR_1 + VAR_2 + 11),
   (u8)FUNC_1(VAR_1 + VAR_2 + 12),
   (u8)FUNC_1(VAR_1 + VAR_2 + 13),
   (u8)FUNC_1(VAR_1 + VAR_2 + 14),
   (u8)FUNC_1(VAR_1 + VAR_2 + 15)
   );
}
