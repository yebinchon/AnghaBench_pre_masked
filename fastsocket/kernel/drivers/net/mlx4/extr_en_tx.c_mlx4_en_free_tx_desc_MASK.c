
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct skb_frag_struct {int size; } ;
struct sk_buff {int dummy; } ;
struct mlx4_wqe_data_seg {int addr; int byte_count; } ;
struct mlx4_en_tx_ring {int buf_size; struct mlx4_en_tx_desc* buf; struct mlx4_en_tx_info* tx_info; } ;
struct mlx4_en_tx_info {int data_offset; int nr_txbb; scalar_t__ linear; int inl; struct sk_buff* skb; } ;
struct mlx4_en_tx_desc {int dummy; } ;
struct mlx4_en_priv {int ddev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct mlx4_en_dev*,struct skb_shared_hwtstamps*,int ) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static u32 FUNC_9(struct mlx4_en_priv *VAR_2,
    struct mlx4_en_tx_ring *VAR_3,
    int VAR_4, u8 VAR_5, u64 VAR_6)
{
 struct mlx4_en_dev *VAR_7 = VAR_2->mdev;
 struct mlx4_en_tx_info *VAR_8 = &VAR_3->tx_info[VAR_4];
 struct mlx4_en_tx_desc *VAR_9 = VAR_3->buf + VAR_4 * VAR_1;
 struct mlx4_wqe_data_seg *VAR_10 = (void *) VAR_9 + VAR_8->data_offset;
 struct sk_buff *VAR_11 = VAR_8->skb;
 struct skb_frag_struct *VAR_12;
 void *VAR_13 = VAR_3->buf + VAR_3->buf_size;
 int VAR_14 = FUNC_7(VAR_11)->nr_frags;
 int VAR_15;
 struct skb_shared_hwtstamps VAR_16;

 if (VAR_6) {
  FUNC_6(VAR_7, &VAR_16, VAR_6);
  FUNC_8(VAR_11, &VAR_16);
 }


 if (FUNC_5((void *) VAR_9 + VAR_8->nr_txbb * VAR_1 <= VAR_13)) {
  if (!VAR_8->inl) {
   if (VAR_8->linear) {
    FUNC_4(VAR_2->ddev,
     (dma_addr_t) FUNC_1(VAR_10->addr),
      FUNC_0(VAR_10->byte_count),
      VAR_0);
    ++VAR_10;
   }

   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
    VAR_12 = &FUNC_7(VAR_11)->frags[VAR_15];
    FUNC_3(VAR_2->ddev,
     (dma_addr_t) FUNC_1(VAR_10[VAR_15].addr),
     VAR_12->size, VAR_0);
   }
  }
 } else {
  if (!VAR_8->inl) {
   if ((void *) VAR_10 >= VAR_13) {
    VAR_10 = (struct mlx4_wqe_data_seg *)
      (VAR_3->buf + ((void *) VAR_10 - VAR_13));
   }

   if (VAR_8->linear) {
    FUNC_4(VAR_2->ddev,
     (dma_addr_t) FUNC_1(VAR_10->addr),
      FUNC_0(VAR_10->byte_count),
      VAR_0);
    ++VAR_10;
   }

   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {

    if ((void *) VAR_10 >= VAR_13)
     VAR_10 = (struct mlx4_wqe_data_seg *) VAR_3->buf;
    VAR_12 = &FUNC_7(VAR_11)->frags[VAR_15];
    FUNC_3(VAR_2->ddev,
     (dma_addr_t) FUNC_1(VAR_10->addr),
      VAR_12->size, VAR_0);
    ++VAR_10;
   }
  }
 }
 FUNC_2(VAR_11);
 return VAR_8->nr_txbb;
}
