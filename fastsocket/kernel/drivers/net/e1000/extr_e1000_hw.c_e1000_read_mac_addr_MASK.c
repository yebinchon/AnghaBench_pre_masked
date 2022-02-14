
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct e1000_hw {int* perm_mac_addr; int mac_type; int* mac_addr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int,int,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

s32 FUNC_3(struct e1000_hw *VAR_5)
{
 u16 VAR_6;
 u16 VAR_7, VAR_8;

 FUNC_1("e1000_read_mac_addr");

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 += 2) {
  VAR_6 = VAR_8 >> 1;
  if (FUNC_0(VAR_5, VAR_6, 1, &VAR_7) < 0) {
   FUNC_1("EEPROM Read Error\n");
   return -VAR_0;
  }
  VAR_5->perm_mac_addr[VAR_8] = (u8) (VAR_7 & 0x00FF);
  VAR_5->perm_mac_addr[VAR_8 + 1] = (u8) (VAR_7 >> 8);
 }

 switch (VAR_5->mac_type) {
 default:
  break;
 case 129:
 case 128:
  if (FUNC_2(VAR_4) & VAR_1)
   VAR_5->perm_mac_addr[5] ^= 0x01;
  break;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_5->mac_addr[VAR_8] = VAR_5->perm_mac_addr[VAR_8];
 return VAR_2;
}
