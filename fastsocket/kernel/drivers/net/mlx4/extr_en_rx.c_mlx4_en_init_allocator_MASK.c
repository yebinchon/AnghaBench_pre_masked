
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _count; } ;
struct mlx4_en_rx_ring {struct mlx4_en_rx_alloc* page_alloc; } ;
struct mlx4_en_rx_alloc {struct page* page; int size; int dma; } ;
struct mlx4_en_priv {int num_frags; int ddev; struct mlx4_en_frag_info* frag_info; } ;
struct mlx4_en_frag_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_en_priv*,struct mlx4_en_rx_alloc*,struct mlx4_en_frag_info const*,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct mlx4_en_priv *VAR_3,
      struct mlx4_en_rx_ring *VAR_4)
{
 int VAR_5;
 struct mlx4_en_rx_alloc *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_frags; VAR_5++) {
  const struct mlx4_en_frag_info *VAR_7 = &VAR_3->frag_info[VAR_5];

  if (FUNC_2(VAR_3, &VAR_4->page_alloc[VAR_5],
         VAR_7, VAR_1))
   goto out;
 }
 return 0;

out:
 while (VAR_5--) {
  struct page *VAR_8;

  VAR_6 = &VAR_4->page_alloc[VAR_5];
  FUNC_1(VAR_3->ddev, VAR_6->dma,
          VAR_6->size, VAR_2);
  VAR_8 = VAR_6->page;
  FUNC_0(&VAR_8->_count, 1);
  FUNC_3(VAR_8);
  VAR_6->page = ((void*)0);
 }
 return -VAR_0;
}
