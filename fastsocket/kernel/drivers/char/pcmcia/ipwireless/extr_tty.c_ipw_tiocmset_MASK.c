
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipw_tty* driver_data; } ;
struct ipw_tty {int open_count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_tty*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_2, struct file *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 struct ipw_tty *VAR_6 = VAR_2->driver_data;


 if (!VAR_6)
  return -VAR_1;

 if (!VAR_6->open_count)
  return -VAR_0;

 return FUNC_0(VAR_6, VAR_4, VAR_5);
}
