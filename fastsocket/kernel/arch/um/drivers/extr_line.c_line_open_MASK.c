
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ws_col; int ws_row; } ;
struct tty_struct {size_t index; int count; TYPE_1__ winsize; struct line* driver_data; } ;
struct line {int sigio; int count_lock; int chan_list; int task; struct tty_struct* tty; int valid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct tty_struct*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (struct line*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct line *VAR_2, struct tty_struct *VAR_3)
{
 struct line *VAR_4 = &VAR_2[VAR_3->index];
 int VAR_5 = -VAR_0;

 FUNC_4(&VAR_4->count_lock);
 if (!VAR_4->valid)
  goto out_unlock;

 VAR_5 = 0;
 if (VAR_3->count > 1)
  goto out_unlock;

 FUNC_5(&VAR_4->count_lock);

 VAR_3->driver_data = VAR_4;
 VAR_4->tty = VAR_3;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_4->task, VAR_1);

 if (!VAR_4->sigio) {
  FUNC_1(&VAR_4->chan_list, VAR_3);
  VAR_4->sigio = 1;
 }

 FUNC_2(&VAR_4->chan_list, &VAR_3->winsize.ws_row,
    &VAR_3->winsize.ws_col);

 return VAR_5;

out_unlock:
 FUNC_5(&VAR_4->count_lock);
 return VAR_5;
}
