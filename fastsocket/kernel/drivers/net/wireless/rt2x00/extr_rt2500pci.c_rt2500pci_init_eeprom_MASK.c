
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ rx; scalar_t__ tx; } ;
struct rt2x00_dev {scalar_t__ rssi_offset; int cap_flags; int led_qual; int led_radio; TYPE_1__ default_ant; } ;


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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,scalar_t__*) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct rt2x00_dev *VAR_27)
{
 u32 VAR_28;
 u16 VAR_29;
 u16 VAR_30;




 FUNC_2(VAR_27, VAR_4, &VAR_30);




 VAR_29 = FUNC_4(VAR_30, VAR_7);
 FUNC_8(VAR_27, VAR_2, &VAR_28);
 FUNC_7(VAR_27, VAR_26, VAR_29,
   FUNC_5(VAR_28, VAR_3));

 if (!FUNC_6(VAR_27, VAR_20) &&
     !FUNC_6(VAR_27, VAR_21) &&
     !FUNC_6(VAR_27, VAR_22) &&
     !FUNC_6(VAR_27, VAR_23) &&
     !FUNC_6(VAR_27, VAR_24) &&
     !FUNC_6(VAR_27, VAR_25)) {
  FUNC_3(VAR_27, "Invalid RF chipset detected\n");
  return -VAR_14;
 }




 VAR_27->default_ant.tx =
     FUNC_4(VAR_30, VAR_9);
 VAR_27->default_ant.rx =
     FUNC_4(VAR_30, VAR_8);
 if (FUNC_4(VAR_30, VAR_5))
  FUNC_0(VAR_0, &VAR_27->cap_flags);




 FUNC_2(VAR_27, VAR_12, &VAR_30);
 if (!FUNC_4(VAR_30, VAR_13))
  FUNC_0(VAR_1, &VAR_27->cap_flags);




 FUNC_2(VAR_27, VAR_10, &VAR_30);
 VAR_27->rssi_offset =
     FUNC_4(VAR_30, VAR_11);

 return 0;
}
