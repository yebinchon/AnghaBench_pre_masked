
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct smsc911x_data {int mac_lock; struct phy_device* phy_dev; } ;
struct phy_device {scalar_t__ duplex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct smsc911x_data*,int ,int) ;
 int FUNC_4 (struct smsc911x_data*,int ) ;
 int FUNC_5 (struct smsc911x_data*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct smsc911x_data *VAR_8)
{
 struct phy_device *VAR_9 = VAR_8->phy_dev;
 u32 VAR_10 = FUNC_4(VAR_8, VAR_0);
 u32 VAR_11;
 unsigned long VAR_12;

 if (VAR_9->duplex == VAR_1) {
  u16 VAR_13 = FUNC_2(VAR_9, VAR_6);
  u16 VAR_14 = FUNC_2(VAR_9, VAR_7);
  u8 VAR_15 = FUNC_1(VAR_13, VAR_14);

  if (VAR_15 & VAR_3)
   VAR_11 = 0xFFFF0002;
  else
   VAR_11 = 0;

  if (VAR_15 & VAR_4)
   VAR_10 |= 0xF;
  else
   VAR_10 &= ~0xF;

  FUNC_0(VAR_5, "rx pause %s, tx pause %s",
   (VAR_15 & VAR_3 ? "enabled" : "disabled"),
   (VAR_15 & VAR_4 ? "enabled" : "disabled"));
 } else {
  FUNC_0(VAR_5, "half duplex");
  VAR_11 = 0;
  VAR_10 |= 0xF;
 }

 FUNC_6(&VAR_8->mac_lock, VAR_12);
 FUNC_3(VAR_8, VAR_2, VAR_11);
 FUNC_7(&VAR_8->mac_lock, VAR_12);

 FUNC_5(VAR_8, VAR_0, VAR_10);
}
