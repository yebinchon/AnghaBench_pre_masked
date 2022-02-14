
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dmfe_board_info {int cr6_data; int media_mode; int PHY_reg4; int chip_id; int phy_addr; int ioaddr; scalar_t__ chip_type; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct dmfe_board_info *VAR_3)
{
 u16 VAR_4;


 VAR_3->cr6_data &= ~0x40000;
 FUNC_2(VAR_3->cr6_data, VAR_3->ioaddr);


 if (VAR_3->chip_id == VAR_1) {
  VAR_4 = FUNC_0(VAR_3->ioaddr,
       VAR_3->phy_addr, 18, VAR_3->chip_id) & ~0x1000;

  FUNC_1(VAR_3->ioaddr,
     VAR_3->phy_addr, 18, VAR_4, VAR_3->chip_id);
 }


 VAR_4 = FUNC_0(VAR_3->ioaddr, VAR_3->phy_addr, 4, VAR_3->chip_id) & ~0x01e0;

 if (VAR_3->media_mode & VAR_0) {

  VAR_4 |= VAR_3->PHY_reg4;
 } else {

  switch(VAR_3->media_mode) {
  case 128: VAR_4 |= 0x20; break;
  case 129: VAR_4 |= 0x40; break;
  case 130: VAR_4 |= 0x80; break;
  case 131: VAR_4 |= 0x100; break;
  }
  if (VAR_3->chip_id == VAR_1) VAR_4 &= 0x61;
 }


 if ( !(VAR_4 & 0x01e0)) {
  VAR_4|=VAR_3->PHY_reg4;
  VAR_3->media_mode|=VAR_0;
 }
 FUNC_1(VAR_3->ioaddr, VAR_3->phy_addr, 4, VAR_4, VAR_3->chip_id);


 if ( VAR_3->chip_type && (VAR_3->chip_id == VAR_2) )
  FUNC_1(VAR_3->ioaddr, VAR_3->phy_addr, 0, 0x1800, VAR_3->chip_id);
 if ( !VAR_3->chip_type )
  FUNC_1(VAR_3->ioaddr, VAR_3->phy_addr, 0, 0x1200, VAR_3->chip_id);
}
