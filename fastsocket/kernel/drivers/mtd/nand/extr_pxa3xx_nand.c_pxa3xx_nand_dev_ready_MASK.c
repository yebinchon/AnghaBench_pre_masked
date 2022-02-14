
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_nand_info {int dummy; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa3xx_nand_info*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2)
{
 struct pxa3xx_nand_info *VAR_3 = VAR_2->priv;
 return (FUNC_0(VAR_3, VAR_0) & VAR_1) ? 1 : 0;
}
