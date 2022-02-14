
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int eeprom; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; int width; int register_write; int register_read; struct rt2x00_dev* data; } ;
typedef int s8 ;


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
 int FUNC_0 (struct eeprom_93cx6*,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,char*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct rt2x00_dev*,int ,int *) ;
 int VAR_37 ;
 int VAR_38 ;

__attribute__((used)) static int FUNC_11(struct rt2x00_dev *VAR_39)
{
 struct eeprom_93cx6 VAR_40;
 u32 VAR_41;
 u16 VAR_42;
 u8 *VAR_43;
 s8 VAR_44;

 FUNC_10(VAR_39, VAR_1, &VAR_41);

 VAR_40.data = VAR_39;
 VAR_40.register_read = VAR_37;
 VAR_40.register_write = VAR_38;
 VAR_40.width = FUNC_8(VAR_41, VAR_2) ?
     VAR_34 : VAR_35;
 VAR_40.reg_data_in = 0;
 VAR_40.reg_data_out = 0;
 VAR_40.reg_data_clock = 0;
 VAR_40.reg_chip_select = 0;

 FUNC_0(&VAR_40, VAR_11, VAR_39->eeprom,
          VAR_32 / sizeof(u16));




 VAR_43 = FUNC_3(VAR_39, VAR_17);
 if (!FUNC_2(VAR_43)) {
  FUNC_1(VAR_43);
  FUNC_4(VAR_39, "MAC: %pM\n", *VAR_43);
 }

 FUNC_5(VAR_39, VAR_3, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_7, 2);
  FUNC_9(&VAR_42, VAR_10,
       VAR_0);
  FUNC_9(&VAR_42, VAR_9,
       VAR_0);
  FUNC_9(&VAR_42, VAR_5, 0);
  FUNC_9(&VAR_42, VAR_4, 0);
  FUNC_9(&VAR_42, VAR_6, 0);
  FUNC_9(&VAR_42, VAR_8, VAR_36);
  FUNC_6(VAR_39, VAR_3, VAR_42);
  FUNC_4(VAR_39, "Antenna: 0x%04x\n", VAR_42);
 }

 FUNC_5(VAR_39, VAR_18, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_20, 0);
  FUNC_9(&VAR_42, VAR_24, 0);
  FUNC_9(&VAR_42, VAR_23, 0);
  FUNC_9(&VAR_42, VAR_25, 0);
  FUNC_9(&VAR_42, VAR_22, 0);
  FUNC_9(&VAR_42, VAR_19, 0);
  FUNC_9(&VAR_42, VAR_21, 0);
  FUNC_6(VAR_39, VAR_18, VAR_42);
  FUNC_4(VAR_39, "NIC: 0x%04x\n", VAR_42);
 }

 FUNC_5(VAR_39, VAR_15, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_16,
       VAR_33);
  FUNC_6(VAR_39, VAR_15, VAR_42);
  FUNC_4(VAR_39, "Led: 0x%04x\n", VAR_42);
 }

 FUNC_5(VAR_39, VAR_12, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_13, 0);
  FUNC_9(&VAR_42, VAR_14, 0);
  FUNC_6(VAR_39, VAR_12, VAR_42);
  FUNC_4(VAR_39, "Freq: 0x%04x\n", VAR_42);
 }

 FUNC_5(VAR_39, VAR_29, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_30, 0);
  FUNC_9(&VAR_42, VAR_31, 0);
  FUNC_6(VAR_39, VAR_29, VAR_42);
  FUNC_4(VAR_39, "RSSI OFFSET BG: 0x%04x\n", VAR_42);
 } else {
  VAR_44 = FUNC_7(VAR_42, VAR_30);
  if (VAR_44 < -10 || VAR_44 > 10)
   FUNC_9(&VAR_42, VAR_30, 0);
  VAR_44 = FUNC_7(VAR_42, VAR_31);
  if (VAR_44 < -10 || VAR_44 > 10)
   FUNC_9(&VAR_42, VAR_31, 0);
  FUNC_6(VAR_39, VAR_29, VAR_42);
 }

 FUNC_5(VAR_39, VAR_26, &VAR_42);
 if (VAR_42 == 0xffff) {
  FUNC_9(&VAR_42, VAR_27, 0);
  FUNC_9(&VAR_42, VAR_28, 0);
  FUNC_6(VAR_39, VAR_26, VAR_42);
  FUNC_4(VAR_39, "RSSI OFFSET A: 0x%04x\n", VAR_42);
 } else {
  VAR_44 = FUNC_7(VAR_42, VAR_27);
  if (VAR_44 < -10 || VAR_44 > 10)
   FUNC_9(&VAR_42, VAR_27, 0);
  VAR_44 = FUNC_7(VAR_42, VAR_28);
  if (VAR_44 < -10 || VAR_44 > 10)
   FUNC_9(&VAR_42, VAR_28, 0);
  FUNC_6(VAR_39, VAR_26, VAR_42);
 }

 return 0;
}
