
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ipoib_dev_priv {int mcast_mtu; int admin_mtu; int max_ib_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_4 (int,int) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_5(VAR_1);


 if (FUNC_1(VAR_1)) {
  if (VAR_2 > FUNC_2(VAR_1))
   return -VAR_0;

  if (VAR_2 > VAR_3->mcast_mtu)
   FUNC_3(VAR_3, "mtu > %d will cause multicast packet drops.\n",
       VAR_3->mcast_mtu);

  VAR_1->mtu = VAR_2;
  return 0;
 }

 if (VAR_2 > FUNC_0(VAR_3->max_ib_mtu))
  return -VAR_0;

 VAR_3->admin_mtu = VAR_2;

 VAR_1->mtu = FUNC_4(VAR_3->mcast_mtu, VAR_3->admin_mtu);

 return 0;
}
