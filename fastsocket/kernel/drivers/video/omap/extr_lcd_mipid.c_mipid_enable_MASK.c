
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {int enabled; int mutex; int saved_bklight_level; } ;
struct lcd_panel {int dummy; } ;


 int FUNC_0 (struct mipid_device*) ;
 int FUNC_1 (struct lcd_panel*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mipid_device*) ;
 int FUNC_5 (struct mipid_device*,int) ;
 int FUNC_6 (struct mipid_device*,int ) ;
 struct mipid_device* FUNC_7 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_8(struct lcd_panel *VAR_0)
{
 struct mipid_device *VAR_1 = FUNC_7(VAR_0);

 FUNC_2(&VAR_1->mutex);

 if (VAR_1->enabled) {
  FUNC_3(&VAR_1->mutex);
  return 0;
 }
 FUNC_6(VAR_1, 0);
 VAR_1->enabled = 1;
 FUNC_4(VAR_1);
 FUNC_5(VAR_1, 1);
 FUNC_1(VAR_0, VAR_1->saved_bklight_level);
 FUNC_0(VAR_1);

 FUNC_3(&VAR_1->mutex);
 return 0;
}
