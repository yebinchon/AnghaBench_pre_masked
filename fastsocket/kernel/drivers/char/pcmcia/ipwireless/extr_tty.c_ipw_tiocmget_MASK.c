
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipw_tty* driver_data; } ;
struct ipw_tty {int open_count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_tty*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct ipw_tty *VAR_4 = VAR_2->driver_data;


 if (!VAR_4)
  return -VAR_1;

 if (!VAR_4->open_count)
  return -VAR_0;

 return FUNC_0(VAR_4);
}
