
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qt202x_phy_data {int firmware_ver; } ;
struct falcon_board {scalar_t__ major; int minor; } ;
struct efx_nic {scalar_t__ loopback_mode; int net_dev; struct qt202x_phy_data* phy_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int,int) ;
 int FUNC_1 (struct efx_nic*,int,int ,int,int) ;
 int FUNC_2 (struct efx_nic*,int,int,int) ;
 struct falcon_board* FUNC_3 (struct efx_nic*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_9(struct efx_nic *VAR_4)
{
 struct qt202x_phy_data *VAR_5 = VAR_4->phy_data;
 struct falcon_board *VAR_6 = FUNC_3(VAR_4);
 int VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10;




 if (VAR_5->firmware_ver < 0x02000100)
  return 0;





 VAR_10 = (VAR_4->loopback_mode == VAR_0) ? 0x0038 : 0x0020;


 VAR_7 = FUNC_0(VAR_4, 1, 0xc319);
 if ((VAR_7 & 0x0038) == VAR_10)
  return 0;
 FUNC_5(VAR_4, VAR_3, VAR_4->net_dev, "Switching PHY to mode 0x%04x\n",
    VAR_10);





 FUNC_2(VAR_4, 1, 0xc300, 0x0000);




 if (VAR_6->major == 0 && VAR_6->minor < 2) {
  FUNC_2(VAR_4, 1, 0xc303, 0x4498);
  for (VAR_9 = 0; VAR_9 < 9; VAR_9++) {
   FUNC_2(VAR_4, 1, 0xc303, 0x4488);
   FUNC_2(VAR_4, 1, 0xc303, 0x4480);
   FUNC_2(VAR_4, 1, 0xc303, 0x4490);
   FUNC_2(VAR_4, 1, 0xc303, 0x4498);
  }
 } else {
  FUNC_2(VAR_4, 1, 0xc303, 0x0920);
  FUNC_2(VAR_4, 1, 0xd008, 0x0004);
  for (VAR_9 = 0; VAR_9 < 9; VAR_9++) {
   FUNC_2(VAR_4, 1, 0xc303, 0x0900);
   FUNC_2(VAR_4, 1, 0xd008, 0x0005);
   FUNC_2(VAR_4, 1, 0xc303, 0x0920);
   FUNC_2(VAR_4, 1, 0xd008, 0x0004);
  }
  FUNC_2(VAR_4, 1, 0xc303, 0x4900);
 }
 FUNC_2(VAR_4, 1, 0xc303, 0x4900);
 FUNC_2(VAR_4, 1, 0xc302, 0x0004);
 FUNC_2(VAR_4, 1, 0xc316, 0x0013);
 FUNC_2(VAR_4, 1, 0xc318, 0x0054);
 FUNC_2(VAR_4, 1, 0xc319, VAR_10);
 FUNC_2(VAR_4, 1, 0xc31a, 0x0098);
 FUNC_2(VAR_4, 3, 0x0026, 0x0e00);
 FUNC_2(VAR_4, 3, 0x0027, 0x0013);
 FUNC_2(VAR_4, 3, 0x0028, 0xa528);
 FUNC_2(VAR_4, 1, 0xd006, 0x000a);
 FUNC_2(VAR_4, 1, 0xd007, 0x0009);
 FUNC_2(VAR_4, 1, 0xd008, 0x0004);




 FUNC_2(VAR_4, 1, 0xc317, 0x00ff);


 FUNC_1(VAR_4, 1, VAR_1,
     1 << VAR_2, 0);
 FUNC_2(VAR_4, 1, 0xc300, 0x0002);
 FUNC_4(20);


 FUNC_7(VAR_4);


 VAR_8 = FUNC_8(VAR_4);
 if (VAR_8 < 0) {
  FUNC_6(VAR_4, VAR_3, VAR_4->net_dev,
     "PHY microcontroller reset during mode switch "
     "timed out\n");
  return VAR_8;
 }

 return 0;
}
