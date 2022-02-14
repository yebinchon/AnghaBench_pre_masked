
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int * bus; int * parent; } ;
struct sdio_func {TYPE_1__ dev; struct mmc_card* card; } ;
struct mmc_card {int dev; } ;


 int VAR_0 ;
 struct sdio_func* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 struct sdio_func* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

struct sdio_func *FUNC_3(struct mmc_card *VAR_4)
{
 struct sdio_func *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct sdio_func), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->card = VAR_4;

 FUNC_1(&VAR_5->dev);

 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.release = VAR_3;

 return VAR_5;
}
