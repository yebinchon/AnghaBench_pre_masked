
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {scalar_t__ icanon; int index; TYPE_3__* driver; } ;
struct tty_audit_buf {int major; int minor; scalar_t__ icanon; scalar_t__ valid; scalar_t__ data; int mutex; } ;
struct TYPE_8__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ subtype; int major; int minor_start; } ;
struct TYPE_6__ {int siglock; } ;
struct TYPE_5__ {int audit_tty_log_passwd; } ;


 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (scalar_t__,unsigned char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct tty_audit_buf* FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct tty_audit_buf*) ;
 int FUNC_8 (struct tty_audit_buf*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct tty_struct *VAR_4, unsigned char *VAR_5,
   size_t VAR_6)
{
 struct tty_audit_buf *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 if (FUNC_9(VAR_6 == 0))
  return;

 FUNC_4(&VAR_3->sighand->siglock, VAR_11);
 VAR_10 = VAR_3->signal->audit_tty_log_passwd;
 FUNC_5(&VAR_3->sighand->siglock, VAR_11);
 if (!VAR_10 && VAR_4->icanon && !FUNC_0(VAR_4))
  return;

 if (VAR_4->driver->type == VAR_2
     && VAR_4->driver->subtype == VAR_1)
  return;

 VAR_7 = FUNC_6(VAR_4);
 if (!VAR_7)
  return;

 FUNC_2(&VAR_7->mutex);
 VAR_8 = VAR_4->driver->major;
 VAR_9 = VAR_4->driver->minor_start + VAR_4->index;
 if (VAR_7->major != VAR_8 || VAR_7->minor != VAR_9
     || VAR_7->icanon != VAR_4->icanon) {
  FUNC_7(VAR_7);
  VAR_7->major = VAR_8;
  VAR_7->minor = VAR_9;
  VAR_7->icanon = VAR_4->icanon;
 }
 do {
  size_t VAR_12;

  VAR_12 = VAR_0 - VAR_7->valid;
  if (VAR_12 > VAR_6)
   VAR_12 = VAR_6;
  FUNC_1(VAR_7->data + VAR_7->valid, VAR_5, VAR_12);
  VAR_7->valid += VAR_12;
  VAR_5 += VAR_12;
  VAR_6 -= VAR_12;
  if (VAR_7->valid == VAR_0)
   FUNC_7(VAR_7);
 } while (VAR_6 != 0);
 FUNC_3(&VAR_7->mutex);
 FUNC_8(VAR_7);
}
