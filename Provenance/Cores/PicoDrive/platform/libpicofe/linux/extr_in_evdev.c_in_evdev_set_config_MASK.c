
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abs_lzone; int abs_max_x; int abs_min_x; } ;
typedef TYPE_1__ in_evdev_t ;




 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, int VAR_2)
{
 in_evdev_t *VAR_3 = VAR_0;
 int VAR_4;

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_3, VAR_2);
 case 129:
  if (VAR_2 < 1 || VAR_2 > 99 || VAR_3->abs_lzone == 0)
   return -1;

  VAR_4 = (VAR_3->abs_max_x - VAR_3->abs_min_x) / 2;
  VAR_3->abs_lzone = VAR_4 - VAR_4 * VAR_2 / 100;
  if (VAR_3->abs_lzone < 1)
   VAR_3->abs_lzone = 1;
  else if (VAR_3->abs_lzone >= VAR_4)
   VAR_3->abs_lzone = VAR_4 - 1;
  break;
 default:
  return -1;
 }

 return 0;
}
