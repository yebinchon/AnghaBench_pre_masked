
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct dev_archdata {scalar_t__ max_direct_dma_addr; } ;
struct device {struct dev_archdata archdata; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct device*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
      unsigned long VAR_4, void *VAR_5)
{
 struct device *VAR_6 = VAR_5;
 struct dev_archdata *VAR_7;


 if (VAR_4 != VAR_0)
  return 0;

 VAR_7 = &VAR_6->archdata;
 VAR_7->max_direct_dma_addr = 0;


 if (FUNC_0(VAR_6) < FUNC_1())
  FUNC_2(VAR_6, &VAR_2);

 return VAR_1;
}
