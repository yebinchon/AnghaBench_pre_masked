
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct at91mci_host {TYPE_1__* board; } ;
struct TYPE_2__ {scalar_t__ wp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct at91mci_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct at91mci_host *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->board->wp_pin)
  return !!FUNC_0(VAR_2->board->wp_pin);




 return -VAR_0;
}
