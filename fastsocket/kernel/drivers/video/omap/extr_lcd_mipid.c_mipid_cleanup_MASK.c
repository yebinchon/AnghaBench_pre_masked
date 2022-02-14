
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipid_device {int esd_wq; scalar_t__ enabled; } ;
struct lcd_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mipid_device*) ;
 struct mipid_device* FUNC_2 (struct lcd_panel*) ;

__attribute__((used)) static void FUNC_3(struct lcd_panel *VAR_0)
{
 struct mipid_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->enabled)
  FUNC_1(VAR_1);
 FUNC_0(VAR_1->esd_wq);
}
