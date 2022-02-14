
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {scalar_t__ mem; int dma_addr; int pdev; } ;
struct mem {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct nic *VAR_1)
{
 VAR_1->mem = FUNC_0(VAR_1->pdev, sizeof(struct mem),
  &VAR_1->dma_addr);
 return VAR_1->mem ? 0 : -VAR_0;
}
