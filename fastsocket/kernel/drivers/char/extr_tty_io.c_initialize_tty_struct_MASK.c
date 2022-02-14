
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tail; int head; } ;
struct tty_struct {int index; int name; int ops; struct tty_driver* driver; int SAK_work; int tty_files; int ctrl_lock; int read_lock; int echo_lock; int output_lock; int atomic_write_lock; int atomic_read_lock; int hangup_work; int read_wait; int write_wait; int ldisc_mutex; int termios_mutex; TYPE_1__ buf; int overrun_time; int * pgrp; int * session; int magic; int kref; } ;
struct tty_driver {int ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_driver*,int,int ) ;

void FUNC_10(struct tty_struct *VAR_4,
  struct tty_driver *VAR_5, int VAR_6)
{
 FUNC_4(VAR_4, 0, sizeof(struct tty_struct));
 FUNC_3(&VAR_4->kref);
 VAR_4->magic = VAR_0;
 FUNC_8(VAR_4);
 VAR_4->session = ((void*)0);
 VAR_4->pgrp = ((void*)0);
 VAR_4->overrun_time = VAR_3;
 VAR_4->buf.head = *(VAR_4->buf.tail = ((void*)0));
 FUNC_7(VAR_4);
 FUNC_5(&VAR_4->termios_mutex);
 FUNC_5(&VAR_4->ldisc_mutex);
 FUNC_2(&VAR_4->write_wait);
 FUNC_2(&VAR_4->read_wait);
 FUNC_1(&VAR_4->hangup_work, VAR_2);
 FUNC_5(&VAR_4->atomic_read_lock);
 FUNC_5(&VAR_4->atomic_write_lock);
 FUNC_5(&VAR_4->output_lock);
 FUNC_5(&VAR_4->echo_lock);
 FUNC_6(&VAR_4->read_lock);
 FUNC_6(&VAR_4->ctrl_lock);
 FUNC_0(&VAR_4->tty_files);
 FUNC_1(&VAR_4->SAK_work, VAR_1);

 VAR_4->driver = VAR_5;
 VAR_4->ops = VAR_5->ops;
 VAR_4->index = VAR_6;
 FUNC_9(VAR_5, VAR_6, VAR_4->name);
}
