
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_device {int dummy; } ;
struct lcd_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct lcd_panel *VAR_4,
    struct omapfb_device *VAR_5)
{
 FUNC_1(VAR_3, "lcd reset");
 FUNC_1(VAR_2, "lcd qvga");
 FUNC_1(VAR_1, "lcd panel");
 FUNC_1(VAR_0, "lcd backlight");

 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_0, 0);




 FUNC_2(VAR_2, 1);

 FUNC_2(VAR_3, 1);

 return 0;
}
