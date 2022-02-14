
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int txmixer_gain_24g; int txmixer_gain_5g; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int* FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,char*,...) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct rt2x00_dev*,int ) ;
 int FUNC_10 (int*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct rt2x00_dev *VAR_50)
{
 struct rt2800_drv_data *VAR_51 = VAR_50->drv_data;
 u16 VAR_52;
 u8 *VAR_53;
 u8 VAR_54;
 int VAR_55;




 VAR_55 = FUNC_3(VAR_50);
 if (VAR_55)
  return VAR_55;




 VAR_53 = FUNC_4(VAR_50, VAR_9);
 if (!FUNC_2(VAR_53)) {
  FUNC_1(VAR_53);
  FUNC_5(VAR_50, "MAC: %pM\n", VAR_53);
 }

 FUNC_6(VAR_50, VAR_10, &VAR_52);
 if (VAR_52 == 0xffff) {
  FUNC_10(&VAR_52, VAR_12, 2);
  FUNC_10(&VAR_52, VAR_13, 1);
  FUNC_10(&VAR_52, VAR_11, VAR_47);
  FUNC_7(VAR_50, VAR_10, VAR_52);
  FUNC_5(VAR_50, "Antenna: 0x%04x\n", VAR_52);
 } else if (FUNC_9(VAR_50, VAR_48) ||
     FUNC_9(VAR_50, VAR_49)) {



  if (FUNC_8(VAR_52, VAR_12) > 2)
   FUNC_10(&VAR_52, VAR_12, 2);
  FUNC_7(VAR_50, VAR_10, VAR_52);
 }

 FUNC_6(VAR_50, VAR_14, &VAR_52);
 if (VAR_52 == 0xffff) {
  FUNC_10(&VAR_52, VAR_27, 0);
  FUNC_10(&VAR_52, VAR_26, 0);
  FUNC_10(&VAR_52, VAR_24, 0);
  FUNC_10(&VAR_52, VAR_25, 0);
  FUNC_10(&VAR_52, VAR_22, 0);
  FUNC_10(&VAR_52, VAR_20, 0);
  FUNC_10(&VAR_52, VAR_21, 0);
  FUNC_10(&VAR_52, VAR_29, 0);
  FUNC_10(&VAR_52, VAR_18, 0);
  FUNC_10(&VAR_52, VAR_19, 0);
  FUNC_10(&VAR_52, VAR_16, 0);
  FUNC_10(&VAR_52, VAR_15, 0);
  FUNC_10(&VAR_52, VAR_28, 0);
  FUNC_10(&VAR_52, VAR_17, 0);
  FUNC_10(&VAR_52, VAR_23, 0);
  FUNC_7(VAR_50, VAR_14, VAR_52);
  FUNC_5(VAR_50, "NIC: 0x%04x\n", VAR_52);
 }

 FUNC_6(VAR_50, VAR_0, &VAR_52);
 if ((VAR_52 & 0x00ff) == 0x00ff) {
  FUNC_10(&VAR_52, VAR_3, 0);
  FUNC_7(VAR_50, VAR_0, VAR_52);
  FUNC_5(VAR_50, "Freq: 0x%04x\n", VAR_52);
 }
 if ((VAR_52 & 0xff00) == 0xff00) {
  FUNC_10(&VAR_52, VAR_1,
       VAR_46);
  FUNC_10(&VAR_52, VAR_2, 0);
  FUNC_7(VAR_50, VAR_0, VAR_52);
  FUNC_7(VAR_50, VAR_5, 0x5555);
  FUNC_7(VAR_50, VAR_4, 0x2221);
  FUNC_7(VAR_50, VAR_6, 0xa9f8);
  FUNC_5(VAR_50, "Led Mode: 0x%04x\n", VAR_52);
 }






 FUNC_6(VAR_50, VAR_7, &VAR_52);
 VAR_54 = FUNC_8(VAR_52, VAR_8);

 FUNC_6(VAR_50, VAR_36, &VAR_52);
 if (FUNC_0(FUNC_8(VAR_52, VAR_40)) > 10)
  FUNC_10(&VAR_52, VAR_40, 0);
 if (FUNC_0(FUNC_8(VAR_52, VAR_41)) > 10)
  FUNC_10(&VAR_52, VAR_41, 0);
 FUNC_7(VAR_50, VAR_36, VAR_52);

 FUNC_6(VAR_50, VAR_44, &VAR_52);
 if ((VAR_52 & 0x00ff) != 0x00ff) {
  VAR_51->txmixer_gain_24g =
   FUNC_8(VAR_52, VAR_45);
 } else {
  VAR_51->txmixer_gain_24g = 0;
 }

 FUNC_6(VAR_50, VAR_37, &VAR_52);
 if (FUNC_0(FUNC_8(VAR_52, VAR_39)) > 10)
  FUNC_10(&VAR_52, VAR_39, 0);
 if (FUNC_8(VAR_52, VAR_38) == 0x00 ||
     FUNC_8(VAR_52, VAR_38) == 0xff)
  FUNC_10(&VAR_52, VAR_38,
       VAR_54);
 FUNC_7(VAR_50, VAR_37, VAR_52);

 FUNC_6(VAR_50, VAR_42, &VAR_52);
 if ((VAR_52 & 0x00ff) != 0x00ff) {
  VAR_51->txmixer_gain_5g =
   FUNC_8(VAR_52, VAR_43);
 } else {
  VAR_51->txmixer_gain_5g = 0;
 }

 FUNC_6(VAR_50, VAR_30, &VAR_52);
 if (FUNC_0(FUNC_8(VAR_52, VAR_34)) > 10)
  FUNC_10(&VAR_52, VAR_34, 0);
 if (FUNC_0(FUNC_8(VAR_52, VAR_35)) > 10)
  FUNC_10(&VAR_52, VAR_35, 0);
 FUNC_7(VAR_50, VAR_30, VAR_52);

 FUNC_6(VAR_50, VAR_31, &VAR_52);
 if (FUNC_0(FUNC_8(VAR_52, VAR_33)) > 10)
  FUNC_10(&VAR_52, VAR_33, 0);
 if (FUNC_8(VAR_52, VAR_32) == 0x00 ||
     FUNC_8(VAR_52, VAR_32) == 0xff)
  FUNC_10(&VAR_52, VAR_32,
       VAR_54);
 FUNC_7(VAR_50, VAR_31, VAR_52);

 return 0;
}
