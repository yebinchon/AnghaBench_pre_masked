
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; int name; struct specialix_port* driver_data; } ;
struct specialix_port {scalar_t__ xmit_cnt; int IER; int xmit_buf; } ;
struct specialix_board {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct specialix_board* FUNC_2 (struct specialix_port*) ;
 int FUNC_3 (struct specialix_port*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct specialix_board*,int ,int ) ;
 scalar_t__ FUNC_7 (struct specialix_port*,int ,char*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_3)
{
 struct specialix_port *VAR_4 = VAR_3->driver_data;
 unsigned long VAR_5;
 struct specialix_board *VAR_6 = FUNC_2(VAR_4);

 FUNC_0();

 if (FUNC_7(VAR_4, VAR_3->name, "sx_flush_chars")) {
  FUNC_1();
  return;
 }
 if (VAR_4->xmit_cnt <= 0 || VAR_3->stopped || VAR_3->hw_stopped ||
     !VAR_4->xmit_buf) {
  FUNC_1();
  return;
 }
 FUNC_4(&VAR_6->lock, VAR_5);
 VAR_4->IER |= VAR_2;
 FUNC_6(FUNC_2(VAR_4), VAR_0, FUNC_3(VAR_4));
 FUNC_6(FUNC_2(VAR_4), VAR_1, VAR_4->IER);
 FUNC_5(&VAR_6->lock, VAR_5);

 FUNC_1();
}
