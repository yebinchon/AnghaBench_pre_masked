
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_tx_ring {scalar_t__ prod; scalar_t__ cons; scalar_t__ last_nr_txbb; } ;
struct mlx4_en_priv {int tx_ring_num; struct mlx4_en_dev* mdev; struct mlx4_en_tx_ring* tx_ring; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_2 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_3 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_4 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

void FUNC_11(struct net_device *VAR_4, u32 *VAR_5, u64 *VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_7(VAR_4);
 struct mlx4_en_dev *VAR_8 = VAR_7->mdev;
 struct mlx4_en_tx_ring *VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(VAR_6, 0, sizeof(u64) * VAR_3);

 if (*VAR_5 & VAR_1) {

  VAR_11 = FUNC_9(VAR_4);

  FUNC_8(VAR_4);
retry_tx:



  FUNC_6(200);
  for (VAR_10 = 0; VAR_10 < VAR_7->tx_ring_num && VAR_11; VAR_10++) {
   VAR_9 = &VAR_7->tx_ring[VAR_10];
   if (VAR_9->prod != (VAR_9->cons + VAR_9->last_nr_txbb))
    goto retry_tx;
  }

  if (VAR_7->mdev->dev->caps.flags &
     VAR_2) {
   VAR_6[3] = FUNC_3(VAR_7);
   VAR_6[4] = FUNC_2(VAR_7);
  }

  if (VAR_11)
   FUNC_10(VAR_4);

 }
 VAR_6[0] = FUNC_5(VAR_8->dev);
 VAR_6[1] = FUNC_1(VAR_7);
 VAR_6[2] = FUNC_4(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_6[VAR_10])
   *VAR_5 |= VAR_0;
 }
}
