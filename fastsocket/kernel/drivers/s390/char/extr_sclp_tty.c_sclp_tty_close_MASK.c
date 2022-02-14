
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; } ;
struct file {int dummy; } ;


 int * VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct tty_struct *VAR_1, struct file *VAR_2)
{
 if (VAR_1->count > 1)
  return;
 VAR_0 = ((void*)0);
}
