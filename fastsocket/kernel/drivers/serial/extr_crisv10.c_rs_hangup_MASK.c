
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {int * tty; } ;
struct e100_serial {int open_wait; TYPE_1__ port; int flags; scalar_t__ count; scalar_t__ event; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct e100_serial*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct tty_struct *VAR_1)
{
 struct e100_serial * VAR_2 = (struct e100_serial *)VAR_1->driver_data;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 VAR_2->event = 0;
 VAR_2->count = 0;
 VAR_2->flags &= ~VAR_0;
 VAR_2->port.tty = ((void*)0);
 FUNC_2(&VAR_2->open_wait);
}
