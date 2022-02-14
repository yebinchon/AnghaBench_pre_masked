
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int mac_type; scalar_t__ phy_init_script; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int FUNC_0 (struct e1000_hw*,int,int*) ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_13)
{
 u32 VAR_14;
 u16 VAR_15;

 FUNC_2("e1000_phy_init_script");

 if (VAR_13->phy_init_script) {
  FUNC_3(20);



  VAR_14 = FUNC_0(VAR_13, 0x2F5B, &VAR_15);


  FUNC_1(VAR_13, 0x2F5B, 0x0003);
  FUNC_3(20);

  FUNC_1(VAR_13, 0x0000, 0x0140);
  FUNC_3(5);

  switch (VAR_13->mac_type) {
  case 131:
  case 129:
   FUNC_1(VAR_13, 0x1F95, 0x0001);
   FUNC_1(VAR_13, 0x1F71, 0xBD21);
   FUNC_1(VAR_13, 0x1F79, 0x0018);
   FUNC_1(VAR_13, 0x1F30, 0x1600);
   FUNC_1(VAR_13, 0x1F31, 0x0014);
   FUNC_1(VAR_13, 0x1F32, 0x161C);
   FUNC_1(VAR_13, 0x1F94, 0x0003);
   FUNC_1(VAR_13, 0x1F96, 0x003F);
   FUNC_1(VAR_13, 0x2010, 0x0008);
   break;

  case 130:
  case 128:
   FUNC_1(VAR_13, 0x1F73, 0x0099);
   break;
  default:
   break;
  }

  FUNC_1(VAR_13, 0x0000, 0x3300);
  FUNC_3(20);


  FUNC_1(VAR_13, 0x2F5B, VAR_15);

  if (VAR_13->mac_type == 129) {
   u16 VAR_16, VAR_17, VAR_18;


   FUNC_0(VAR_13,
        VAR_12,
        &VAR_16);

   if (!(VAR_16 & VAR_11)) {
    FUNC_0(VAR_13,
         VAR_10,
         &VAR_16);

    VAR_17 = VAR_16 & VAR_8;
    VAR_18 =
        VAR_16 & VAR_2;

    if (VAR_18 >
        VAR_3) {
     VAR_18 -=
         VAR_1;
     VAR_17 -= VAR_6;
    } else if (VAR_18 ==
        VAR_3)
     VAR_17 -= VAR_7;

    VAR_16 =
        (VAR_16 & VAR_9) |
        (VAR_17 & VAR_8) |
        (VAR_18 &
         VAR_2);

    FUNC_1(VAR_13,
          VAR_4,
          VAR_16);
    FUNC_1(VAR_13,
          VAR_0,
          VAR_5);
   }
  }
 }
}
