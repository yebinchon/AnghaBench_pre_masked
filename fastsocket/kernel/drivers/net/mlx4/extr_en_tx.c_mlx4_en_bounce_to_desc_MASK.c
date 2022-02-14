
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlx4_en_tx_ring {int size; struct mlx4_en_tx_desc* buf; scalar_t__ bounce_buf; } ;
struct mlx4_en_tx_desc {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static struct mlx4_en_tx_desc *FUNC_1(struct mlx4_en_priv *VAR_1,
            struct mlx4_en_tx_ring *VAR_2,
            u32 VAR_3,
            unsigned int VAR_4)
{
 u32 VAR_5 = (VAR_2->size - VAR_3) * VAR_0;
 int VAR_6;

 for (VAR_6 = VAR_4 - VAR_5 - 4; VAR_6 >= 0; VAR_6 -= 4) {
  if ((VAR_6 & (VAR_0 - 1)) == 0)
   FUNC_0();

  *((u32 *) (VAR_2->buf + VAR_6)) =
   *((u32 *) (VAR_2->bounce_buf + VAR_5 + VAR_6));
 }

 for (VAR_6 = VAR_5 - 4; VAR_6 >= 4 ; VAR_6 -= 4) {
  if ((VAR_6 & (VAR_0 - 1)) == 0)
   FUNC_0();

  *((u32 *) (VAR_2->buf + VAR_3 * VAR_0 + VAR_6)) =
   *((u32 *) (VAR_2->bounce_buf + VAR_6));
 }


 return VAR_2->buf + VAR_3 * VAR_0;
}
