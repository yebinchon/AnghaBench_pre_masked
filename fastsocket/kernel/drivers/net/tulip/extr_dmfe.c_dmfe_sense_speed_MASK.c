
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dmfe_board_info {int cr6_data; scalar_t__ chip_id; void* op_mode; int phy_addr; int ioaddr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static u8 FUNC_3(struct dmfe_board_info * VAR_5)
{
 u8 VAR_6 = 0;
 u16 VAR_7;


 FUNC_2( (VAR_5->cr6_data & ~0x40000), VAR_5->ioaddr);

 VAR_7 = FUNC_1(VAR_5->ioaddr, VAR_5->phy_addr, 1, VAR_5->chip_id);
 VAR_7 = FUNC_1(VAR_5->ioaddr, VAR_5->phy_addr, 1, VAR_5->chip_id);

 if ( (VAR_7 & 0x24) == 0x24 ) {
  if (VAR_5->chip_id == VAR_4)
   VAR_7 = FUNC_1(VAR_5->ioaddr,
        VAR_5->phy_addr, 7, VAR_5->chip_id) & 0xf000;
  else
   VAR_7 = FUNC_1(VAR_5->ioaddr,
        VAR_5->phy_addr, 17, VAR_5->chip_id) & 0xf000;

  switch (VAR_7) {
  case 0x1000: VAR_5->op_mode = VAR_3; break;
  case 0x2000: VAR_5->op_mode = VAR_2; break;
  case 0x4000: VAR_5->op_mode = VAR_1; break;
  case 0x8000: VAR_5->op_mode = VAR_0; break;
  default: VAR_5->op_mode = VAR_3;
   VAR_6 = 1;
   break;
  }
 } else {
  VAR_5->op_mode = VAR_3;
  FUNC_0(0, "Link Failed :", VAR_7);
  VAR_6 = 1;
 }

 return VAR_6;
}
