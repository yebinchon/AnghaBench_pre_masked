
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct b44 {int lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct b44* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct b44 *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(&VAR_4->lock);
 if (VAR_3->wolopts & VAR_1)
  VAR_4->flags |= VAR_0;
 else
  VAR_4->flags &= ~VAR_0;
 FUNC_2(&VAR_4->lock);

 return 0;
}
