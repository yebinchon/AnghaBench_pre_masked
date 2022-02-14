
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct mlx4_en_priv {int num_frags; int rx_skb_size; TYPE_1__* frag_info; int log_rx_info; } ;
struct TYPE_2__ {int frag_size; int frag_prefix_size; int frag_align; void* frag_stride; } ;


 void* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,struct mlx4_en_priv*,char*,int,int) ;
 int FUNC_3 (struct mlx4_en_priv*,char*,int,int,int,int,void*) ;
 int* VAR_6 ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_4(VAR_7);
 int VAR_9 = VAR_7->mtu + VAR_1 + VAR_5 + VAR_2;
 int VAR_10 = 0;
 int VAR_11 = 0;

 while (VAR_10 < VAR_9) {
  VAR_8->frag_info[VAR_11].frag_size =
   (VAR_9 > VAR_10 + VAR_6[VAR_11]) ?
    VAR_6[VAR_11] : VAR_9 - VAR_10;
  VAR_8->frag_info[VAR_11].frag_prefix_size = VAR_10;
  if (!VAR_11) {
   VAR_8->frag_info[VAR_11].frag_align = VAR_3;
   VAR_8->frag_info[VAR_11].frag_stride =
    FUNC_0(VAR_6[VAR_11] + VAR_3, VAR_4);
  } else {
   VAR_8->frag_info[VAR_11].frag_align = 0;
   VAR_8->frag_info[VAR_11].frag_stride =
    FUNC_0(VAR_6[VAR_11], VAR_4);
  }
  VAR_10 += VAR_8->frag_info[VAR_11].frag_size;
  VAR_11++;
 }

 VAR_8->num_frags = VAR_11;
 VAR_8->rx_skb_size = VAR_9;
 VAR_8->log_rx_info = FUNC_1(VAR_11 * sizeof(struct mlx4_en_rx_alloc));

 FUNC_2(VAR_0, VAR_8, "Rx buffer scatter-list (effective-mtu:%d "
    "num_frags:%d):\n", VAR_9, VAR_8->num_frags);
 for (VAR_11 = 0; VAR_11 < VAR_8->num_frags; VAR_11++) {
  FUNC_3(VAR_8,
         "  frag:%d - size:%d prefix:%d align:%d stride:%d\n",
         VAR_11,
         VAR_8->frag_info[VAR_11].frag_size,
         VAR_8->frag_info[VAR_11].frag_prefix_size,
         VAR_8->frag_info[VAR_11].frag_align,
         VAR_8->frag_info[VAR_11].frag_stride);
 }
}
