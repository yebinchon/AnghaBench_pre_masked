
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {scalar_t__ last_duplex; int last_carrier; struct phy_device* phy_dev; } ;
struct phy_device {scalar_t__ duplex; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct smsc9420_pdata*) ;
 int FUNC_3 (struct smsc9420_pdata*,int ) ;
 int FUNC_4 (struct smsc9420_pdata*,int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_0(VAR_3);
 struct phy_device *VAR_5 = VAR_4->phy_dev;
 int VAR_6;

 if (VAR_5->duplex != VAR_4->last_duplex) {
  u32 VAR_7 = FUNC_3(VAR_4, VAR_1);
  if (VAR_5->duplex) {
   FUNC_5(VAR_0, "full duplex mode");
   VAR_7 |= VAR_2;
  } else {
   FUNC_5(VAR_0, "half duplex mode");
   VAR_7 &= ~VAR_2;
  }
  FUNC_4(VAR_4, VAR_1, VAR_7);

  FUNC_2(VAR_4);
  VAR_4->last_duplex = VAR_5->duplex;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 != VAR_4->last_carrier) {
  if (VAR_6)
   FUNC_5(VAR_0, "carrier OK");
  else
   FUNC_5(VAR_0, "no carrier");
  VAR_4->last_carrier = VAR_6;
 }
}
