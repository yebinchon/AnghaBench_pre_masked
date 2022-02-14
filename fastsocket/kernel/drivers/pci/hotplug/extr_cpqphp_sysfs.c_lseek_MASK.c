
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; struct ctrl_dbg* private_data; } ;
struct ctrl_dbg {scalar_t__ size; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct ctrl_dbg *VAR_4;
 loff_t VAR_5 = -1;

 FUNC_0();
 VAR_4 = VAR_1->private_data;

 switch (VAR_3) {
 case 0:
  VAR_5 = VAR_2;
  break;
 case 1:
  VAR_5 = VAR_1->f_pos + VAR_2;
  break;
 }
 if (VAR_5 < 0 || VAR_5 > VAR_4->size) {
  FUNC_1();
  return -VAR_0;
 }
 FUNC_1();
 return (VAR_1->f_pos = VAR_5);
}
