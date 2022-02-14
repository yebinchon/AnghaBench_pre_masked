
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; struct srmcons_private* driver_data; } ;
struct srmcons_private {int lock; int timer; int * tty; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct srmcons_private *VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (VAR_0->count == 1) {
  VAR_2->tty = ((void*)0);
  FUNC_0(&VAR_2->timer);
 }

 FUNC_2(&VAR_2->lock, VAR_3);
}
