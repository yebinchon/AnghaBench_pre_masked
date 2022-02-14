
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dma_pub {int dummy; } ;
struct dma_info {int name; int core; } ;


 struct sk_buff* FUNC_0 (struct dma_info*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct dma_pub *VAR_0)
{
 struct dma_info *VAR_1 = (struct dma_info *)VAR_0;
 struct sk_buff *VAR_2;

 FUNC_1(VAR_1->core, "%s:\n", VAR_1->name);

 while ((VAR_2 = FUNC_0(VAR_1, 1)))
  FUNC_2(VAR_2);
}
