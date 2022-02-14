
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_en_rx_alloc {scalar_t__ offset; scalar_t__ size; scalar_t__ page; int dma; } ;
struct mlx4_en_priv {int ddev; struct mlx4_en_frag_info* frag_info; } ;
struct mlx4_en_frag_info {int frag_stride; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx4_en_priv *VAR_1,
         struct mlx4_en_rx_alloc *VAR_2,
         int VAR_3)
{
 const struct mlx4_en_frag_info *VAR_4 = &VAR_1->frag_info[VAR_3];
 u32 VAR_5 = VAR_2[VAR_3].offset + 2 * VAR_4->frag_stride;

 if (VAR_5 > VAR_2[VAR_3].size)
  FUNC_0(VAR_1->ddev, VAR_2[VAR_3].dma, VAR_2[VAR_3].size,
      VAR_0);

 if (VAR_2[VAR_3].page)
  FUNC_1(VAR_2[VAR_3].page);
}
