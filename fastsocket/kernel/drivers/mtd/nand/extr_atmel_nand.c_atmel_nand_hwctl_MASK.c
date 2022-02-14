
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {struct atmel_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct atmel_nand_host {int ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_2, int VAR_3)
{
 if (FUNC_0()) {
  struct nand_chip *VAR_4 = VAR_2->priv;
  struct atmel_nand_host *VAR_5 = VAR_4->priv;
  FUNC_1(VAR_5->ecc, VAR_1, VAR_0);
 }
}
