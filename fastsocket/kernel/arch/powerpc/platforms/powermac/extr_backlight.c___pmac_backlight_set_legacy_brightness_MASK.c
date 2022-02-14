
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct backlight_properties {int brightness; int max_brightness; } ;
struct TYPE_3__ {struct backlight_properties props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_1(&VAR_3);
 if (VAR_2) {
  struct backlight_properties *VAR_6;

  VAR_6 = &VAR_2->props;
  VAR_6->brightness = VAR_4 *
   (VAR_6->max_brightness + 1) /
   (VAR_1 + 1);

  if (VAR_6->brightness > VAR_6->max_brightness)
   VAR_6->brightness = VAR_6->max_brightness;
  else if (VAR_6->brightness < 0)
   VAR_6->brightness = 0;

  FUNC_0(VAR_2);

  VAR_5 = 0;
 }
 FUNC_2(&VAR_3);

 return VAR_5;
}
