
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct async_struct* driver_data; } ;
struct serial_state {scalar_t__ count; } ;
struct async_struct {int open_wait; int * tty; int flags; scalar_t__ event; struct serial_state* state; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct async_struct*,int ,char*) ;
 int FUNC_2 (struct async_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct async_struct * VAR_2 = VAR_1->driver_data;
 struct serial_state *VAR_3 = VAR_2->state;

 if (FUNC_1(VAR_2, VAR_1->name, "rs_hangup"))
  return;

 VAR_3 = VAR_2->state;

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 VAR_2->event = 0;
 VAR_3->count = 0;
 VAR_2->flags &= ~VAR_0;
 VAR_2->tty = ((void*)0);
 FUNC_3(&VAR_2->open_wait);
}
