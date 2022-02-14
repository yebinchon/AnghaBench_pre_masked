
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
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2)
{
 st_cpc_tty_area *VAR_3;

 if (!VAR_2 || !VAR_2->driver_data ) {
  FUNC_0("hdlcX-tty: no TTY to chars in buffer\n");
  return -VAR_1;
 }

 VAR_3 = (st_cpc_tty_area *) VAR_2->driver_data;

 if ((VAR_3->tty != VAR_2) || (VAR_3->state != VAR_0)) {
  FUNC_0("%s: TTY is not opened\n",VAR_3->name);
  return -VAR_1;
 }

 return(0);
}
