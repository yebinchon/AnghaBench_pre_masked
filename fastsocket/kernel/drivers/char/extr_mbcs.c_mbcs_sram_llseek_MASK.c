
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




__attribute__((used)) static loff_t FUNC_0(struct file * VAR_2, loff_t VAR_3, int VAR_4)
{
 loff_t VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_5 = VAR_3;
  break;

 case 130:
  VAR_5 = VAR_2->f_pos + VAR_3;
  break;

 case 129:
  VAR_5 = VAR_1 + VAR_3;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_5 < 0)
  return -VAR_0;

 VAR_2->f_pos = VAR_5;

 return VAR_5;
}
