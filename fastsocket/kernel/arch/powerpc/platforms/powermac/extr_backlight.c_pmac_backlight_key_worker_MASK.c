
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct backlight_properties {int brightness; int max_brightness; } ;
struct TYPE_3__ {struct backlight_properties props; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_4)
{
 if (FUNC_0(&VAR_0))
  return;

 FUNC_2(&VAR_3);
 if (VAR_1) {
  struct backlight_properties *VAR_5;
  int VAR_6;

  VAR_5 = &VAR_1->props;

  VAR_6 = VAR_5->brightness +
   ((VAR_2?-1:1) *
    (VAR_5->max_brightness / 15));

  if (VAR_6 < 0)
   VAR_6 = 0;
  else if (VAR_6 > VAR_5->max_brightness)
   VAR_6 = VAR_5->max_brightness;

  VAR_5->brightness = VAR_6;
  FUNC_1(VAR_1);
 }
 FUNC_3(&VAR_3);
}
