
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {struct atmel_nand_host* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct atmel_nand_host {TYPE_1__* board; } ;
struct TYPE_2__ {int rdy_pin_active_low; int rdy_pin; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = VAR_0->priv;
 struct atmel_nand_host *VAR_2 = VAR_1->priv;

 return FUNC_0(VAR_2->board->rdy_pin) ^
                !!VAR_2->board->rdy_pin_active_low;
}
