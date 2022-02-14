
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {struct phy_device* phy_dev; } ;
struct phy_device {int addr; int bus; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct smsc911x_data *VAR_4)
{
 struct phy_device *VAR_5 = VAR_4->phy_dev;
 unsigned int VAR_6;
 unsigned int VAR_7 = 100000;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_5->bus);

 FUNC_1(VAR_2, "Performing PHY BCR Reset");
 FUNC_5(VAR_5->bus, VAR_5->addr, VAR_3, VAR_0);
 do {
  FUNC_3(1);
  VAR_6 = FUNC_4(VAR_5->bus, VAR_5->addr,
   VAR_3);
 } while ((VAR_7--) && (VAR_6 & VAR_0));

 if (VAR_6 & VAR_0) {
  FUNC_2(VAR_2, "PHY reset failed to complete.");
  return -VAR_1;
 }



 FUNC_3(1);

 return 0;
}
