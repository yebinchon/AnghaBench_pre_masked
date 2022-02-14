
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct amd8111e_priv {int options; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct amd8111e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct amd8111e_priv *VAR_8 = FUNC_0(VAR_6);
 if (VAR_7->wolopts & ~(VAR_4|VAR_5))
  return -VAR_0;
 FUNC_1(&VAR_8->lock);
 if (VAR_7->wolopts & VAR_4)
  VAR_8->options |=
   (VAR_3 | VAR_1);
 else if(VAR_7->wolopts & VAR_5)
  VAR_8->options |=
   (VAR_3 | VAR_2);
 else
  VAR_8->options &= ~VAR_3;
 FUNC_2(&VAR_8->lock);
 return 0;
}
