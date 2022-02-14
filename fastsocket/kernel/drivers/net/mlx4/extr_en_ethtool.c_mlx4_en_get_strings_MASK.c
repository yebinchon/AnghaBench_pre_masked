
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int stats_bitmap; int tx_ring_num; int rx_ring_num; TYPE_3__* mdev; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8,
    uint32_t VAR_9, uint8_t *VAR_10)
{
 struct mlx4_en_priv *VAR_11 = FUNC_0(VAR_8);
 int VAR_12 = 0;
 int VAR_13;

 switch (VAR_9) {
 case 128:
  for (VAR_13 = 0; VAR_13 < VAR_2 - 2; VAR_13++)
   FUNC_2(VAR_10 + VAR_13 * VAR_0, VAR_7[VAR_13]);
  if (VAR_11->mdev->dev->caps.flags & VAR_1)
   for (; VAR_13 < VAR_2; VAR_13++)
    FUNC_2(VAR_10 + VAR_13 * VAR_0, VAR_7[VAR_13]);
  break;

 case 129:

  if (!VAR_11->stats_bitmap) {
   for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
    FUNC_2(VAR_10 + (VAR_12++) * VAR_0,
     VAR_6[VAR_13]);
   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
    FUNC_2(VAR_10 + (VAR_12++) * VAR_0,
     VAR_6[VAR_13 +
     VAR_3]);
   for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
    FUNC_2(VAR_10 + (VAR_12++) * VAR_0,
     VAR_6[VAR_13 +
     VAR_3 +
     VAR_5]);
  } else
   for (VAR_13 = 0; VAR_13 < VAR_3 + VAR_5; VAR_13++) {
    if ((VAR_11->stats_bitmap >> VAR_13) & 1) {
     FUNC_2(VAR_10 +
            (VAR_12++) * VAR_0,
            VAR_6[VAR_13]);
    }
    if (!(VAR_11->stats_bitmap >> VAR_13))
     break;
   }
  for (VAR_13 = 0; VAR_13 < VAR_11->tx_ring_num; VAR_13++) {
   FUNC_1(VAR_10 + (VAR_12++) * VAR_0,
    "tx%d_packets", VAR_13);
   FUNC_1(VAR_10 + (VAR_12++) * VAR_0,
    "tx%d_bytes", VAR_13);
  }
  for (VAR_13 = 0; VAR_13 < VAR_11->rx_ring_num; VAR_13++) {
   FUNC_1(VAR_10 + (VAR_12++) * VAR_0,
    "rx%d_packets", VAR_13);
   FUNC_1(VAR_10 + (VAR_12++) * VAR_0,
    "rx%d_bytes", VAR_13);
  }
  break;
 }
}
