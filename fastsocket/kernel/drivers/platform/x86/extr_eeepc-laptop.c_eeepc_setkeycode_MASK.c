
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; int keycode; } ;
struct input_dev {int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct key_entry* FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_3, int VAR_4, int VAR_5)
{
 struct key_entry *VAR_6;
 int VAR_7;

 if (VAR_5 < 0 || VAR_5 > VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 && VAR_6->type == VAR_2) {
  VAR_7 = VAR_6->keycode;
  VAR_6->keycode = VAR_5;
  FUNC_3(VAR_5, VAR_3->keybit);
  if (!FUNC_1(VAR_7))
   FUNC_0(VAR_7, VAR_3->keybit);
  return 0;
 }

 return -VAR_0;
}
