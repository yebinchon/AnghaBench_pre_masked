
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int features; int mtu; int dev_addr; } ;
struct TYPE_3__ {int send_flags; } ;
struct ipoib_dev_priv {int hca_caps; int mcast_mtu; TYPE_2__* dev; int flags; TYPE_1__ tx_wr; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*) ;
 int FUNC_5 (int ,int ) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct net_device *VAR_9, const char *VAR_10)
{
 struct ipoib_dev_priv *VAR_11 = FUNC_6(VAR_9);


 if (FUNC_0(VAR_9->dev_addr) && !FUNC_10(VAR_10, "connected\n")) {
  FUNC_9(VAR_3, &VAR_11->flags);
  FUNC_4(VAR_11, "enabling connected mode "
      "will cause multicast packet drops\n");

  VAR_9->features &= ~(VAR_6 | VAR_7 | VAR_8);
  FUNC_8();
  VAR_11->tx_wr.send_flags &= ~VAR_2;

  FUNC_3(VAR_9);
  FUNC_7();
  return 0;
 }

 if (!FUNC_10(VAR_10, "datagram\n")) {
  FUNC_1(VAR_3, &VAR_11->flags);

  if (FUNC_11(VAR_4, &VAR_11->flags)) {
   VAR_9->features |= VAR_6 | VAR_7;
   VAR_11->dev->features |= VAR_5;
   if (VAR_11->hca_caps & VAR_1)
    VAR_9->features |= VAR_8;
  }
  FUNC_2(VAR_9, FUNC_5(VAR_11->mcast_mtu, VAR_9->mtu));
  FUNC_8();
  FUNC_3(VAR_9);
  FUNC_7();
  return 0;
 }

 return -VAR_0;
}
