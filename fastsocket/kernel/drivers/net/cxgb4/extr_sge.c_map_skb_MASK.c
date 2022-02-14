
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_shared_info {size_t nr_frags; TYPE_1__* frags; } ;
struct sk_buff {int data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int size; int page_offset; int page; } ;
typedef TYPE_1__ skb_frag_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff const*) ;
 struct skb_shared_info* FUNC_6 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, const struct sk_buff *VAR_3,
     dma_addr_t *VAR_4)
{
 const skb_frag_t *VAR_5, *VAR_6;
 const struct skb_shared_info *VAR_7;

 *VAR_4 = FUNC_1(VAR_2, VAR_3->data, FUNC_5(VAR_3), VAR_0);
 if (FUNC_2(VAR_2, *VAR_4))
  goto out_err;

 VAR_7 = FUNC_6(VAR_3);
 VAR_6 = &VAR_7->frags[VAR_7->nr_frags];

 for (VAR_5 = VAR_7->frags; VAR_5 < VAR_6; VAR_5++) {
  *++VAR_4 = FUNC_0(VAR_2, VAR_5->page, VAR_5->page_offset, VAR_5->size,
           VAR_0);
  if (FUNC_2(VAR_2, *VAR_4))
   goto unwind;
 }
 return 0;

unwind:
 while (VAR_5-- > VAR_7->frags)
  FUNC_3(VAR_2, *--VAR_4, VAR_5->size, VAR_0);

 FUNC_4(VAR_2, VAR_4[-1], FUNC_5(VAR_3), VAR_0);
out_err:
 return -VAR_1;
}
