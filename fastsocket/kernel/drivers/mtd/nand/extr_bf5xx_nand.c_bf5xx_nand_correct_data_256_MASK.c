
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct mtd_info {int dummy; } ;
struct bf5xx_nand_info {int device; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 struct bf5xx_nand_info* FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0, u_char *VAR_1,
     u_char *VAR_2, u_char *VAR_3)
{
 struct bf5xx_nand_info *VAR_4 = FUNC_3(VAR_0);
 u32 VAR_5[5];
 u32 VAR_6, VAR_7;
 int VAR_8;
 unsigned short VAR_9, VAR_10;
 u_char VAR_11;

 VAR_6 = VAR_3[0] | (VAR_3[1] << 8) | (VAR_3[2] << 16);
 VAR_7 = VAR_2[0] | (VAR_2[1] << 8) | (VAR_2[2] << 16);

 VAR_5[0] = (VAR_6 ^ VAR_7);






 if (!VAR_5[0] || !VAR_6 || !VAR_7)
  return 0;






 if (FUNC_2(VAR_5[0]) == 1) {
  FUNC_0(VAR_4->device, "ECC data was incorrect!\n");
  return 1;
 }

 VAR_5[1] = (VAR_6 & 0x7FF) ^ (VAR_7 & 0x7FF);
 VAR_5[2] = (VAR_6 & 0x7FF) ^ ((VAR_6 >> 11) & 0x7FF);
 VAR_5[3] = (VAR_7 & 0x7FF) ^ ((VAR_7 >> 11) & 0x7FF);
 VAR_5[4] = VAR_5[2] ^ VAR_5[3];

 for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
  FUNC_1(VAR_4->device, "syndrome[%d] 0x%08x\n", VAR_8, VAR_5[VAR_8]);

 FUNC_1(VAR_4->device,
  "calced[0x%08x], stored[0x%08x]\n",
  VAR_6, VAR_7);







 if (FUNC_2(VAR_5[0]) == 11 && VAR_5[4] == 0x7FF) {
  FUNC_1(VAR_4->device,
   "1-bit correctable error, correct it.\n");
  FUNC_1(VAR_4->device,
   "syndrome[1] 0x%08x\n", VAR_5[1]);

  VAR_9 = VAR_5[1] & 0x7;
  VAR_10 = VAR_5[1] >> 0x3;
  VAR_11 = *(VAR_1 + VAR_10);
  VAR_11 = VAR_11 ^ (0x1 << VAR_9);
  *(VAR_1 + VAR_10) = VAR_11;

  return 0;
 }






 FUNC_0(VAR_4->device,
  "More than 1-bit error, non-correctable error.\n");
 FUNC_0(VAR_4->device,
  "Please discard data, mark bad block\n");

 return 1;
}
