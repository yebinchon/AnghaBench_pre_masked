
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* driver; } ;
struct sdio_func {TYPE_3__ dev; } ;
struct mmc_host {TYPE_1__* card; } ;
struct dev_pm_ops {int (* suspend ) (TYPE_3__*) ;int (* resume ) (TYPE_3__*) ;} ;
struct TYPE_6__ {struct dev_pm_ops* pm; } ;
struct TYPE_5__ {int sdio_funcs; struct sdio_func** sdio_func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->card->sdio_funcs; VAR_2++) {
  struct sdio_func *VAR_4 = VAR_1->card->sdio_func[VAR_2];
  if (VAR_4 && FUNC_0(VAR_4) && VAR_4->dev.driver) {
   const struct dev_pm_ops *VAR_5 = VAR_4->dev.driver->pm;
   if (!VAR_5 || !VAR_5->suspend || !VAR_5->resume) {

    VAR_3 = -VAR_0;
   } else
    VAR_3 = VAR_5->suspend(&VAR_4->dev);
   if (VAR_3)
    break;
  }
 }
 while (VAR_3 && --VAR_2 >= 0) {
  struct sdio_func *VAR_6 = VAR_1->card->sdio_func[VAR_2];
  if (VAR_6 && FUNC_0(VAR_6) && VAR_6->dev.driver) {
   const struct dev_pm_ops *VAR_7 = VAR_6->dev.driver->pm;
   VAR_7->resume(&VAR_6->dev);
  }
 }

 return VAR_3;
}
