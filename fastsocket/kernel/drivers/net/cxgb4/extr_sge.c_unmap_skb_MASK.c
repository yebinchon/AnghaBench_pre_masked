
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {size_t nr_frags; TYPE_1__* frags; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int size; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, const struct sk_buff *VAR_2,
        const dma_addr_t *VAR_3)
{
 const skb_frag_t *VAR_4, *VAR_5;
 const struct skb_shared_info *VAR_6;

 FUNC_1(VAR_1, *VAR_3++, FUNC_2(VAR_2), VAR_0);

 VAR_6 = FUNC_3(VAR_2);
 VAR_5 = &VAR_6->frags[VAR_6->nr_frags];
 for (VAR_4 = VAR_6->frags; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_1, *VAR_3++, VAR_4->size, VAR_0);
}
