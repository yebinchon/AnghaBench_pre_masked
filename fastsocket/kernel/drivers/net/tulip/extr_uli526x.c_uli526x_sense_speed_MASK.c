
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uli526x_board_info {void* op_mode; int chip_id; int phy_addr; int ioaddr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static u8 FUNC_2(struct uli526x_board_info * VAR_4)
{
 u8 VAR_5 = 0;
 u16 VAR_6;

 VAR_6 = FUNC_1(VAR_4->ioaddr, VAR_4->phy_addr, 1, VAR_4->chip_id);
 VAR_6 = FUNC_1(VAR_4->ioaddr, VAR_4->phy_addr, 1, VAR_4->chip_id);

 if ( (VAR_6 & 0x24) == 0x24 ) {

  VAR_6 = ((FUNC_1(VAR_4->ioaddr, VAR_4->phy_addr, 5, VAR_4->chip_id) & 0x01e0)<<7);
  if(VAR_6&0x8000)
   VAR_6 = 0x8000;
  else if(VAR_6&0x4000)
   VAR_6 = 0x4000;
  else if(VAR_6&0x2000)
   VAR_6 = 0x2000;
  else
   VAR_6 = 0x1000;


  switch (VAR_6) {
  case 0x1000: VAR_4->op_mode = VAR_3; break;
  case 0x2000: VAR_4->op_mode = VAR_2; break;
  case 0x4000: VAR_4->op_mode = VAR_1; break;
  case 0x8000: VAR_4->op_mode = VAR_0; break;
  default: VAR_4->op_mode = VAR_3; VAR_5 = 1; break;
  }
 } else {
  VAR_4->op_mode = VAR_3;
  FUNC_0(0, "Link Failed :", VAR_6);
  VAR_5 = 1;
 }

 return VAR_5;
}
