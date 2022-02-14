
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {int stride; int page_alloc; struct mlx4_en_rx_alloc* rx_info; struct mlx4_en_rx_desc* buf; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct mlx4_en_priv {int log_rx_info; } ;
typedef int gfp_t ;


 int FUNC_0 (struct mlx4_en_priv*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_alloc*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_0,
       struct mlx4_en_rx_ring *VAR_1, int VAR_2,
       gfp_t VAR_3)
{
 struct mlx4_en_rx_desc *VAR_4 = VAR_1->buf + (VAR_2 * VAR_1->stride);
 struct mlx4_en_rx_alloc *VAR_5 = VAR_1->rx_info +
     (VAR_2 << VAR_0->log_rx_info);

 return FUNC_0(VAR_0, VAR_4, VAR_5, VAR_1->page_alloc, VAR_3);
}
