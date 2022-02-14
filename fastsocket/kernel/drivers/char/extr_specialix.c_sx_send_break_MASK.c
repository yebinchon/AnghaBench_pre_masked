
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct specialix_port* driver_data; } ;
struct specialix_port {int break_length; int lock; int IER; int COR2; } ;
struct specialix_board {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct specialix_board* FUNC_2 (struct specialix_port*) ;
 int FUNC_3 (struct specialix_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct specialix_board*,int ,int ) ;
 int FUNC_9 (struct specialix_board*) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_10, int VAR_11)
{
 struct specialix_port *VAR_12 = VAR_10->driver_data;
 struct specialix_board *VAR_13 = FUNC_2(VAR_12);
 unsigned long VAR_14;

 FUNC_0();
 if (VAR_11 == 0 || VAR_11 == -1)
  return -VAR_6;

 FUNC_5(&VAR_12->lock, VAR_14);
 VAR_12->break_length = VAR_9 / VAR_7 * VAR_11;
 VAR_12->COR2 |= VAR_5;
 VAR_12->IER |= VAR_8;
 FUNC_4(&VAR_13->lock);
 FUNC_8(VAR_13, VAR_1, FUNC_3(VAR_12));
 FUNC_8(VAR_13, VAR_3, VAR_12->COR2);
 FUNC_8(VAR_13, VAR_4, VAR_12->IER);
 FUNC_6(&VAR_13->lock);
 FUNC_7(&VAR_12->lock, VAR_14);
 FUNC_9(VAR_13);
 FUNC_5(&VAR_13->lock, VAR_14);
 FUNC_8(VAR_13, VAR_2, VAR_0);
 FUNC_7(&VAR_13->lock, VAR_14);
 FUNC_9(VAR_13);

 FUNC_1();
 return 0;
}
