
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int* keybit; } ;
struct TYPE_2__ {int distance_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
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
 int FUNC_2 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;

void FUNC_4(struct input_dev *VAR_37, struct wacom_wac *VAR_38)
{
 VAR_37->keybit[FUNC_1(VAR_19)] |= FUNC_0(VAR_16) | FUNC_0(VAR_17) | FUNC_0(VAR_18);
 VAR_37->keybit[FUNC_1(VAR_19)] |= FUNC_0(VAR_28) | FUNC_0(VAR_29) | FUNC_0(VAR_30);
 VAR_37->keybit[FUNC_1(VAR_20)] |= FUNC_0(VAR_6) | FUNC_0(VAR_7) | FUNC_0(VAR_8) |
       FUNC_0(VAR_9) | FUNC_0(VAR_10) | FUNC_0(VAR_11) |
       FUNC_0(VAR_12) | FUNC_0(VAR_13) | FUNC_0(VAR_14) |
       FUNC_0(VAR_15);
 VAR_37->keybit[FUNC_1(VAR_33)] |= FUNC_0(VAR_33) | FUNC_0(VAR_34);
 VAR_37->keybit[FUNC_1(VAR_32)] |= FUNC_0(VAR_35);

 FUNC_2(VAR_37, VAR_5, -900, 899, 0, 0);
 FUNC_2(VAR_37, VAR_1, 0, 71, 0, 0);
 FUNC_3(VAR_37, VAR_31, VAR_36);

 VAR_37->keybit[FUNC_1(VAR_27)] |= FUNC_0(VAR_27) | FUNC_0(VAR_25) |
      FUNC_0(VAR_24) | FUNC_0(VAR_26) |
      FUNC_0(VAR_23) | FUNC_0(VAR_21) |
      FUNC_0(VAR_22);

 FUNC_2(VAR_37, VAR_0,
        0, VAR_38->features->distance_max, 0, 0);
 FUNC_2(VAR_37, VAR_4, 0, 1023, 0, 0);
 FUNC_2(VAR_37, VAR_2, 0, 127, 0, 0);
 FUNC_2(VAR_37, VAR_3, 0, 127, 0, 0);
}
