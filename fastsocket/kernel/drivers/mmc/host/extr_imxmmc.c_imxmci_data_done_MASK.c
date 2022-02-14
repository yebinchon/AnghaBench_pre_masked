
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {scalar_t__ stop; } ;
struct mmc_data {int dummy; } ;
struct imxmci_host {int mmc; struct mmc_request* req; struct mmc_data* data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct imxmci_host*,unsigned int) ;
 int FUNC_2 (struct imxmci_host*,struct mmc_request*) ;
 int FUNC_3 (struct imxmci_host*,scalar_t__,int ) ;
 int FUNC_4 (struct imxmci_host*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct imxmci_host *VAR_0, unsigned int VAR_1)
{
 struct mmc_data *VAR_2 = VAR_0->data;
 int VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_0->req->stop) {
  FUNC_4(VAR_0);
  FUNC_3(VAR_0, VAR_0->req->stop, 0);
 } else {
  struct mmc_request *VAR_4;
  VAR_4 = VAR_0->req;
  if (VAR_4)
   FUNC_2(VAR_0, VAR_4);
  else
   FUNC_0(FUNC_5(VAR_0->mmc), "imxmci_data_done: no request to finish\n");
 }

 return 1;
}
