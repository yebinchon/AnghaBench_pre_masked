
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; } ;
struct device {int dummy; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, pm_message_t VAR_2)
{
 struct led_classdev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_3);

 return 0;
}
