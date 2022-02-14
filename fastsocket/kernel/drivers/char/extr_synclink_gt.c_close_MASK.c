
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver; int name; struct slgt_info* driver_data; } ;
struct TYPE_5__ {int flags; int count; int * tty; } ;
struct slgt_info {TYPE_2__ port; int timeout; int device_name; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct slgt_info*,int ,char*) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (TYPE_2__*,struct tty_struct*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct tty_struct*,struct file*) ;
 int FUNC_7 (struct tty_struct*,int ) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct slgt_info *VAR_3 = VAR_1->driver_data;

 if (FUNC_2(VAR_3, VAR_1->name, "close"))
  return;
 FUNC_0(("%s close entry, count=%d\n", VAR_3->device_name, VAR_3->port.count));

 if (FUNC_6(&VAR_3->port, VAR_1, VAR_2) == 0)
  goto cleanup;

  if (VAR_3->port.flags & VAR_0)
   FUNC_7(VAR_1, VAR_3->timeout);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);

 FUNC_3(VAR_3);

 FUNC_5(&VAR_3->port, VAR_1);
 VAR_3->port.tty = ((void*)0);
cleanup:
 FUNC_0(("%s close exit, count=%d\n", VAR_1->driver->name, VAR_3->port.count));
}
