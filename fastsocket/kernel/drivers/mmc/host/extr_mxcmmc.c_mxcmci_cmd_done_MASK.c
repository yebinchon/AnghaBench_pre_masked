
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int datawork; scalar_t__ data; scalar_t__ req; int * cmd; } ;


 int FUNC_0 (struct mxcmci_host*,scalar_t__) ;
 int FUNC_1 (struct mxcmci_host*,unsigned int) ;
 int FUNC_2 (struct mxcmci_host*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mxcmci_host *VAR_0, unsigned int VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 VAR_0->cmd = ((void*)0);

 if (!VAR_0->data && VAR_0->req) {
  FUNC_0(VAR_0, VAR_0->req);
  return;
 }





 if (!FUNC_2(VAR_0) && VAR_0->data)
  FUNC_3(&VAR_0->datawork);

}
