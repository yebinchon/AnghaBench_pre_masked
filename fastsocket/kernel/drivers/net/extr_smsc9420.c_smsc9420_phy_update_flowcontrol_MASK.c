
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct smsc9420_pdata {struct phy_device* phy_dev; } ;
struct phy_device {scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct smsc9420_pdata *VAR_7)
{
 struct phy_device *VAR_8 = VAR_7->phy_dev;
 u32 VAR_9;

 if (VAR_8->duplex == VAR_0) {
  u16 VAR_10 = FUNC_1(VAR_8, VAR_5);
  u16 VAR_11 = FUNC_1(VAR_8, VAR_6);
  u8 VAR_12 = FUNC_0(VAR_10, VAR_11);

  if (VAR_12 & VAR_2)
   VAR_9 = 0xFFFF0002;
  else
   VAR_9 = 0;

  FUNC_3(VAR_4, "rx pause %s, tx pause %s",
   (VAR_12 & VAR_2 ? "enabled" : "disabled"),
   (VAR_12 & VAR_3 ? "enabled" : "disabled"));
 } else {
  FUNC_3(VAR_4, "half duplex");
  VAR_9 = 0;
 }

 FUNC_2(VAR_7, VAR_1, VAR_9);
}
