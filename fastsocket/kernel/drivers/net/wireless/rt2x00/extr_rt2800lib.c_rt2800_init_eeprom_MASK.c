
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* rx; void* tx; scalar_t__ rx_chain_num; scalar_t__ tx_chain_num; } ;
struct rt2x00_dev {int led_mcu_reg; int cap_flags; int led_qual; int led_assoc; int led_radio; scalar_t__ freq_offset; TYPE_1__ default_ant; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 scalar_t__ VAR_23 ;
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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_3 (struct rt2x00_dev*,char*,int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct rt2x00_dev *VAR_36)
{
 u16 VAR_37;
 u16 VAR_38;
 u16 VAR_39;




 FUNC_2(VAR_36, VAR_13, &VAR_38);






 if (FUNC_5(VAR_36, VAR_31) ||
     FUNC_5(VAR_36, VAR_34) ||
     FUNC_5(VAR_36, VAR_35))
  FUNC_2(VAR_36, VAR_8, &VAR_39);
 else
  VAR_39 = FUNC_4(VAR_38, VAR_14);

 switch (VAR_39) {
 case 142:
 case 141:
 case 144:
 case 143:
 case 140:
 case 145:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_3(VAR_36, "Invalid RF chipset 0x%04x detected\n",
      VAR_39);
  return -VAR_24;
 }

 FUNC_7(VAR_36, VAR_39);




 VAR_36->default_ant.tx_chain_num =
     FUNC_4(VAR_38, VAR_16);
 VAR_36->default_ant.rx_chain_num =
     FUNC_4(VAR_38, VAR_15);

 FUNC_2(VAR_36, VAR_17, &VAR_38);

 if (FUNC_5(VAR_36, VAR_29) ||
     FUNC_5(VAR_36, VAR_30) ||
     FUNC_5(VAR_36, VAR_32) ||
     FUNC_5(VAR_36, VAR_33)) {
  VAR_37 = FUNC_4(VAR_38,
    VAR_18);
  switch (VAR_37) {
  case 0:
  case 1:
  case 2:
   VAR_36->default_ant.tx = VAR_0;
   VAR_36->default_ant.rx = VAR_0;
   break;
  case 3:
   VAR_36->default_ant.tx = VAR_0;
   VAR_36->default_ant.rx = VAR_1;
   break;
  }
 } else {
  VAR_36->default_ant.tx = VAR_0;
  VAR_36->default_ant.rx = VAR_0;
 }

 if (FUNC_6(VAR_36, VAR_34, VAR_28)) {
  VAR_36->default_ant.tx = VAR_2;
  VAR_36->default_ant.rx = VAR_2;
 }




 if (FUNC_4(VAR_38, VAR_21))
  FUNC_0(VAR_4, &VAR_36->cap_flags);
 if (FUNC_4(VAR_38, VAR_20))
  FUNC_0(VAR_5, &VAR_36->cap_flags);




 if (FUNC_4(VAR_38, VAR_22))
  FUNC_0(VAR_6, &VAR_36->cap_flags);




 if (FUNC_4(VAR_38, VAR_19))
  FUNC_0(VAR_3, &VAR_36->cap_flags);




 FUNC_2(VAR_36, VAR_11, &VAR_38);
 VAR_36->freq_offset = FUNC_4(VAR_38, VAR_12);
 FUNC_2(VAR_36, VAR_9, &VAR_38);

 if (FUNC_4(VAR_38, VAR_10) <
     VAR_23)
  FUNC_0(VAR_7, &VAR_36->cap_flags);

 return 0;
}
