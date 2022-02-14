
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct libipw_txb {int payload_size; } ;
struct ipw_priv {int lock; int prom_net_dev; } ;
typedef scalar_t__ netdev_tx_t ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*,struct libipw_txb*) ;
 scalar_t__ FUNC_3 (struct ipw_priv*,struct libipw_txb*,int) ;
 struct ipw_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct libipw_txb *VAR_2,
        struct net_device *VAR_3, int VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6;
 netdev_tx_t VAR_7;

 FUNC_0("dev->xmit(%d bytes)\n", VAR_2->payload_size);
 FUNC_6(&VAR_5->lock, VAR_6);






 VAR_7 = FUNC_3(VAR_5, VAR_2, VAR_4);
 if (VAR_7 == VAR_0)
  FUNC_1(VAR_5);
 FUNC_7(&VAR_5->lock, VAR_6);

 return VAR_7;
}
