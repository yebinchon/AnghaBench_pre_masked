
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int ldisc_mutex; scalar_t__ ldisc; TYPE_3__* termios; int read_wait; int write_wait; int flags; TYPE_1__* driver; } ;
struct tty_ldisc {TYPE_2__* ops; } ;
struct TYPE_6__ {int c_line; } ;
struct TYPE_5__ {int (* hangup ) (struct tty_struct*) ;int (* write_wakeup ) (struct tty_struct*) ;int (* flush_buffer ) (struct tty_struct*) ;} ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_ldisc*) ;
 int FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*,scalar_t__) ;
 struct tty_ldisc* FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*,int ) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int *,int ) ;

void FUNC_17(struct tty_struct *VAR_5)
{
 struct tty_ldisc *VAR_6;
 int VAR_7 = VAR_5->driver->flags & VAR_4;
 int VAR_8 = 0;






 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6 != ((void*)0)) {

  if (VAR_6->ops->flush_buffer)
   VAR_6->ops->flush_buffer(VAR_5);
  FUNC_8(VAR_5);
  if ((FUNC_7(VAR_3, &VAR_5->flags)) &&
      VAR_6->ops->write_wakeup)
   VAR_6->ops->write_wakeup(VAR_5);
  if (VAR_6->ops->hangup)
   VAR_6->ops->hangup(VAR_5);
  FUNC_9(VAR_6);
 }




 FUNC_16(&VAR_5->write_wait, VAR_2);
 FUNC_16(&VAR_5->read_wait, VAR_1);






 FUNC_2(&VAR_5->ldisc_mutex);
 FUNC_11(VAR_5);




 if (VAR_5->ldisc) {
  if (VAR_7 == 0) {

   if (!FUNC_14(VAR_5, VAR_5->termios->c_line))
    VAR_8 = FUNC_12(VAR_5, VAR_5->ldisc);
   else
    VAR_8 = 1;
  }


  if (VAR_7 || VAR_8) {
   FUNC_0(FUNC_14(VAR_5, VAR_0));
   FUNC_1(FUNC_12(VAR_5, VAR_5->ldisc));
  }
  FUNC_10(VAR_5);
 }
 FUNC_3(&VAR_5->ldisc_mutex);
 if (VAR_7)
  FUNC_15(VAR_5);
}
