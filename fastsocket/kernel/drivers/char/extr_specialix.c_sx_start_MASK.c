
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct specialix_port* driver_data; } ;
struct specialix_port {int IER; int lock; scalar_t__ xmit_buf; scalar_t__ xmit_cnt; } ;
struct specialix_board {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct specialix_board* FUNC_2 (struct specialix_port*) ;
 int FUNC_3 (struct specialix_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct specialix_board*,int ,int) ;
 scalar_t__ FUNC_9 (struct specialix_port*,int ,char*) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_3)
{
 struct specialix_port *VAR_4 = VAR_3->driver_data;
 struct specialix_board *VAR_5;
 unsigned long VAR_6;

 FUNC_0();

 if (FUNC_9(VAR_4, VAR_3->name, "sx_start")) {
  FUNC_1();
  return;
 }

 VAR_5 = FUNC_2(VAR_4);

 FUNC_5(&VAR_4->lock, VAR_6);
 if (VAR_4->xmit_cnt && VAR_4->xmit_buf && !(VAR_4->IER & VAR_2)) {
  VAR_4->IER |= VAR_2;
  FUNC_4(&VAR_5->lock);
  FUNC_8(VAR_5, VAR_0, FUNC_3(VAR_4));
  FUNC_8(VAR_5, VAR_1, VAR_4->IER);
  FUNC_6(&VAR_5->lock);
 }
 FUNC_7(&VAR_4->lock, VAR_6);

 FUNC_1();
}
