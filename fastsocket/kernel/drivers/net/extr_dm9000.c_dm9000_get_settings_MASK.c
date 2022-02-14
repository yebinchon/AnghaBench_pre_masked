
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct TYPE_3__ {int mii; } ;
typedef TYPE_1__ board_info_t ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 board_info_t *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->mii, VAR_1);
 return 0;
}
