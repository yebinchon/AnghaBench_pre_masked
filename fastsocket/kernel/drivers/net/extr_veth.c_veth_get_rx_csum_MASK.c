
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct veth_priv {scalar_t__ ip_summed; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_1)
{
 struct veth_priv *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 return VAR_2->ip_summed == VAR_0;
}
