
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct at91mci_host {TYPE_1__* board; int mmc; } ;
struct TYPE_2__ {scalar_t__ slot_b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct at91mci_host*,int ,int ) ;
 int FUNC_1 (int ) ;
 struct at91mci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,char,char*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_4, int VAR_5)
{
 struct at91mci_host *VAR_6 = FUNC_2(VAR_4);

 FUNC_3("%s: sdio_irq %c : %s\n", FUNC_1(VAR_6->mmc),
  VAR_6->board->slot_b ? 'B':'A', VAR_5 ? "enable" : "disable");
 FUNC_0(VAR_6, VAR_5 ? VAR_1 : VAR_0,
  VAR_6->board->slot_b ? VAR_3 : VAR_2);

}
