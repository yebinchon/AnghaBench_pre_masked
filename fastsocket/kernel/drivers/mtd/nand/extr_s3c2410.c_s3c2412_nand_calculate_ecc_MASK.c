
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_char ;
struct s3c2410_nand_info {scalar_t__ regs; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct s3c2410_nand_info* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1, const u_char *VAR_2, u_char *VAR_3)
{
 struct s3c2410_nand_info *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5 = FUNC_1(VAR_4->regs + VAR_0);

 VAR_3[0] = VAR_5;
 VAR_3[1] = VAR_5 >> 8;
 VAR_3[2] = VAR_5 >> 16;

 FUNC_0("calculate_ecc: returning ecc %02x,%02x,%02x\n", VAR_3[0], VAR_3[1], VAR_3[2]);

 return 0;
}
