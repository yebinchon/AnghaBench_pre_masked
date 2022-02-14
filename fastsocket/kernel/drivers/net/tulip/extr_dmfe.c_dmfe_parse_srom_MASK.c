
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmfe_board_info {char* srom; int cr15_data; int NIC_capability; int PHY_reg4; int HPNA_command; int HPNA_present; int cr6_data; int HPNA_timer; int chip_id; int phy_addr; int ioaddr; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct dmfe_board_info*,int) ;
 int FUNC_2 (struct dmfe_board_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct dmfe_board_info * VAR_11)
{
 char * VAR_12 = VAR_11->srom;
 int VAR_13, VAR_14;

 FUNC_0(0, "dmfe_parse_srom() ", 0);


 VAR_11->cr15_data = VAR_0;


 if ( ( (int) VAR_12[18] & 0xff) == VAR_9) {


  VAR_11->NIC_capability = FUNC_3((__le16 *) (VAR_12 + 34));
  VAR_11->PHY_reg4 = 0;
  for (VAR_14 = 1; VAR_14 < 0x10; VAR_14 <<= 1) {
   switch( VAR_11->NIC_capability & VAR_14 ) {
   case 0x1: VAR_11->PHY_reg4 |= 0x0020; break;
   case 0x2: VAR_11->PHY_reg4 |= 0x0040; break;
   case 0x4: VAR_11->PHY_reg4 |= 0x0080; break;
   case 0x8: VAR_11->PHY_reg4 |= 0x0100; break;
   }
  }


  VAR_13 = (FUNC_4((__le32 *) (VAR_12 + 34)) &
        FUNC_4((__le32 *) (VAR_12 + 36)));
  switch(VAR_13) {
  case 0x4: VAR_10 = VAR_2; break;
  case 0x2: VAR_10 = VAR_3; break;
  case 0x8: VAR_10 = VAR_1; break;
  case 0x100:
  case 0x200: VAR_10 = VAR_4; break;
  }



  if ( (VAR_8 & 0x1) || (VAR_12[43] & 0x80) )
   VAR_11->cr15_data |= 0x40;


  if ( (VAR_8 & 0x2) || (VAR_12[40] & 0x1) )
   VAR_11->cr15_data |= 0x400;


  if ( (VAR_8 & 0x4) || (VAR_12[40] & 0xe) )
   VAR_11->cr15_data |= 0x9800;
 }


 VAR_11->HPNA_command = 1;


 if (VAR_6 == 0)
  VAR_11->HPNA_command |= 0x8000;


 if (VAR_7 == 1)
  switch(VAR_5) {
  case 0: VAR_11->HPNA_command |= 0x0904; break;
  case 1: VAR_11->HPNA_command |= 0x0a00; break;
  case 2: VAR_11->HPNA_command |= 0x0506; break;
  case 3: VAR_11->HPNA_command |= 0x0602; break;
  }
 else
  switch(VAR_5) {
  case 0: VAR_11->HPNA_command |= 0x0004; break;
  case 1: VAR_11->HPNA_command |= 0x0000; break;
  case 2: VAR_11->HPNA_command |= 0x0006; break;
  case 3: VAR_11->HPNA_command |= 0x0002; break;
  }


 VAR_11->HPNA_present = 0;
 FUNC_6(VAR_11->cr6_data|0x40000, VAR_11->ioaddr);
 VAR_14 = FUNC_5(VAR_11->ioaddr, VAR_11->phy_addr, 3, VAR_11->chip_id);
 if ( ( VAR_14 & 0xfff0 ) == 0xb900 ) {

  VAR_11->HPNA_timer = 8;
  if ( FUNC_5(VAR_11->ioaddr, VAR_11->phy_addr, 31, VAR_11->chip_id) == 0x4404) {

   VAR_11->HPNA_present = 1;
   FUNC_1(VAR_11, VAR_14);
  } else {

   VAR_11->HPNA_present = 2;
   FUNC_2(VAR_11);
  }
 }

}
