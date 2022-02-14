
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 loff_t VAR_5;

 FUNC_0(&VAR_1);
 switch (VAR_4) {
 case 0:
  VAR_2->f_pos = VAR_3;
  VAR_5 = VAR_2->f_pos;
  break;
 case 1:
  VAR_2->f_pos += VAR_3;
  VAR_5 = VAR_2->f_pos;
  break;
 default:
  VAR_5 = -VAR_0;
 }
 FUNC_1(&VAR_1);
 return VAR_5;
}
