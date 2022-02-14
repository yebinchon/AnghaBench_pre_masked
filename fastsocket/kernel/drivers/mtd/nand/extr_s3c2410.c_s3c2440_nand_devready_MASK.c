
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_info {scalar_t__ regs; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct s3c2410_nand_info* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2)
{
 struct s3c2410_nand_info *VAR_3 = FUNC_1(VAR_2);
 return FUNC_0(VAR_3->regs + VAR_0) & VAR_1;
}
