
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct file {int dummy; } ;
struct acm {int dummy; } ;


 int FUNC_0 (struct acm*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2, struct file *VAR_3,
     unsigned int VAR_4, unsigned long VAR_5)
{
 struct acm *VAR_6 = VAR_2->driver_data;

 if (!FUNC_0(VAR_6))
  return -VAR_0;

 return -VAR_1;
}
