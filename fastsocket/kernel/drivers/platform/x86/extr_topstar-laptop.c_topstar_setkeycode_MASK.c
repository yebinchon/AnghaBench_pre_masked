
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps_key_entry {int keycode; } ;
struct input_dev {int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 struct tps_key_entry* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct tps_key_entry *VAR_5;
 int VAR_6;

 if (VAR_4 < 0 || VAR_4 > VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->keycode;
 VAR_5->keycode = VAR_4;
 FUNC_1(VAR_4, VAR_2->keybit);
 if (!FUNC_2(VAR_6))
  FUNC_0(VAR_6, VAR_2->keybit);
 return 0;
}
