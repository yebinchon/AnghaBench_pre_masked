
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_device {int state; struct input_dev* dev; } ;
struct input_dev {char* name; char* phys; } ;
typedef enum uinput_state { ____Placeholder_uinput_state } uinput_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct uinput_device*) ;

__attribute__((used)) static void FUNC_4(struct uinput_device *VAR_2)
{
 const char *VAR_3, *VAR_4;
 struct input_dev *VAR_5 = VAR_2->dev;
 enum uinput_state VAR_6 = VAR_2->state;

 VAR_2->state = VAR_1;

 if (VAR_5) {
  VAR_3 = VAR_5->name;
  VAR_4 = VAR_5->phys;
  if (VAR_6 == VAR_0) {
   FUNC_3(VAR_2);
   FUNC_1(VAR_5);
  } else {
   FUNC_0(VAR_5);
  }
  FUNC_2(VAR_3);
  FUNC_2(VAR_4);
  VAR_2->dev = ((void*)0);
 }
}
