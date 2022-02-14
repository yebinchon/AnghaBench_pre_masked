
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* chars_in_buffer ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;

int FUNC_1(struct tty_struct *VAR_0)
{
 if (VAR_0->ops->chars_in_buffer)
  return VAR_0->ops->chars_in_buffer(VAR_0);
 else
  return 0;
}
