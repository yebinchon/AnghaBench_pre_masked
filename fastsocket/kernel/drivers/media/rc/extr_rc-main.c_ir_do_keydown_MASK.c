
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rc_dev {int keypressed; int last_scancode; scalar_t__ last_toggle; int input_dev; int last_keycode; int input_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rc_dev*) ;

__attribute__((used)) static void FUNC_5(struct rc_dev *VAR_3, int VAR_4,
     u32 VAR_5, u8 VAR_6)
{
 FUNC_1(VAR_3->input_dev, VAR_0, VAR_2, VAR_4);


 if (VAR_3->keypressed &&
     VAR_3->last_scancode == VAR_4 &&
     VAR_3->last_toggle == VAR_6)
  return;


 FUNC_4(VAR_3);

 VAR_3->last_scancode = VAR_4;
 VAR_3->last_toggle = VAR_6;
 VAR_3->last_keycode = VAR_5;

 if (VAR_5 == VAR_1)
  return;


 VAR_3->keypressed = 1;
 FUNC_0(1, "%s: key down event, key 0x%04x, scancode 0x%04x\n",
     VAR_3->input_name, VAR_5, VAR_4);
 FUNC_2(VAR_3->input_dev, VAR_3->last_keycode, 1);
 FUNC_3(VAR_3->input_dev);
}
