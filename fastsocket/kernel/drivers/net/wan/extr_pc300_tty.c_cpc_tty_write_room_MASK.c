
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ state; int name; struct tty_struct* tty; } ;
typedef TYPE_1__ st_cpc_tty_area ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3)
{
 st_cpc_tty_area *VAR_4;

 if (!VAR_3 || !VAR_3->driver_data ) {
  FUNC_0("hdlcX-tty: no TTY to write room\n");
  return -VAR_2;
 }

 VAR_4 = (st_cpc_tty_area *) VAR_3->driver_data;

 if ((VAR_4->tty != VAR_3) || (VAR_4->state != VAR_1)) {
  FUNC_0("%s: TTY is not opened\n",VAR_4->name);
  return -VAR_2;
 }

 FUNC_0("%s: write room\n",VAR_4->name);

 return VAR_0;
}
