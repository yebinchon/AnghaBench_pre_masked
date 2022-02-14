
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static loff_t
FUNC_0(struct file * VAR_1, loff_t VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 0:
  VAR_1->f_pos = VAR_2;
  return VAR_1->f_pos;
 case 1:
  VAR_1->f_pos += VAR_2;
  return VAR_1->f_pos;
 default:
  return -VAR_0;
 }
}
