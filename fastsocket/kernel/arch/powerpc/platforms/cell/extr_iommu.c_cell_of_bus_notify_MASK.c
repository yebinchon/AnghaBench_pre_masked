
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int dma_ops; } ;
struct device {TYPE_1__ archdata; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2,
         void *VAR_3)
{
 struct device *VAR_4 = VAR_3;


 if (VAR_2 != VAR_0)
  return 0;


 VAR_4->archdata.dma_ops = FUNC_1();

 FUNC_0(VAR_4);

 return 0;
}
