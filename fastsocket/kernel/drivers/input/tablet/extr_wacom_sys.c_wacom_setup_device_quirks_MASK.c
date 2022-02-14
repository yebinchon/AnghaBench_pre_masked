
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ device_type; int x_max; int y_max; scalar_t__ type; int quirks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct wacom_features *VAR_4)
{

 if (VAR_4->device_type == VAR_0 && !VAR_4->x_max) {
  VAR_4->x_max = 1023;
  VAR_4->y_max = 1023;
 }


 if (VAR_4->type == VAR_1 || VAR_4->type == VAR_2)
  VAR_4->quirks |= VAR_3;
}
