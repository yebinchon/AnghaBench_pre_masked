
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int sopass; int wolopts; } ;
struct TYPE_2__ {int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 VAR_3->supported = VAR_0 | VAR_1;
 VAR_3->wolopts = FUNC_1(VAR_2)->wol;
 FUNC_0(&VAR_3->sopass, 0, sizeof(VAR_3->sopass));
}
