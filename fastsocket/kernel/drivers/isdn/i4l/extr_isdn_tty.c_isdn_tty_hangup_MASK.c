
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_4__ {int flags; int open_wait; int * tty; scalar_t__ count; } ;
typedef TYPE_1__ modem_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_2)
{
 modem_info *VAR_3 = (modem_info *) VAR_2->driver_data;

 if (FUNC_0(VAR_3, VAR_2->name, "isdn_tty_hangup"))
  return;
 FUNC_1(VAR_3);
 VAR_3->count = 0;
 VAR_3->flags &= ~(VAR_1 | VAR_0);
 VAR_3->tty = ((void*)0);
 FUNC_2(&VAR_3->open_wait);
}
