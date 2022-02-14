
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct TYPE_2__ {struct device_type* type; int release; int * bus; int parent; } ;
struct mmc_card {TYPE_1__ dev; struct mmc_host* host; } ;
struct device_type {int dummy; } ;


 int VAR_0 ;
 struct mmc_card* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 struct mmc_card* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mmc_host*) ;
 int VAR_3 ;

struct mmc_card *FUNC_4(struct mmc_host *VAR_4, struct device_type *VAR_5)
{
 struct mmc_card *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct mmc_card), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->host = VAR_4;

 FUNC_1(&VAR_6->dev);

 VAR_6->dev.parent = FUNC_3(VAR_4);
 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.release = VAR_3;
 VAR_6->dev.type = VAR_5;

 return VAR_6;
}
