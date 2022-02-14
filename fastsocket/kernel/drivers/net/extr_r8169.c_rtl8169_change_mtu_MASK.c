
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {size_t mac_version; } ;
struct net_device {int mtu; int features; } ;
struct TYPE_2__ {int jumbo_max; int jumbo_tx_csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10, int VAR_11)
{
 struct rtl8169_private *VAR_12 = FUNC_0(VAR_10);

 if (VAR_11 < VAR_2 ||
     VAR_11 > VAR_9[VAR_12->mac_version].jumbo_max)
  return -VAR_0;

 if (VAR_11 > VAR_1)
  FUNC_2(VAR_12);
 else
  FUNC_1(VAR_12);

 VAR_10->mtu = VAR_11;

 if (VAR_10->mtu > VAR_8)
  VAR_10->features &= ~(VAR_5 | VAR_6 |
       VAR_7);

 if (VAR_10->mtu > VAR_3 &&
     !VAR_9[VAR_12->mac_version].jumbo_tx_csum)
  VAR_10->features &= ~VAR_4;

 return 0;
}
