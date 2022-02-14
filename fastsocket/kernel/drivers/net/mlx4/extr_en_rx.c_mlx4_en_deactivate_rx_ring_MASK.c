
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {scalar_t__ stride; int buf; } ;
struct mlx4_en_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;

void FUNC_2(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_rx_ring *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);
 if (VAR_2->stride <= VAR_0)
  VAR_2->buf -= VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
