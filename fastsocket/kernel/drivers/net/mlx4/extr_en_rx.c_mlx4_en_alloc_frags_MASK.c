
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int _count; } ;
struct mlx4_en_rx_desc {TYPE_1__* data; } ;
struct mlx4_en_rx_alloc {scalar_t__ offset; scalar_t__ size; scalar_t__ dma; scalar_t__ page; } ;
struct mlx4_en_priv {int num_frags; int ddev; struct mlx4_en_frag_info* frag_info; } ;
struct mlx4_en_frag_info {scalar_t__ frag_stride; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_en_priv*,struct mlx4_en_rx_alloc*,struct mlx4_en_frag_info const*,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_3,
          struct mlx4_en_rx_desc *VAR_4,
          struct mlx4_en_rx_alloc *VAR_5,
          struct mlx4_en_rx_alloc *VAR_6,
          gfp_t VAR_7)
{
 struct mlx4_en_rx_alloc VAR_8[VAR_1];
 const struct mlx4_en_frag_info *VAR_9;
 struct page *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3->num_frags; VAR_12++) {
  VAR_9 = &VAR_3->frag_info[VAR_12];
  VAR_8[VAR_12] = VAR_6[VAR_12];
  VAR_8[VAR_12].offset += VAR_9->frag_stride;
  if (VAR_8[VAR_12].offset + VAR_9->frag_stride <= VAR_6[VAR_12].size)
   continue;
  if (FUNC_3(VAR_3, &VAR_8[VAR_12], VAR_9, VAR_7))
   goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_3->num_frags; VAR_12++) {
  VAR_5[VAR_12] = VAR_6[VAR_12];
  VAR_11 = VAR_6[VAR_12].dma + VAR_6[VAR_12].offset;
  VAR_6[VAR_12] = VAR_8[VAR_12];
  VAR_4->data[VAR_12].addr = FUNC_1(VAR_11);
 }

 return 0;

out:
 while (VAR_12--) {
  VAR_9 = &VAR_3->frag_info[VAR_12];
  if (VAR_8[VAR_12].page != VAR_6[VAR_12].page) {
   FUNC_2(VAR_3->ddev, VAR_8[VAR_12].dma,
    VAR_8[VAR_12].size, VAR_2);
   VAR_10 = VAR_8[VAR_12].page;
   FUNC_0(&VAR_10->_count, 1);
   FUNC_4(VAR_10);
  }
 }
 return -VAR_0;
}
