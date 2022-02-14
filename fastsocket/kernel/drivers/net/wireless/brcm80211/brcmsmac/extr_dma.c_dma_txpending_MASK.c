
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pub {int dummy; } ;
struct dma_info {int txout; int txin; } ;


 int FUNC_0 (struct dma_info*,int ,int ) ;

int FUNC_1(struct dma_pub *VAR_0)
{
 struct dma_info *VAR_1 = (struct dma_info *)VAR_0;
 return FUNC_0(VAR_1, VAR_1->txin, VAR_1->txout);
}
