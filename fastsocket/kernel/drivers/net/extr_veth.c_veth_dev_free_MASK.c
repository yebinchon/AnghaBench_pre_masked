
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {int stats; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct veth_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct veth_priv *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1->stats);
 FUNC_0(VAR_0);
}
