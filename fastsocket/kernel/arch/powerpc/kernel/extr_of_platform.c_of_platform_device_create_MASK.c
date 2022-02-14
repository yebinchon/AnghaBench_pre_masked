
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; int coherent_dma_mask; } ;
struct of_device {int dma_mask; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct of_device* FUNC_1 (struct device_node*,char const*,struct device*) ;
 int FUNC_2 (struct of_device*) ;
 scalar_t__ FUNC_3 (struct of_device*) ;
 int VAR_0 ;

struct of_device* FUNC_4(struct device_node *VAR_1,
         const char *VAR_2,
         struct device *VAR_3)
{
 struct of_device *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dma_mask = 0xffffffffUL;
 VAR_4->dev.coherent_dma_mask = FUNC_0(32);

 VAR_4->dev.bus = &VAR_0;






 if (FUNC_3(VAR_4) != 0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
