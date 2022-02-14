
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps_key_entry {int keycode; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct tps_key_entry* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_1, int VAR_2, int *VAR_3)
{
 struct tps_key_entry *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_0;

 *VAR_3 = VAR_4->keycode;
 return 0;
}
