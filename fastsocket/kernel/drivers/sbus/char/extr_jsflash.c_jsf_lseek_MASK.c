
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static loff_t FUNC_2(struct file * VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;

 FUNC_0();
 switch (VAR_3) {
  case 0:
   VAR_1->f_pos = VAR_2;
   VAR_4 = VAR_1->f_pos;
   break;
  case 1:
   VAR_1->f_pos += VAR_2;
   VAR_4 = VAR_1->f_pos;
   break;
  default:
   VAR_4 = -VAR_0;
 }
 FUNC_1();
 return VAR_4;
}
