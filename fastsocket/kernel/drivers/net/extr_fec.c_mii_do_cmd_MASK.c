
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ mii_data; int funct; } ;
typedef TYPE_1__ phy_cmd_t ;


 int FUNC_0 (struct net_device*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, const phy_cmd_t *VAR_2)
{
 if(!VAR_2)
  return;

 for (; VAR_2->mii_data != VAR_0; VAR_2++)
  FUNC_0(VAR_1, VAR_2->mii_data, VAR_2->funct);
}
