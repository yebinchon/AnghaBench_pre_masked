
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct lcd_panel *VAR_6,
    struct omapfb_device *VAR_7)
{
 if (FUNC_2()) {
  VAR_5 = VAR_3;
  VAR_4 = VAR_2;
 } else {
  VAR_5 = VAR_1;
  VAR_4 = VAR_0;
 }

 FUNC_1(VAR_5, "LCD enable");
 FUNC_1(VAR_4, "LCD bl");
 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_4, 0);

 return 0;
}
