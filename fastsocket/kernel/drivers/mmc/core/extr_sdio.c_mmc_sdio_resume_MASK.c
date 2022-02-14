
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* driver; } ;
struct sdio_func {TYPE_2__ dev; } ;
struct mmc_host {TYPE_3__* card; int ocr; } ;
struct dev_pm_ops {int (* resume ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int sdio_funcs; struct sdio_func** sdio_func; } ;
struct TYPE_4__ {struct dev_pm_ops* pm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_0->card);


 FUNC_1(VAR_0);
 VAR_2 = FUNC_3(VAR_0, VAR_0->ocr, VAR_0->card);
 FUNC_2(VAR_0);
 for (VAR_1 = 0; !VAR_2 && VAR_1 < VAR_0->card->sdio_funcs; VAR_1++) {
  struct sdio_func *VAR_3 = VAR_0->card->sdio_func[VAR_1];
  if (VAR_3 && FUNC_4(VAR_3) && VAR_3->dev.driver) {
   const struct dev_pm_ops *VAR_4 = VAR_3->dev.driver->pm;
   VAR_2 = VAR_4->resume(&VAR_3->dev);
  }
 }

 return VAR_2;
}
