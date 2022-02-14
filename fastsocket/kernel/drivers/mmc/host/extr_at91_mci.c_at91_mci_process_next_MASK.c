
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at91mci_host {int flags; TYPE_1__* request; int mmc; int timer; } ;
struct TYPE_2__ {scalar_t__ stop; scalar_t__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91mci_host*,scalar_t__) ;
 int FUNC_1 (struct at91mci_host*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct at91mci_host *VAR_2)
{
 if (!(VAR_2->flags & VAR_0)) {
  VAR_2->flags |= VAR_0;
  FUNC_0(VAR_2, VAR_2->request->cmd);
 }
 else if ((!(VAR_2->flags & VAR_1)) && VAR_2->request->stop) {
  VAR_2->flags |= VAR_1;
  FUNC_0(VAR_2, VAR_2->request->stop);
 } else {
  FUNC_3(&VAR_2->timer);



  if (FUNC_2())
   FUNC_1(VAR_2);
  FUNC_4(VAR_2->mmc, VAR_2->request);
 }
}
