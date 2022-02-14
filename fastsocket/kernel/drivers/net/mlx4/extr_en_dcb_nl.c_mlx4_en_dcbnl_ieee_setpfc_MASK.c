
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; scalar_t__ rx_skb_size; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ieee_pfc {scalar_t__ pfc_en; int delay; int mbc; int pfc_cap; } ;
struct TYPE_2__ {int rx_pause; int tx_pause; scalar_t__ rx_ppp; scalar_t__ tx_ppp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int ,scalar_t__,int,scalar_t__,int,scalar_t__) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
  struct ieee_pfc *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_3(VAR_2);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 int VAR_6;

 FUNC_0(VAR_0, VAR_4, "cap: 0x%x en: 0x%x mbc: 0x%x delay: %d\n",
   VAR_3->pfc_cap,
   VAR_3->pfc_en,
   VAR_3->mbc,
   VAR_3->delay);

 VAR_4->prof->rx_pause = VAR_4->prof->tx_pause = !!VAR_3->pfc_en;
 VAR_4->prof->rx_ppp = VAR_4->prof->tx_ppp = VAR_3->pfc_en;

 VAR_6 = FUNC_2(VAR_5->dev, VAR_4->port,
        VAR_4->rx_skb_size + VAR_1,
        VAR_4->prof->tx_pause,
        VAR_4->prof->tx_ppp,
        VAR_4->prof->rx_pause,
        VAR_4->prof->rx_ppp);
 if (VAR_6)
  FUNC_1(VAR_4, "Failed setting pause params\n");

 return VAR_6;
}
