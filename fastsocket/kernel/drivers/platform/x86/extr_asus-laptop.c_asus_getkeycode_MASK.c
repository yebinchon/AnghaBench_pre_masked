
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; int keycode; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct key_entry* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_2, int VAR_3, int *VAR_4)
{
 struct key_entry *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 && VAR_5->type == VAR_1) {
  *VAR_4 = VAR_5->keycode;
  return 0;
 }

 return -VAR_0;
}
