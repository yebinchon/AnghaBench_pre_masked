
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int keypressed; int input_dev; int last_keycode; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rc_dev *VAR_0)
{
 if (!VAR_0->keypressed)
  return;

 FUNC_0(1, "keyup key 0x%04x\n", VAR_0->last_keycode);
 FUNC_1(VAR_0->input_dev, VAR_0->last_keycode, 0);
 FUNC_2(VAR_0->input_dev);
 VAR_0->keypressed = 0;
}
