
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_nand_info {scalar_t__ retcode; } ;
struct nand_chip {scalar_t__ state; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_3, struct nand_chip *VAR_4)
{
 struct pxa3xx_nand_info *VAR_5 = VAR_3->priv;


 if (VAR_4->state == VAR_2 || VAR_4->state == VAR_1) {
  if (VAR_5->retcode == VAR_0)
   return 0;
  else {




   return 0x01;
  }
 }

 return 0;
}
