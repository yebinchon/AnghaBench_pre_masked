
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipg_rx {int rfs; } ;
struct ipg_nic_private {int rx_current; struct ipg_rx* rxd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct ipg_nic_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6)
{
 struct ipg_nic_private *VAR_7 = FUNC_1(VAR_6);
 struct ipg_rx *VAR_8 = VAR_7->rxd + (VAR_7->rx_current % VAR_3);
 int VAR_9 = VAR_0;

 if (FUNC_0(VAR_8->rfs) & VAR_5)
  VAR_9 += VAR_2;
 if (FUNC_0(VAR_8->rfs) & VAR_4)
  VAR_9 += VAR_1;
 return VAR_9;
}
