
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct veth_priv {int ip_summed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, u32 VAR_3)
{
 struct veth_priv *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 VAR_4->ip_summed = VAR_3 ? VAR_1 : VAR_0;
 return 0;
}
