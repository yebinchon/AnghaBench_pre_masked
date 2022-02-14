
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int name; } ;
struct gfar_private {scalar_t__ rx_ring_size; scalar_t__ tx_ring_size; scalar_t__ num_txbdfree; int txlock; int rxlock; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4, struct ethtool_ringparam *VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;

 if (VAR_5->rx_pending > VAR_1)
  return -VAR_0;

 if (!FUNC_2(VAR_5->rx_pending)) {
  FUNC_5("%s: Ring sizes must be a power of 2\n",
    VAR_4->name);
  return -VAR_0;
 }

 if (VAR_5->tx_pending > VAR_2)
  return -VAR_0;

 if (!FUNC_2(VAR_5->tx_pending)) {
  FUNC_5("%s: Ring sizes must be a power of 2\n",
    VAR_4->name);
  return -VAR_0;
 }

 if (VAR_4->flags & VAR_3) {
  unsigned long VAR_8;



  FUNC_7(&VAR_6->txlock, VAR_8);
  FUNC_6(&VAR_6->rxlock);

  FUNC_1(VAR_4);

  FUNC_8(&VAR_6->rxlock);
  FUNC_9(&VAR_6->txlock, VAR_8);

  FUNC_0(VAR_4, VAR_6->rx_ring_size);


  FUNC_11(VAR_4);
 }


 VAR_6->rx_ring_size = VAR_5->rx_pending;
 VAR_6->tx_ring_size = VAR_5->tx_pending;
 VAR_6->num_txbdfree = VAR_6->tx_ring_size;


 if (VAR_4->flags & VAR_3) {
  VAR_7 = FUNC_10(VAR_4);
  FUNC_4(VAR_4);
 }
 return VAR_7;
}
