
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ state; int name; struct tty_struct* tty; } ;
typedef TYPE_1__ st_cpc_tty_area ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 st_cpc_tty_area *VAR_2;

 if (!VAR_1 || !VAR_1->driver_data ) {
     FUNC_0("hdlcX-tty: no TTY to flush buffer\n");
  return;
 }

 VAR_2 = (st_cpc_tty_area *) VAR_1->driver_data;

 if ((VAR_2->tty != VAR_1) || (VAR_2->state != VAR_0)) {
  FUNC_0("%s: TTY is not opened\n",VAR_2->name);
  return;
 }

 FUNC_0("%s: call wake_up_interruptible\n",VAR_2->name);

 FUNC_1(VAR_1);
 return;
}
