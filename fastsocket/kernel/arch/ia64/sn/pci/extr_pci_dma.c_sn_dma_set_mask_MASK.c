
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int * dma_mask; int * bus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int ) ;

int FUNC_2(struct device *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_1->bus != &VAR_0);

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 *VAR_1->dma_mask = VAR_2;
 return 1;
}
