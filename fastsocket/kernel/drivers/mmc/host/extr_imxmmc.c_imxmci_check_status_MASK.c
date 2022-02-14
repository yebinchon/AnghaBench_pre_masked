
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxmci_host {int present; int timer; int stuck_timeout; int tasklet; int pending_events; int mmc; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* card_present ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_5)
{
 struct imxmci_host *VAR_6 = (struct imxmci_host *)VAR_5;

 if (VAR_6->pdata && VAR_6->pdata->card_present &&
     VAR_6->pdata->card_present(FUNC_4(VAR_6->mmc)) != VAR_6->present) {
  VAR_6->present ^= 1;
  FUNC_3(FUNC_4(VAR_6->mmc), "card %s\n",
        VAR_6->present ? "inserted" : "removed");

  FUNC_6(VAR_1, &VAR_6->pending_events);
  FUNC_8(&VAR_6->tasklet);
 }

 if (FUNC_9(VAR_3, &VAR_6->pending_events) ||
     FUNC_9(VAR_2, &VAR_6->pending_events)) {
  FUNC_0(&VAR_6->stuck_timeout);
  if (FUNC_1(&VAR_6->stuck_timeout) > 4)
   FUNC_8(&VAR_6->tasklet);
 } else {
  FUNC_2(&VAR_6->stuck_timeout, 0);

 }

 FUNC_5(&VAR_6->timer, VAR_4 + (VAR_0>>1));
}
