
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static loff_t FUNC_0(struct file *VAR_5, loff_t VAR_6, int VAR_7)
{
 loff_t VAR_8;

 if ((VAR_5->f_flags & VAR_2) != VAR_3)
  return -VAR_1;
 if (VAR_6 % VAR_4)
  return -VAR_1;
 switch (VAR_7) {
 case 0:
  VAR_8 = VAR_6;
  break;
 case 1:
  VAR_8 = VAR_5->f_pos + VAR_6;
  break;
 default:
  return -VAR_0;
 }
 VAR_5->f_pos = VAR_8;
 return VAR_8;
}
