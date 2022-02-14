
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int supported; int duplex; int speed; int autoneg; } ;
struct TYPE_2__ {int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_2 ;

void FUNC_2(struct phy_device *VAR_3)
{
 u32 VAR_4 = VAR_3->supported;
 int VAR_5;


 if ((VAR_4 & VAR_1) == 0)
  VAR_3->autoneg = VAR_0;

 VAR_5 = FUNC_1(FUNC_0(VAR_3->speed, VAR_3->duplex),
   VAR_4);

 VAR_3->speed = VAR_2[VAR_5].speed;
 VAR_3->duplex = VAR_2[VAR_5].duplex;
}
