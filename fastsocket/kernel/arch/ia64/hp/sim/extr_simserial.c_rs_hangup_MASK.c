
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct serial_state {scalar_t__ count; } ;
struct async_struct {int flags; int open_wait; int * tty; scalar_t__ event; struct serial_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct async_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct async_struct * VAR_3 = (struct async_struct *)VAR_2->driver_data;
 struct serial_state *VAR_4 = VAR_3->state;





 VAR_4 = VAR_3->state;

 FUNC_1(VAR_2);
 if (VAR_3->flags & VAR_0)
  return;
 FUNC_2(VAR_3);

 VAR_3->event = 0;
 VAR_4->count = 0;
 VAR_3->flags &= ~VAR_1;
 VAR_3->tty = ((void*)0);
 FUNC_3(&VAR_3->open_wait);
}
