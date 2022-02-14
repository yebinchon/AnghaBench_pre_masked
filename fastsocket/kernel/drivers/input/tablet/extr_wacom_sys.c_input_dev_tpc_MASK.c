
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* features; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_type; int y_phy; int x_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ,int ,int ) ;

void FUNC_1(struct input_dev *VAR_4, struct wacom_wac *VAR_5)
{
 if (VAR_5->features->device_type == VAR_2 ||
     VAR_5->features->device_type == VAR_3) {
  FUNC_0(VAR_4, VAR_0, 0, VAR_5->features->x_phy, 0, 0);
  FUNC_0(VAR_4, VAR_1, 0, VAR_5->features->y_phy, 0, 0);
 }
}
