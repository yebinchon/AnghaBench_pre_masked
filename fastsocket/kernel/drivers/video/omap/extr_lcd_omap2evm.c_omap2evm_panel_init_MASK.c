
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct lcd_panel *VAR_12,
    struct omapfb_device *VAR_13)
{
 FUNC_1(VAR_0, "LCD enable");
 FUNC_1(VAR_2, "LCD lr");
 FUNC_1(VAR_5, "LCD ud");
 FUNC_1(VAR_1, "LCD ini");
 FUNC_1(VAR_3, "LCD qvga");
 FUNC_1(VAR_4, "LCD resb");

 FUNC_0(VAR_0, 1);
 FUNC_0(VAR_4, 1);
 FUNC_0(VAR_1, 1);
 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_2, 1);
 FUNC_0(VAR_5, 1);

 FUNC_2(VAR_6, 0x11, VAR_8);
 FUNC_2(VAR_7, 0x01, VAR_10);
 FUNC_2(VAR_7, 0x02, VAR_9);
 VAR_11 = 100;

 return 0;
}
