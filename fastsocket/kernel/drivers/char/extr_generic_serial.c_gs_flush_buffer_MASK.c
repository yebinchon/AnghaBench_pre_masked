
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int driver_lock; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;

void FUNC_5(struct tty_struct *VAR_0)
{
 struct gs_port *VAR_1;
 unsigned long VAR_2;

 FUNC_0 ();

 VAR_1 = VAR_0->driver_data;

 if (!VAR_1) return;


 FUNC_2 (&VAR_1->driver_lock, VAR_2);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_3 (&VAR_1->driver_lock, VAR_2);

 FUNC_4(VAR_0);
 FUNC_1 ();
}
