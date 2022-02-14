
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int mmc; int * data; int * cmd; int * req; scalar_t__ base; } ;
struct mmc_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct mmc_request*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mxcmci_host *VAR_1,
  struct mmc_request *VAR_2)
{
 FUNC_1(0, VAR_1->base + VAR_0);

 VAR_1->req = ((void*)0);
 VAR_1->cmd = ((void*)0);
 VAR_1->data = ((void*)0);

 FUNC_0(VAR_1->mmc, VAR_2);
}
