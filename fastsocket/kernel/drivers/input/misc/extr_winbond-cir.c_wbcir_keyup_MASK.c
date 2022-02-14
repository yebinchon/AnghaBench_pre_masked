
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int input_dev; int last_keycode; int rxtrigger; scalar_t__ keypressed; int keyup_jiffies; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(unsigned long VAR_2)
{
 struct wbcir_data *VAR_3 = (struct wbcir_data *)VAR_2;
 unsigned long VAR_4;
 FUNC_3(&VAR_1, VAR_4);

 if (FUNC_5(VAR_3->keyup_jiffies) && VAR_3->keypressed) {
  VAR_3->keypressed = 0;
  FUNC_2(VAR_3->rxtrigger, VAR_0);
  FUNC_0(VAR_3->input_dev, VAR_3->last_keycode, 0);
  FUNC_1(VAR_3->input_dev);
 }

 FUNC_4(&VAR_1, VAR_4);
}
