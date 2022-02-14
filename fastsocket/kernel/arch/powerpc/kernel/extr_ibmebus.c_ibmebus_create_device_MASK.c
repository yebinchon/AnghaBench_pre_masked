
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dma_ops; } ;
struct TYPE_4__ {TYPE_1__ archdata; int * bus; } ;
struct of_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct of_device* FUNC_0 (struct device_node*,int *,int *) ;
 int FUNC_1 (struct of_device*) ;
 int FUNC_2 (struct of_device*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_4)
{
 struct of_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, ((void*)0), &VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.archdata.dma_ops = &VAR_3;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return VAR_6;
 }

 return 0;
}
