
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int sdio_irqs; int sdio_irq_thread; int sdio_irq_thread_abort; int claimed; } ;
struct mmc_card {struct mmc_host* host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->host;

 FUNC_1(!VAR_1->claimed);
 FUNC_0(VAR_1->sdio_irqs < 1);

 if (!--VAR_1->sdio_irqs) {
  FUNC_2(&VAR_1->sdio_irq_thread_abort, 1);
  FUNC_3(VAR_1->sdio_irq_thread);
 }

 return 0;
}
