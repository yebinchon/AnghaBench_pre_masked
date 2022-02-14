
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_frag_struct {int size; int page; int page_offset; } ;
struct sk_buff {int truesize; } ;
struct mlx4_en_rx_desc {TYPE_1__* data; } ;
struct mlx4_en_rx_alloc {int * page; int offset; } ;
struct mlx4_en_priv {int num_frags; struct mlx4_en_frag_info* frag_info; int ddev; } ;
struct mlx4_en_frag_info {int frag_prefix_size; scalar_t__ frag_stride; int frag_size; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct skb_frag_struct* frags; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct skb_frag_struct*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct skb_frag_struct*,int ) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_rx_desc *VAR_2,
        struct mlx4_en_rx_alloc *VAR_3,
        struct sk_buff *VAR_4,
        int VAR_5)
{
 struct skb_frag_struct *VAR_6 = FUNC_5(VAR_4)->frags;
 struct mlx4_en_frag_info *VAR_7;
 int VAR_8;
 dma_addr_t VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_1->num_frags; VAR_8++) {
  VAR_7 = &VAR_1->frag_info[VAR_8];
  if (VAR_5 <= VAR_7->frag_prefix_size)
   break;
  if (!VAR_3[VAR_8].page)
   goto fail;

  VAR_9 = FUNC_1(VAR_2->data[VAR_8].addr);
  FUNC_2(VAR_1->ddev, VAR_9, VAR_7->frag_size,
     VAR_0);


  FUNC_0(&VAR_6[VAR_8], VAR_3[VAR_8].page);
  FUNC_4(&VAR_6[VAR_8], VAR_7->frag_size);
  VAR_6[VAR_8].page_offset = VAR_3[VAR_8].offset;
  VAR_4->truesize += VAR_7->frag_stride;
  VAR_3[VAR_8].page = ((void*)0);
 }

 if (VAR_8 > 0)
  VAR_6[VAR_8 - 1].size = VAR_5 -
   VAR_1->frag_info[VAR_8 - 1].frag_prefix_size;
 return VAR_8;

fail:
 while (VAR_8 > 0) {
  VAR_8--;
  FUNC_3(VAR_6[VAR_8].page);
 }
 return 0;
}
