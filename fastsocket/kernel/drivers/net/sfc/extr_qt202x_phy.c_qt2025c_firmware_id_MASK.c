
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qt202x_phy_data {int firmware_ver; } ;
struct efx_nic {int net_dev; struct qt202x_phy_data* phy_data; } ;
typedef int firmware_id ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,scalar_t__) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int,int,int,int,int,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_3)
{
 struct qt202x_phy_data *VAR_4 = VAR_3->phy_data;
 u8 VAR_5[9];
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < sizeof(VAR_5); VAR_6++)
  VAR_5[VAR_6] = FUNC_0(VAR_3, VAR_0,
            VAR_1 + VAR_6);
 FUNC_1(VAR_3, VAR_2, VAR_3->net_dev,
     "QT2025C firmware %xr%d v%d.%d.%d.%d [20%02d-%02d-%02d]\n",
     (VAR_5[0] << 8) | VAR_5[1], VAR_5[2],
     VAR_5[3] >> 4, VAR_5[3] & 0xf,
     VAR_5[4], VAR_5[5],
     VAR_5[6], VAR_5[7], VAR_5[8]);
 VAR_4->firmware_ver = ((VAR_5[3] & 0xf0) << 20) |
     ((VAR_5[3] & 0x0f) << 16) |
     (VAR_5[4] << 8) | VAR_5[5];
}
