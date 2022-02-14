
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_type; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct file_lock *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 128:
 case 129:
  VAR_1->fl_type = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
