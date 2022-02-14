
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_nand_set {int dummy; } ;
struct s3c2410_nand_mtd {int mtd; } ;
struct s3c2410_nand_info {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct s3c2410_nand_info *VAR_0,
          struct s3c2410_nand_mtd *VAR_1,
          struct s3c2410_nand_set *VAR_2)
{
 return FUNC_0(&VAR_1->mtd);
}
