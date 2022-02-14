
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; struct line* driver_data; } ;
struct line {int count_lock; scalar_t__ sigio; int * tty; int valid; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct line*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

void FUNC_4(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct line *VAR_2 = VAR_0->driver_data;





 if (VAR_2 == ((void*)0))
  return;


 FUNC_0(VAR_2);

 FUNC_1(&VAR_2->count_lock);
 if (!VAR_2->valid)
  goto out_unlock;

 if (VAR_0->count > 1)
  goto out_unlock;

 FUNC_2(&VAR_2->count_lock);

 VAR_2->tty = ((void*)0);
 VAR_0->driver_data = ((void*)0);

 if (VAR_2->sigio) {
  FUNC_3(VAR_0);
  VAR_2->sigio = 0;
 }

 return;

out_unlock:
 FUNC_2(&VAR_2->count_lock);
}
