
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int dummy; } ;


 int FUNC_0 (struct ethtool_wolinfo*,int ,int) ;
 int FUNC_1 (struct net_device*,struct ethtool_wolinfo*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 struct ethtool_wolinfo VAR_1;

 FUNC_0(&VAR_1, 0, sizeof VAR_1);
 (void) FUNC_1(VAR_0, &VAR_1);
}
