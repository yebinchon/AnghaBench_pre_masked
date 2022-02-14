
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {struct atmel_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct atmel_nand_host {TYPE_1__* board; scalar_t__ io_base; } ;
struct TYPE_2__ {int cle; int ale; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct atmel_nand_host*) ;
 int FUNC_1 (struct atmel_nand_host*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_4, int VAR_5, unsigned int VAR_6)
{
 struct nand_chip *VAR_7 = VAR_4->priv;
 struct atmel_nand_host *VAR_8 = VAR_7->priv;

 if (VAR_6 & VAR_2) {
  if (VAR_6 & VAR_3)
   FUNC_1(VAR_8);
  else
   FUNC_0(VAR_8);
 }
 if (VAR_5 == VAR_1)
  return;

 if (VAR_6 & VAR_0)
  FUNC_2(VAR_5, VAR_8->io_base + (1 << VAR_8->board->cle));
 else
  FUNC_2(VAR_5, VAR_8->io_base + (1 << VAR_8->board->ale));
}
