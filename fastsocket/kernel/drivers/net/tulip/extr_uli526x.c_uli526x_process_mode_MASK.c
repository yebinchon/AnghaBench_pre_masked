
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uli526x_board_info {int op_mode; int media_mode; int chip_id; int phy_addr; int ioaddr; int cr6_data; } ;


 int VAR_0 ;




 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uli526x_board_info *VAR_1)
{
 u16 VAR_2;


 if (VAR_1->op_mode & 0x4)
  VAR_1->cr6_data |= VAR_0;
 else
  VAR_1->cr6_data &= ~VAR_0;

 FUNC_2(VAR_1->cr6_data, VAR_1->ioaddr);


 if ( !(VAR_1->media_mode & 0x8)) {

  VAR_2 = FUNC_0(VAR_1->ioaddr, VAR_1->phy_addr, 6, VAR_1->chip_id);
  if ( !(VAR_2 & 0x1) ) {

   VAR_2 = 0x0;
   switch(VAR_1->op_mode) {
   case 128: VAR_2 = 0x0; break;
   case 129: VAR_2 = 0x100; break;
   case 130: VAR_2 = 0x2000; break;
   case 131: VAR_2 = 0x2100; break;
   }
   FUNC_1(VAR_1->ioaddr, VAR_1->phy_addr, 0, VAR_2, VAR_1->chip_id);
  }
 }
}
