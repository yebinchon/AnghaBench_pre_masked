
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pxa3xx_nand_info {scalar_t__ retcode; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_2,
  uint8_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5)
{
 struct pxa3xx_nand_info *VAR_6 = VAR_2->priv;
 if (VAR_6->retcode == VAR_1)
  return 1;
 else if (VAR_6->retcode != VAR_0)
  return -1;

 return 0;
}
