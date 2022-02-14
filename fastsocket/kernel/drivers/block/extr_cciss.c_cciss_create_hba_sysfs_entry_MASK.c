
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * parent; int * bus; int * type; } ;
struct ctlr_info {TYPE_2__ dev; TYPE_1__* pdev; int devname; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_2)
{
 FUNC_2(&VAR_2->dev);
 VAR_2->dev.type = &VAR_1;
 VAR_2->dev.bus = &VAR_0;
 FUNC_0(&VAR_2->dev, "%s", VAR_2->devname);
 VAR_2->dev.parent = &VAR_2->pdev->dev;

 return FUNC_1(&VAR_2->dev);
}
