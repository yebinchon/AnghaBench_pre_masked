
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int* evbit; int* mscbit; int* relbit; int* keybit; } ;
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
 int FUNC_2 (struct input_dev*,int ,int,int,int ,int ) ;

void FUNC_3(struct input_dev *VAR_26, struct wacom_wac *VAR_27)
{
 VAR_26->evbit[0] |= FUNC_0(VAR_22) | FUNC_0(VAR_23);
 VAR_26->mscbit[0] |= FUNC_0(VAR_24);
 VAR_26->relbit[0] |= FUNC_0(VAR_25);
 VAR_26->keybit[FUNC_1(VAR_10)] |= FUNC_0(VAR_8) |
  FUNC_0(VAR_11) | FUNC_0(VAR_9) |
  FUNC_0(VAR_12) | FUNC_0(VAR_7);
 VAR_26->keybit[FUNC_1(VAR_6)] |= FUNC_0(VAR_21) |
  FUNC_0(VAR_19) | FUNC_0(VAR_13) |
  FUNC_0(VAR_18) | FUNC_0(VAR_16) |
  FUNC_0(VAR_20) | FUNC_0(VAR_15) |
  FUNC_0(VAR_17) | FUNC_0(VAR_14);
 FUNC_2(VAR_26, VAR_0, 0, VAR_27->features->distance_max, 0, 0);
 FUNC_2(VAR_26, VAR_5, 0, 1023, 0, 0);
 FUNC_2(VAR_26, VAR_3, 0, 127, 0, 0);
 FUNC_2(VAR_26, VAR_4, 0, 127, 0, 0);
 FUNC_2(VAR_26, VAR_1, -900, 899, 0, 0);
 FUNC_2(VAR_26, VAR_2, -1023, 1023, 0, 0);
}
