
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct specialix_port* driver_data; } ;
struct specialix_port {int lock; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; } ;
struct specialix_board {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct specialix_board* FUNC_2 (struct specialix_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct specialix_port*,int ,char*) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_0)
{
 struct specialix_port *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;
 struct specialix_board *VAR_3;

 FUNC_0();

 if (FUNC_5(VAR_1, VAR_0->name, "sx_flush_buffer")) {
  FUNC_1();
  return;
 }

 VAR_3 = FUNC_2(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_6(VAR_0);

 FUNC_1();
}
