
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct bnx2x_phy *VAR_12,
          struct link_params *VAR_13,
          u8 VAR_14, u16 VAR_15, u8 VAR_16,
          u8 *VAR_17, u8 VAR_18)
{
 struct bnx2x *VAR_19 = VAR_13->bp;
 u16 VAR_20 = 0;
 u16 VAR_21;
 if (VAR_16 > VAR_11) {
  FUNC_0(VAR_10,
     "Reading from eeprom is limited to 0xf\n");
  return -VAR_0;
 }

 FUNC_2(VAR_19, VAR_12,
    VAR_1, VAR_4,
    (VAR_16 | (VAR_14 << 8)));


 FUNC_2(VAR_19, VAR_12,
    VAR_1, VAR_7,
    VAR_15);


 FUNC_2(VAR_19, VAR_12,
    VAR_1, VAR_5,
    0x2c0f);


 for (VAR_21 = 0; VAR_21 < 100; VAR_21++) {
  FUNC_1(VAR_19, VAR_12,
    VAR_1,
    VAR_5, &VAR_20);
  if ((VAR_20 & VAR_6) ==
      VAR_8)
   break;
  FUNC_3(5);
 }

 if ((VAR_20 & VAR_6) !=
      VAR_8) {
  FUNC_0(VAR_10,
    "Got bad status 0x%x when reading from SFP+ EEPROM\n",
    (VAR_20 & VAR_6));
  return -VAR_0;
 }


 for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
  FUNC_1(VAR_19, VAR_12,
    VAR_1,
    VAR_2 + VAR_21, &VAR_20);
  VAR_17[VAR_21] = (u8)(VAR_20 & VAR_3);
 }

 for (VAR_21 = 0; VAR_21 < 100; VAR_21++) {
  FUNC_1(VAR_19, VAR_12,
    VAR_1,
    VAR_5, &VAR_20);
  if ((VAR_20 & VAR_6) ==
      VAR_9)
   return 0;
  FUNC_4(1000, 2000);
 }
 return -VAR_0;
}
