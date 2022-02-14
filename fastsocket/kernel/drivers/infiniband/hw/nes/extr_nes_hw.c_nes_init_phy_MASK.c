
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct nes_device {size_t mac_index; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int* phy_type; int* phy_index; int phy_lock; } ;


 int VAR_0 ;




 int FUNC_0 (struct nes_device*,int,int) ;
 int FUNC_1 (struct nes_device*,int,int) ;
 size_t FUNC_2 (struct nes_device*,int ) ;
 int FUNC_3 (struct nes_device*,int ,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct nes_device *VAR_1)
{
 struct nes_adapter *VAR_2 = VAR_1->nesadapter;
 u32 VAR_3 = VAR_1->mac_index;
 u32 VAR_4 = 0;
 unsigned long VAR_5;
 u8 VAR_6 = VAR_2->phy_type[VAR_3];
 u8 VAR_7 = VAR_2->phy_index[VAR_3];
 int VAR_8 = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_6 == 131) {

  VAR_4 &= 0xFFFFFFE3;
  VAR_4 |= 0x04;
 } else {

  VAR_4 &= 0xFFFFFFE3;
  VAR_4 |= 0x1D;
 }
 FUNC_3(VAR_1, VAR_0, VAR_4);

 FUNC_4(&VAR_1->nesadapter->phy_lock, VAR_5);

 switch (VAR_6) {
 case 131:
  VAR_8 = FUNC_0(VAR_1, VAR_6, VAR_7);
  break;
 case 130:
 case 128:
 case 129:
  VAR_8 = FUNC_1(VAR_1, VAR_6, VAR_7);
  break;
 }

 FUNC_5(&VAR_1->nesadapter->phy_lock, VAR_5);

 return VAR_8;
}
