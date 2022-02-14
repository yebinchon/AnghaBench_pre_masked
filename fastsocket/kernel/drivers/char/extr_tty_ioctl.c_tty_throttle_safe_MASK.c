
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ flow_change; int termios_mutex; TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* throttle ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct tty_struct *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_2->termios_mutex);
 if (!FUNC_4(VAR_0, &VAR_2->flags)) {
  if (VAR_2->flow_change != VAR_1)
   VAR_3 = 1;
  else {
   FUNC_0(VAR_0, &VAR_2->flags);
   if (VAR_2->ops->throttle)
    VAR_2->ops->throttle(VAR_2);
  }
 }
 FUNC_2(&VAR_2->termios_mutex);

 return VAR_3;
}
