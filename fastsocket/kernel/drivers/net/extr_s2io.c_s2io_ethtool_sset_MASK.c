
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int dev; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
        struct ethtool_cmd *VAR_5)
{
 struct s2io_nic *VAR_6 = FUNC_0(VAR_4);
 if ((VAR_5->autoneg == VAR_0) ||
     (VAR_5->speed != VAR_3) ||
     (VAR_5->duplex != VAR_1))
  return -VAR_2;
 else {
  FUNC_1(VAR_6->dev);
  FUNC_2(VAR_6->dev);
 }

 return 0;
}
