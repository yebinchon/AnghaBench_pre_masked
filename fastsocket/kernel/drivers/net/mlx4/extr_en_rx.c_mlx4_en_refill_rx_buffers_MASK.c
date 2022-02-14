
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_en_rx_ring {int prod; int size_mask; int cons; scalar_t__ actual_size; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_1,
         struct mlx4_en_rx_ring *VAR_2)
{
 int VAR_3 = VAR_2->prod & VAR_2->size_mask;

 while ((u32) (VAR_2->prod - VAR_2->cons) < VAR_2->actual_size) {
  if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0))
   break;
  VAR_2->prod++;
  VAR_3 = VAR_2->prod & VAR_2->size_mask;
 }
}
