
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct bnx2x_phy *VAR_14,
          struct link_params *VAR_15,
          u8 VAR_16, u16 VAR_17, u8 VAR_18,
          u8 *VAR_19, u8 VAR_20)
{
 struct bnx2x *VAR_21 = VAR_15->bp;
 u16 VAR_22, VAR_23;

 if (VAR_18 > VAR_13) {
  FUNC_0(VAR_12,
     "Reading from eeprom is limited to 0xf\n");
  return -VAR_1;
 }





 FUNC_2(VAR_21, VAR_14,
    VAR_2,
    VAR_5,
    ((VAR_16 << 8) | 1));


 FUNC_1(VAR_21, VAR_14,
   VAR_2,
   VAR_7,
   &VAR_22);


 FUNC_2(VAR_21, VAR_14,
    VAR_2,
    VAR_6,
    ((VAR_18 < 2) ? 2 : VAR_18));


 FUNC_2(VAR_21, VAR_14,
    VAR_2,
    VAR_9,
    VAR_17);

 FUNC_2(VAR_21, VAR_14,
    VAR_2,
    0x8004,
    VAR_3);


 FUNC_2(VAR_21, VAR_14,
    VAR_2,
    VAR_7,
    0x8002);



 FUNC_4(1000, 2000);


 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  FUNC_1(VAR_21, VAR_14,
    VAR_2,
    VAR_7, &VAR_22);
  if ((VAR_22 & VAR_8) ==
      VAR_10)
   break;
  FUNC_3(5);
 }

 if ((VAR_22 & VAR_8) !=
      VAR_10) {
  FUNC_0(VAR_12,
    "Got bad status 0x%x when reading from SFP+ EEPROM\n",
    (VAR_22 & VAR_8));
  return -VAR_0;
 }


 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  FUNC_1(VAR_21, VAR_14,
    VAR_2,
    VAR_3 + VAR_23, &VAR_22);
  VAR_19[VAR_23] = (u8)(VAR_22 & VAR_4);
 }

 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  FUNC_1(VAR_21, VAR_14,
    VAR_2,
    VAR_7, &VAR_22);
  if ((VAR_22 & VAR_8) ==
      VAR_11)
   return 0;
  FUNC_4(1000, 2000);
 }

 return -VAR_1;
}
