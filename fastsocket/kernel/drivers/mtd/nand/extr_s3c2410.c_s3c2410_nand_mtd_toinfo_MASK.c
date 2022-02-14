
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_nand_info {int dummy; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct s3c2410_nand_info* info; } ;


 TYPE_1__* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static struct s3c2410_nand_info *FUNC_1(struct mtd_info *VAR_0)
{
 return FUNC_0(VAR_0)->info;
}
