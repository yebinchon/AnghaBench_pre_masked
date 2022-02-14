
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct of_device {int dma_mask; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct of_device* FUNC_0 (struct device_node*,char const*,struct device*) ;
 int FUNC_1 (struct of_device*) ;
 scalar_t__ FUNC_2 (struct of_device*) ;
 int VAR_0 ;

struct of_device *FUNC_3(struct device_node *VAR_1,
         const char *VAR_2,
         struct device *VAR_3)
{
 struct of_device *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dma_mask = 0xffffffffUL;
 VAR_4->dev.bus = &VAR_0;






 if (FUNC_2(VAR_4) != 0) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
