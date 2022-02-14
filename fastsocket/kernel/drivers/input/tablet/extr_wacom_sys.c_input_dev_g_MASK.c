
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int* evbit; int* relbit; int* keybit; } ;
struct TYPE_2__ {int distance_max; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
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
 int FUNC_2 (struct input_dev*,int ,int ,int ,int ,int ) ;

void FUNC_3(struct input_dev *VAR_13, struct wacom_wac *VAR_14)
{
 VAR_13->evbit[0] |= FUNC_0(VAR_11);
 VAR_13->relbit[0] |= FUNC_0(VAR_12);
 VAR_13->keybit[FUNC_1(VAR_4)] |= FUNC_0(VAR_2) |
  FUNC_0(VAR_5) | FUNC_0(VAR_3);
 VAR_13->keybit[FUNC_1(VAR_1)] |= FUNC_0(VAR_10) |
  FUNC_0(VAR_9) | FUNC_0(VAR_6) |
  FUNC_0(VAR_8) | FUNC_0(VAR_7);
 FUNC_2(VAR_13, VAR_0, 0, VAR_14->features->distance_max, 0, 0);
}
