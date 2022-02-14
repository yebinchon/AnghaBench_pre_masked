
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {scalar_t__ dma; int lock; int mmc; int * mrq; } ;
struct mmc_request {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct mmc_request*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wbsd_host*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct wbsd_host *VAR_1, struct mmc_request *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->dma >= 0) {



  VAR_3 = FUNC_0();
  FUNC_2(VAR_1->dma);
  FUNC_1(VAR_1->dma);
  FUNC_4(VAR_3);




  FUNC_7(VAR_1, VAR_0, 0);
 }

 VAR_1->mrq = ((void*)0);




 FUNC_6(&VAR_1->lock);
 FUNC_3(VAR_1->mmc, VAR_2);
 FUNC_5(&VAR_1->lock);
}
