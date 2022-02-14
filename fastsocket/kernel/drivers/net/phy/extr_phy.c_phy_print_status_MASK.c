
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ duplex; int speed; scalar_t__ link; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(struct phy_device *VAR_1)
{
 FUNC_1("PHY: %s - Link is %s", FUNC_0(&VAR_1->dev),
   VAR_1->link ? "Up" : "Down");
 if (VAR_1->link)
  FUNC_2(" - %d/%s", VAR_1->speed,
    VAR_0 == VAR_1->duplex ?
    "Full" : "Half");

 FUNC_2("\n");
}
