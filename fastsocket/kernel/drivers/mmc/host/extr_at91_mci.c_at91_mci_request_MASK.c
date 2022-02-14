
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct mmc_host {int dummy; } ;
struct at91mci_host {int timer; scalar_t__ flags; struct mmc_request* request; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct at91mci_host*) ;
 scalar_t__ VAR_1 ;
 struct at91mci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct at91mci_host *VAR_4 = FUNC_1(VAR_2);
 VAR_4->request = VAR_3;
 VAR_4->flags = 0;

 FUNC_2(&VAR_4->timer, VAR_1 + VAR_0);

 FUNC_0(VAR_4);
}
