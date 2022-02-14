
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct specialix_port* driver_data; } ;
struct specialix_port {int lock; int MSVR; } ;
struct specialix_board {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct specialix_board* FUNC_3 (struct specialix_port*) ;
 int FUNC_4 (struct specialix_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (struct specialix_board*,int ,int ) ;
 scalar_t__ FUNC_11 (struct specialix_port*,int ,char*) ;
 int FUNC_12 (struct specialix_board*) ;

__attribute__((used)) static void FUNC_13(struct tty_struct *VAR_5)
{
 struct specialix_port *VAR_6 = VAR_5->driver_data;
 struct specialix_board *VAR_7;
 unsigned long VAR_8;

 FUNC_1();

 if (FUNC_11(VAR_6, VAR_5->name, "sx_unthrottle")) {
  FUNC_2();
  return;
 }

 VAR_7 = FUNC_3(VAR_6);

 FUNC_6(&VAR_6->lock, VAR_8);

 if (FUNC_9(VAR_5))
  VAR_6->MSVR |= VAR_4;

 FUNC_5(&VAR_7->lock);
 FUNC_10(VAR_7, VAR_1, FUNC_4(VAR_6));
 FUNC_7(&VAR_7->lock);
 if (FUNC_0(VAR_5)) {
  FUNC_8(&VAR_6->lock, VAR_8);
  FUNC_12(VAR_7);
  FUNC_6(&VAR_7->lock, VAR_8);
  FUNC_10(VAR_7, VAR_2, VAR_0);
  FUNC_8(&VAR_7->lock, VAR_8);
  FUNC_12(VAR_7);
  FUNC_6(&VAR_6->lock, VAR_8);
 }
 FUNC_5(&VAR_7->lock);
 FUNC_10(VAR_7, VAR_3, VAR_6->MSVR);
 FUNC_7(&VAR_7->lock);
 FUNC_8(&VAR_6->lock, VAR_8);

 FUNC_2();
}
