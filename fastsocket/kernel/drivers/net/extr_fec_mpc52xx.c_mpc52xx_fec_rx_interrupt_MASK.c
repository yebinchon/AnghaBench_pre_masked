
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; int protocol; struct net_device* dev; int len; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; } ;
struct mpc52xx_fec_priv {int rx_dmatsk; } ;
struct bcom_fec_bd {void* skb_pa; void* status; } ;
struct bcom_bd {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ,int*,struct bcom_bd**) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 void* FUNC_6 (int ,int ,void*,int ) ;
 int FUNC_7 (int ,void*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,struct net_device*) ;
 struct mpc52xx_fec_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct mpc52xx_fec_priv *VAR_8 = FUNC_9(VAR_7);

 while (FUNC_0(VAR_8->rx_dmatsk)) {
  struct sk_buff *VAR_9;
  struct sk_buff *VAR_10;
  struct bcom_fec_bd *VAR_11;
  u32 VAR_12;

  VAR_10 = FUNC_2(VAR_8->rx_dmatsk, &VAR_12,
    (struct bcom_bd **)&VAR_11);
  FUNC_7(VAR_7->dev.parent, VAR_11->skb_pa, VAR_10->len,
     VAR_2);


  if (VAR_12 & VAR_0) {

   VAR_11 = (struct bcom_fec_bd *)
    FUNC_1(VAR_8->rx_dmatsk);

   VAR_11->status = VAR_3;
   VAR_11->skb_pa = FUNC_6(VAR_7->dev.parent,
     VAR_10->data,
     VAR_3, VAR_2);

   FUNC_3(VAR_8->rx_dmatsk, VAR_10);

   VAR_7->stats.rx_dropped++;

   continue;
  }



  VAR_9 = FUNC_4(VAR_3);
  if (VAR_9) {

   int VAR_13 = VAR_12 & VAR_1;

   FUNC_11(VAR_10, VAR_13 - 4);

   VAR_10->dev = VAR_7;
   VAR_10->protocol = FUNC_8(VAR_10, VAR_7);

   FUNC_10(VAR_10);
  } else {

   FUNC_5(&VAR_7->dev, "Memory squeeze, dropping packet.\n");
   VAR_7->stats.rx_dropped++;

   VAR_9 = VAR_10;
  }

  VAR_11 = (struct bcom_fec_bd *)
   FUNC_1(VAR_8->rx_dmatsk);

  VAR_11->status = VAR_3;
  VAR_11->skb_pa = FUNC_6(VAR_7->dev.parent, VAR_9->data,
    VAR_3, VAR_2);

  FUNC_3(VAR_8->rx_dmatsk, VAR_9);
 }

 return VAR_4;
}
