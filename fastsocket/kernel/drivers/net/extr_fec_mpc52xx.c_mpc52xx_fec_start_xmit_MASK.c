
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; int trans_start; } ;
struct mpc52xx_fec_priv {int lock; int tx_dmatsk; } ;
struct bcom_fec_bd {int status; int skb_pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 struct mpc52xx_fec_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct mpc52xx_fec_priv *VAR_8 = FUNC_6(VAR_7);
 struct bcom_fec_bd *VAR_9;
 unsigned long VAR_10;

 if (FUNC_1(VAR_8->tx_dmatsk)) {
  if (FUNC_5())
   FUNC_3(&VAR_7->dev, "transmit queue overrun\n");
  return VAR_3;
 }

 FUNC_8(&VAR_8->lock, VAR_10);
 VAR_7->trans_start = VAR_5;

 VAR_9 = (struct bcom_fec_bd *)
  FUNC_0(VAR_8->tx_dmatsk);

 VAR_9->status = VAR_6->len | VAR_1 | VAR_0;
 VAR_9->skb_pa = FUNC_4(VAR_7->dev.parent, VAR_6->data, VAR_6->len,
        VAR_2);

 FUNC_2(VAR_8->tx_dmatsk, VAR_6);

 if (FUNC_1(VAR_8->tx_dmatsk)) {
  FUNC_7(VAR_7);
 }

 FUNC_9(&VAR_8->lock, VAR_10);

 return VAR_4;
}
