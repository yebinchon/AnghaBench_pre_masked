
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {struct net_device* peer; } ;
struct net_device {int dummy; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct veth_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_1(VAR_1->peer);

 return 0;
}
