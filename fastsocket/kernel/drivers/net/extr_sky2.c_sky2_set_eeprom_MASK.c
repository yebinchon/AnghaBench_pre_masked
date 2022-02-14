
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sky2_port {TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; int offset; int len; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int *,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct ethtool_eeprom *VAR_4,
      u8 *VAR_5)
{
 struct sky2_port *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_1(VAR_6->hw->pdev, VAR_1);

 if (!VAR_7)
  return -VAR_0;

 if (VAR_4->magic != VAR_2)
  return -VAR_0;


 if ((VAR_4->offset & 3) || (VAR_4->len & 3))
  return -VAR_0;

 return FUNC_2(VAR_6->hw, VAR_7, VAR_5, VAR_4->offset, VAR_4->len);
}
