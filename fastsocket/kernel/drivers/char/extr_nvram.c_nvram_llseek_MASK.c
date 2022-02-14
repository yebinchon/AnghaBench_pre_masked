
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 FUNC_0();
 switch (VAR_4) {
 case 0:

  break;
 case 1:
  VAR_3 += VAR_2->f_pos;
  break;
 case 2:
  VAR_3 += VAR_1;
  break;
 }
 FUNC_1();
 return (VAR_3 >= 0) ? (VAR_2->f_pos = VAR_3) : -VAR_0;
}
