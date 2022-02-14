
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mtt_table; } ;
struct mlx4_priv {TYPE_1__ mr_table; } ;
struct mlx4_mtt {scalar_t__ offset; } ;
struct mlx4_dev {TYPE_2__* pdev; } ;
typedef int dma_addr_t ;
typedef int __be64 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int * FUNC_4 (int *,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct mlx4_dev *VAR_3, struct mlx4_mtt *VAR_4,
    int VAR_5, int VAR_6, u64 *VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_3(VAR_3);
 __be64 *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_8->mr_table.mtt_table, VAR_4->offset +
          VAR_5, &VAR_10);

 if (!VAR_9)
  return -VAR_1;

 FUNC_1(&VAR_3->pdev->dev, VAR_10,
    VAR_6 * sizeof (u64), VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11)
  VAR_9[VAR_11] = FUNC_0(VAR_7[VAR_11] | VAR_2);

 FUNC_2(&VAR_3->pdev->dev, VAR_10,
       VAR_6 * sizeof (u64), VAR_0);

 return 0;
}
