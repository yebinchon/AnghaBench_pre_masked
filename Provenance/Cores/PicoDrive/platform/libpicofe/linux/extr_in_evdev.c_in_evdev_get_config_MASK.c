
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int abs_count; } ;
typedef TYPE_1__ in_evdev_t ;




__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, int *VAR_2)
{
 in_evdev_t *VAR_3 = VAR_0;

 switch (VAR_1) {
 case 128:
  *VAR_2 = VAR_3->abs_count;
  break;
 default:
  return -1;
 }

 return 0;
}
