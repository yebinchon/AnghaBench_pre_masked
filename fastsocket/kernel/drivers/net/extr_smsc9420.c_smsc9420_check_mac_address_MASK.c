
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device {void** dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void**) ;
 struct smsc9420_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct smsc9420_pdata*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_1(VAR_3);


 if (FUNC_0(VAR_3->dev_addr)) {
  FUNC_4(VAR_3);
  FUNC_5(VAR_2, "MAC Address is specified by configuration");
 } else {


  u32 VAR_5 = FUNC_3(VAR_4, VAR_0);
  u32 VAR_6 = FUNC_3(VAR_4, VAR_1);
  VAR_3->dev_addr[0] = (u8)(VAR_6);
  VAR_3->dev_addr[1] = (u8)(VAR_6 >> 8);
  VAR_3->dev_addr[2] = (u8)(VAR_6 >> 16);
  VAR_3->dev_addr[3] = (u8)(VAR_6 >> 24);
  VAR_3->dev_addr[4] = (u8)(VAR_5);
  VAR_3->dev_addr[5] = (u8)(VAR_5 >> 8);

  if (FUNC_0(VAR_3->dev_addr)) {

   FUNC_5(VAR_2, "Mac Address is read from EEPROM");
  } else {

   FUNC_2(VAR_3->dev_addr);
   FUNC_4(VAR_3);
   FUNC_5(VAR_2,
    "MAC Address is set to random_ether_addr");
  }
 }
}
