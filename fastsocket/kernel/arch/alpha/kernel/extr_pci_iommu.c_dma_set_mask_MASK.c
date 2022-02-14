
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int * dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(struct device *VAR_1, u64 VAR_2)
{
 if (!VAR_1->dma_mask ||
     !FUNC_1(FUNC_0(VAR_1), VAR_2))
  return -VAR_0;

 *VAR_1->dma_mask = VAR_2;

 return 0;
}
