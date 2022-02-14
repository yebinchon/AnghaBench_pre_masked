
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uid_t ;
struct tty_struct {int index; TYPE_3__* driver; } ;
struct tty_audit_buf {int major; int minor; int mutex; int count; } ;
struct TYPE_11__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_10__ {int major; int minor_start; } ;
struct TYPE_9__ {int siglock; } ;
struct TYPE_8__ {int audit_tty; struct tty_audit_buf* tty_audit_buf; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 unsigned int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tty_audit_buf*) ;
 int FUNC_8 (struct tty_audit_buf*) ;
 int FUNC_9 (char*,TYPE_4__*,int ,unsigned int,int,int,char*,int) ;

void FUNC_10(struct tty_struct *VAR_2, char VAR_3)
{
 struct tty_audit_buf *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 FUNC_5(&VAR_1->sighand->siglock);
 VAR_7 = VAR_1->signal->audit_tty;
 VAR_4 = VAR_1->signal->tty_audit_buf;
 if (VAR_4)
  FUNC_0(&VAR_4->count);
 FUNC_6(&VAR_1->sighand->siglock);

 VAR_5 = VAR_2->driver->major;
 VAR_6 = VAR_2->driver->minor_start + VAR_2->index;
 if (VAR_4) {
  FUNC_3(&VAR_4->mutex);
  if (VAR_4->major == VAR_5 && VAR_4->minor == VAR_6)
   FUNC_7(VAR_4);
  FUNC_4(&VAR_4->mutex);
  FUNC_8(VAR_4);
 }

 if (VAR_7 && VAR_0) {
  uid_t VAR_8;
  unsigned int VAR_9;

  VAR_8 = FUNC_1(VAR_1);
  VAR_9 = FUNC_2(VAR_1);
  FUNC_9("ioctl=TIOCSTI", VAR_1, VAR_8, VAR_9, VAR_5,
         VAR_6, &VAR_3, 1);
 }
}
