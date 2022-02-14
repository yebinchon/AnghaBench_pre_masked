
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int* keybit; int * absbit; } ;
struct TYPE_2__ {int distance_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct input_dev*,int ,int ,int ,int ,int ) ;

void FUNC_3(struct input_dev *VAR_5, struct wacom_wac *VAR_6)
{
 VAR_5->absbit[FUNC_1(VAR_1)] &= ~VAR_1;

 VAR_5->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_4) |
  FUNC_0(VAR_3);
 FUNC_2(VAR_5, VAR_0, 0,
        VAR_6->features->distance_max, 0, 0);
}
