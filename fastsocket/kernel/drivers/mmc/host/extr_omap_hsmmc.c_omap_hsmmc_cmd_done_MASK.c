
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int mmc; int * mrq; int response_busy; int * data; int base; int * cmd; } ;
struct mmc_command {int flags; int mrq; scalar_t__ error; void** resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct omap_hsmmc_host *VAR_6, struct mmc_command *VAR_7)
{
 VAR_6->cmd = ((void*)0);

 if (VAR_7->flags & VAR_1) {
  if (VAR_7->flags & VAR_0) {

   VAR_7->resp[3] = FUNC_0(VAR_6->base, VAR_2);
   VAR_7->resp[2] = FUNC_0(VAR_6->base, VAR_3);
   VAR_7->resp[1] = FUNC_0(VAR_6->base, VAR_4);
   VAR_7->resp[0] = FUNC_0(VAR_6->base, VAR_5);
  } else {

   VAR_7->resp[0] = FUNC_0(VAR_6->base, VAR_2);
  }
 }
 if ((VAR_6->data == ((void*)0) && !VAR_6->response_busy) || VAR_7->error) {
  VAR_6->mrq = ((void*)0);
  FUNC_1(VAR_6->mmc, VAR_7->mrq);
 }
}
