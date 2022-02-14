
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int cmd; TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct imxmci_host {struct mmc_request* req; } ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct imxmci_host*,TYPE_1__*) ;
 int FUNC_2 (struct imxmci_host*,int ,unsigned int) ;
 struct imxmci_host* FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_5, struct mmc_request *VAR_6)
{
 struct imxmci_host *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8;

 FUNC_0(VAR_7->req != ((void*)0));

 VAR_7->req = VAR_6;

 VAR_8 = 0;

 if (VAR_6->data) {
  FUNC_1(VAR_7, VAR_6->data);

  VAR_8 |= VAR_0;

  if (VAR_6->data->flags & VAR_4)
   VAR_8 |= VAR_2;

  if (VAR_6->data->flags & VAR_3)
   VAR_8 |= VAR_1;
 }

 FUNC_2(VAR_7, VAR_6->cmd, VAR_8);
}
