
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {struct net_device* peer; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct veth_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->peer == ((void*)0))
  return -VAR_0;

 if (VAR_3->peer->flags & VAR_1) {
  FUNC_1(VAR_2);
  FUNC_1(VAR_3->peer);
 }
 return 0;
}
