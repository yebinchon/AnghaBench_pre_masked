
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_keyspan {int * keymap; struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct usb_keyspan *VAR_2, int VAR_3, int VAR_4)
{
 struct input_dev *VAR_5 = VAR_2->input;

 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_3);
 FUNC_1(VAR_5, VAR_2->keymap[VAR_3], VAR_4);
 FUNC_2(VAR_5);
}
