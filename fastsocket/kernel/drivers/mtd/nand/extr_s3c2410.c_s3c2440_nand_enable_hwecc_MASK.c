
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ regs; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 struct s3c2410_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_2, int VAR_3)
{
 struct s3c2410_nand_info *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_4->regs + VAR_0);
 FUNC_2(VAR_5 | VAR_1, VAR_4->regs + VAR_0);
}
