
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int sdio_irqs; int sdio_irq_thread; int sdio_irq_thread_abort; int claimed; } ;
struct mmc_card {struct mmc_host* host; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct mmc_host*,char*,int ) ;
 int FUNC_5 (struct mmc_host*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct mmc_card *VAR_1)
{
 struct mmc_host *VAR_2 = VAR_1->host;

 FUNC_2(!VAR_2->claimed);

 if (!VAR_2->sdio_irqs++) {
  FUNC_3(&VAR_2->sdio_irq_thread_abort, 0);
  VAR_2->sdio_irq_thread =
   FUNC_4(VAR_0, VAR_2, "ksdioirqd/%s",
    FUNC_5(VAR_2));
  if (FUNC_0(VAR_2->sdio_irq_thread)) {
   int VAR_3 = FUNC_1(VAR_2->sdio_irq_thread);
   VAR_2->sdio_irqs--;
   return VAR_3;
  }
 }

 return 0;
}
