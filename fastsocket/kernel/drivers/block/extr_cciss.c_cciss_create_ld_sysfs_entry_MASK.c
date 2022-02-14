
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int * parent; int * bus; int * type; } ;
struct ctlr_info {TYPE_1__** drv; int dev; int ctlr; } ;
struct TYPE_2__ {int device_initialized; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 long FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static long FUNC_3(struct ctlr_info *VAR_2,
           int VAR_3)
{
 struct device *VAR_4;

 if (VAR_2->drv[VAR_3]->device_initialized)
  return 0;

 VAR_4 = &VAR_2->drv[VAR_3]->dev;
 FUNC_2(VAR_4);
 VAR_4->type = &VAR_1;
 VAR_4->bus = &VAR_0;
 FUNC_0(VAR_4, "c%dd%d", VAR_2->ctlr, VAR_3);
 VAR_4->parent = &VAR_2->dev;
 VAR_2->drv[VAR_3]->device_initialized = 1;
 return FUNC_1(VAR_4);
}
