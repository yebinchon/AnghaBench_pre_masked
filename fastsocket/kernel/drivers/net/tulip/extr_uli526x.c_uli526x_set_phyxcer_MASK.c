
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uli526x_board_info {int media_mode; int PHY_reg4; int chip_id; int phy_addr; int ioaddr; } ;






 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct uli526x_board_info *VAR_1)
{
 u16 VAR_2;


 VAR_2 = FUNC_0(VAR_1->ioaddr, VAR_1->phy_addr, 4, VAR_1->chip_id) & ~0x01e0;

 if (VAR_1->media_mode & VAR_0) {

  VAR_2 |= VAR_1->PHY_reg4;
 } else {

  switch(VAR_1->media_mode) {
  case 128: VAR_2 |= 0x20; break;
  case 129: VAR_2 |= 0x40; break;
  case 130: VAR_2 |= 0x80; break;
  case 131: VAR_2 |= 0x100; break;
  }

 }


 if ( !(VAR_2 & 0x01e0)) {
  VAR_2|=VAR_1->PHY_reg4;
  VAR_1->media_mode|=VAR_0;
 }
 FUNC_1(VAR_1->ioaddr, VAR_1->phy_addr, 4, VAR_2, VAR_1->chip_id);


 FUNC_1(VAR_1->ioaddr, VAR_1->phy_addr, 0, 0x1200, VAR_1->chip_id);
 FUNC_2(50);
}
