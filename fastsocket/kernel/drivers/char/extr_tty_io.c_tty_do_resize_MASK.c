
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct tty_struct {int termios_mutex; struct winsize winsize; int ctrl_lock; int pgrp; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int ) ;
 int FUNC_1 (struct pid*,int ,int) ;
 int FUNC_2 (struct winsize*,struct winsize*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pid*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct tty_struct *VAR_1, struct winsize *VAR_2)
{
 struct pid *VAR_3;
 unsigned long VAR_4;


 FUNC_3(&VAR_1->termios_mutex);
 if (!FUNC_2(VAR_2, &VAR_1->winsize, sizeof(*VAR_2)))
  goto done;


 FUNC_6(&VAR_1->ctrl_lock, VAR_4);
 VAR_3 = FUNC_0(VAR_1->pgrp);
 FUNC_7(&VAR_1->ctrl_lock, VAR_4);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_0, 1);
 FUNC_5(VAR_3);

 VAR_1->winsize = *VAR_2;
done:
 FUNC_4(&VAR_1->termios_mutex);
 return 0;
}
