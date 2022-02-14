
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {struct mlx4_en_rx_alloc* page_alloc; } ;
struct mlx4_en_rx_alloc {scalar_t__ size; scalar_t__ offset; int * page; int dma; } ;
struct mlx4_en_priv {int num_frags; int ddev; struct mlx4_en_frag_info* frag_info; } ;
struct mlx4_en_frag_info {scalar_t__ frag_stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx4_en_priv *VAR_2,
          struct mlx4_en_rx_ring *VAR_3)
{
 struct mlx4_en_rx_alloc *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_frags; VAR_5++) {
  const struct mlx4_en_frag_info *VAR_6 = &VAR_2->frag_info[VAR_5];

  VAR_4 = &VAR_3->page_alloc[VAR_5];
  FUNC_1(VAR_0, VAR_2, "Freeing allocator:%d count:%d\n",
         VAR_5, FUNC_2(VAR_4->page));

  FUNC_0(VAR_2->ddev, VAR_4->dma,
    VAR_4->size, VAR_1);
  while (VAR_4->offset + VAR_6->frag_stride < VAR_4->size) {
   FUNC_3(VAR_4->page);
   VAR_4->offset += VAR_6->frag_stride;
  }
  VAR_4->page = ((void*)0);
 }
}
