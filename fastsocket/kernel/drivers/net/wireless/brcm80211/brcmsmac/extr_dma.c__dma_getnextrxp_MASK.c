
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dma_info {scalar_t__ nrxd; } ;


 struct sk_buff* FUNC_0 (struct dma_info*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct dma_info *VAR_0, bool VAR_1)
{
 if (VAR_0->nrxd == 0)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1);
}
