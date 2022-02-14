
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct mtd_info {int dummy; } ;
struct davinci_nand_info {int dummy; } ;


 unsigned short FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 unsigned short FUNC_3 (struct davinci_nand_info*,int ) ;
 int FUNC_4 (struct davinci_nand_info*,int ,unsigned short) ;
 int FUNC_5 (struct davinci_nand_info*,int*) ;
 struct davinci_nand_info* FUNC_6 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_9,
  u_char *VAR_10, u_char *VAR_11, u_char *VAR_12)
{
 int VAR_13;
 struct davinci_nand_info *VAR_14 = FUNC_6(VAR_9);
 unsigned short VAR_15[8];
 unsigned short *VAR_16;
 u32 VAR_17[4];
 unsigned VAR_18, VAR_19;


 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  if (VAR_11[VAR_13] != 0xff)
   goto compare;
 }
 return 0;

compare:



 if (FUNC_1(0x01 & (unsigned) VAR_11))
  return -VAR_0;
 VAR_16 = (unsigned short *)VAR_11;

 VAR_15[0] = (VAR_16[0] >> 0) & 0x3ff;
 VAR_15[1] = ((VAR_16[0] >> 10) & 0x3f) | ((VAR_16[1] << 6) & 0x3c0);
 VAR_15[2] = (VAR_16[1] >> 4) & 0x3ff;
 VAR_15[3] = ((VAR_16[1] >> 14) & 0x3) | ((VAR_16[2] << 2) & 0x3fc);
 VAR_15[4] = (VAR_16[2] >> 8) | ((VAR_16[3] << 8) & 0x300);
 VAR_15[5] = (VAR_16[3] >> 2) & 0x3ff;
 VAR_15[6] = ((VAR_16[3] >> 12) & 0xf) | ((VAR_16[4] << 4) & 0x3f0);
 VAR_15[7] = (VAR_16[4] >> 6) & 0x3ff;


 for (VAR_13 = 7; VAR_13 >= 0; VAR_13--)
  FUNC_4(VAR_14, VAR_4, VAR_15[VAR_13]);




 FUNC_3(VAR_14, VAR_3);
 FUNC_5(VAR_14, VAR_17);
 if (!(VAR_17[0] | VAR_17[1] | VAR_17[2] | VAR_17[3]))
  return 0;





 FUNC_3(VAR_14, VAR_5);





 FUNC_4(VAR_14, VAR_2,
   FUNC_3(VAR_14, VAR_2) | FUNC_0(13));
 for (;;) {
  u32 VAR_20 = FUNC_3(VAR_14, VAR_3);

  switch ((VAR_20 >> 8) & 0x0f) {
  case 0:
   FUNC_3(VAR_14, VAR_7);
   return 0;
  case 1:
   FUNC_3(VAR_14, VAR_7);
   return -VAR_1;
  case 2:
  case 3:
   VAR_18 = 1 + ((VAR_20 >> 16) & 0x03);
   goto correct;
  default:
   FUNC_2();
   continue;
  }
 }

correct:

 for (VAR_13 = 0, VAR_19 = 0; VAR_13 < VAR_18; VAR_13++) {
  int VAR_21, VAR_22;

  if (VAR_13 > 1) {
   VAR_21 = FUNC_3(VAR_14,
      VAR_6);
   VAR_22 = FUNC_3(VAR_14,
      VAR_8);
  } else {
   VAR_21 = FUNC_3(VAR_14,
      VAR_5);
   VAR_22 = FUNC_3(VAR_14,
      VAR_7);
  }

  if (VAR_13 & 1) {
   VAR_21 >>= 16;
   VAR_22 >>= 16;
  }
  VAR_21 &= 0x3ff;
  VAR_21 = (512 + 7) - VAR_21;

  if (VAR_21 < 512) {
   VAR_10[VAR_21] ^= VAR_22;
   VAR_19++;
  }
 }

 return VAR_19;
}
