
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int tx; int rx; } ;
struct rt2x00_dev {int freq_offset; int led_mcu_reg; int led_qual; int led_assoc; int led_radio; TYPE_1__ default_ant; int cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_2 (struct rt2x00_dev*,char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_9 (struct rt2x00_dev*,int *,int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct rt2x00_dev *VAR_57)
{
 u32 VAR_58;
 u16 VAR_59;
 u16 VAR_60;




 FUNC_1(VAR_57, VAR_9, &VAR_60);




 VAR_59 = FUNC_3(VAR_60, VAR_13);
 FUNC_8(VAR_57, VAR_41, &VAR_58);
 FUNC_6(VAR_57, FUNC_4(VAR_58, VAR_42),
   VAR_59, FUNC_4(VAR_58, VAR_43));

 if (!FUNC_5(VAR_57, VAR_55) &&
     !FUNC_5(VAR_57, VAR_56) &&
     !FUNC_5(VAR_57, VAR_53) &&
     !FUNC_5(VAR_57, VAR_54)) {
  FUNC_2(VAR_57, "Invalid RF chipset detected\n");
  return -VAR_36;
 }




 if (FUNC_3(VAR_60, VAR_12) == 2)
  FUNC_0(VAR_3, &VAR_57->cap_flags);




 VAR_57->default_ant.tx =
     FUNC_3(VAR_60, VAR_15);
 VAR_57->default_ant.rx =
     FUNC_3(VAR_60, VAR_14);




 if (FUNC_3(VAR_60, VAR_10))
  FUNC_0(VAR_6, &VAR_57->cap_flags);




 if (FUNC_3(VAR_60, VAR_11))
  FUNC_0(VAR_7, &VAR_57->cap_flags);




 FUNC_1(VAR_57, VAR_16, &VAR_60);
 if (FUNC_3(VAR_60, VAR_18))
  FUNC_0(VAR_8, &VAR_57->cap_flags);

 VAR_57->freq_offset = FUNC_3(VAR_60, VAR_17);




 FUNC_1(VAR_57, VAR_29, &VAR_60);

 if (FUNC_3(VAR_60, VAR_31))
  FUNC_0(VAR_4, &VAR_57->cap_flags);
 if (FUNC_3(VAR_60, VAR_32))
  FUNC_0(VAR_5, &VAR_57->cap_flags);






 if (FUNC_5(VAR_57, VAR_54) &&
     !FUNC_10(VAR_3, &VAR_57->cap_flags)) {
  VAR_57->default_ant.rx =
      VAR_0 + FUNC_3(VAR_60, VAR_33);
  VAR_57->default_ant.tx =
      VAR_1 - FUNC_3(VAR_60, VAR_35);

  if (FUNC_3(VAR_60, VAR_34))
   VAR_57->default_ant.tx = VAR_2;
  if (FUNC_3(VAR_60, VAR_30))
   VAR_57->default_ant.rx = VAR_2;
 }
 return 0;
}
