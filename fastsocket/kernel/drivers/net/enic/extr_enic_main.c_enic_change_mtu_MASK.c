
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct enic {scalar_t__ port_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct enic*) ;
 scalar_t__ FUNC_1 (struct enic*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct enic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5)
{
 struct enic *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = FUNC_6(VAR_4);

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
  return -VAR_0;

 if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
  return -VAR_3;

 if (VAR_7)
  FUNC_3(VAR_4);

 VAR_4->mtu = VAR_5;

 if (VAR_4->mtu > VAR_6->port_mtu)
  FUNC_5(VAR_4,
   "interface MTU (%d) set higher than port MTU (%d)\n",
   VAR_4->mtu, VAR_6->port_mtu);

 if (VAR_7)
  FUNC_2(VAR_4);

 return 0;
}
