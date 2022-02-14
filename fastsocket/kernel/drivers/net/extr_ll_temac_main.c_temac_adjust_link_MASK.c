
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {int last_link; int indirect_mutex; struct phy_device* phy_dev; } ;
struct phy_device {int speed; int duplex; int link; } ;
struct net_device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct temac_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct temac_local*,int ) ;
 int FUNC_5 (struct temac_local*,int ,int ) ;

void FUNC_6(struct net_device *VAR_5)
{
 struct temac_local *VAR_6 = FUNC_2(VAR_5);
 struct phy_device *VAR_7 = VAR_6->phy_dev;
 u32 VAR_8;
 int VAR_9;


 VAR_9 = VAR_7->speed | (VAR_7->duplex << 1) | VAR_7->link;

 FUNC_0(&VAR_6->indirect_mutex);
 if (VAR_6->last_link != VAR_9) {
  VAR_8 = FUNC_4(VAR_6, VAR_4);
  VAR_8 &= ~VAR_3;

  switch (VAR_7->speed) {
  case 128: VAR_8 |= VAR_2; break;
  case 129: VAR_8 |= VAR_1; break;
  case 130: VAR_8 |= VAR_0; break;
  }


  FUNC_5(VAR_6, VAR_4, VAR_8);
  VAR_6->last_link = VAR_9;
  FUNC_3(VAR_7);
 }
 FUNC_1(&VAR_6->indirect_mutex);
}
