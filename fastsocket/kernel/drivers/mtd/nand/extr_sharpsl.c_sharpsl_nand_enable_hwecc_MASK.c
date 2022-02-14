
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpsl_nand {scalar_t__ io; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sharpsl_nand* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_1, int VAR_2)
{
 struct sharpsl_nand *VAR_3 = FUNC_0(VAR_1);
 FUNC_1(0, VAR_3->io + VAR_0);
}
