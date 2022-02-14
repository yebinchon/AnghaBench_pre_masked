
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {unsigned int cmdat; struct mmc_request* mrq; } ;
struct mmc_request {int cmd; TYPE_1__* data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct pxamci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct pxamci_host*,TYPE_1__*) ;
 int FUNC_3 (struct pxamci_host*,int ,unsigned int) ;
 int FUNC_4 (struct pxamci_host*) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_8, struct mmc_request *VAR_9)
{
 struct pxamci_host *VAR_10 = FUNC_1(VAR_8);
 unsigned int VAR_11;

 FUNC_0(VAR_10->mrq != ((void*)0));

 VAR_10->mrq = VAR_9;

 FUNC_4(VAR_10);

 VAR_11 = VAR_10->cmdat;
 VAR_10->cmdat &= ~VAR_3;

 if (VAR_9->data) {
  FUNC_2(VAR_10, VAR_9->data);

  VAR_11 &= ~VAR_0;
  VAR_11 |= VAR_1 | VAR_2;
  if (VAR_9->data->flags & VAR_7)
   VAR_11 |= VAR_5;

  if (VAR_9->data->flags & VAR_6)
   VAR_11 |= VAR_4;
 }

 FUNC_3(VAR_10, VAR_9->cmd, VAR_11);
}
