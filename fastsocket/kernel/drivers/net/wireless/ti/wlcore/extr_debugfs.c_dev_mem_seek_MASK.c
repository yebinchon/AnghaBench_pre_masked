
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;



__attribute__((used)) static loff_t FUNC_0(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;


 if (VAR_2 % 4)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_1->f_pos = VAR_2;
  VAR_4 = VAR_1->f_pos;
  break;
 case 129:
  VAR_1->f_pos += VAR_2;
  VAR_4 = VAR_1->f_pos;
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
