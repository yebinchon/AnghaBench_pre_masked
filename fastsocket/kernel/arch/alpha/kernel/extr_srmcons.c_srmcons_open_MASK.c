
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct srmcons_private* driver_data; } ;
struct TYPE_2__ {unsigned long data; scalar_t__ expires; int function; } ;
struct srmcons_private {int lock; TYPE_1__ timer; struct tty_struct* tty; } ;
struct file {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct srmcons_private**) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct srmcons_private *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);

 if (!VAR_4->tty) {
  VAR_2->driver_data = VAR_4;

  VAR_4->tty = VAR_2;
  VAR_4->timer.function = VAR_1;
  VAR_4->timer.data = (unsigned long)VAR_4;
  VAR_4->timer.expires = VAR_0 + 10;
  FUNC_0(&VAR_4->timer);
 }

 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
