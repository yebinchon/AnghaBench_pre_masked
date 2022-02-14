
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uart_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; } ;
struct hso_tiocmget {int waitq; int icount; } ;
struct hso_serial {int serial_lock; struct hso_tiocmget* tiocmget; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (struct uart_icount*,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(struct hso_serial *VAR_9, unsigned long VAR_10)
{
 FUNC_0(VAR_8, VAR_7);
 struct uart_icount VAR_11, VAR_12;
 struct hso_tiocmget *VAR_13;
 int VAR_14;

 VAR_13 = VAR_9->tiocmget;
 if (!VAR_13)
  return -VAR_0;



 FUNC_7(&VAR_9->serial_lock);
 FUNC_2(&VAR_11, &VAR_13->icount, sizeof(struct uart_icount));
 FUNC_8(&VAR_9->serial_lock);
 FUNC_1(&VAR_13->waitq, &VAR_8);
 for (;;) {
  FUNC_7(&VAR_9->serial_lock);
  FUNC_2(&VAR_12, &VAR_13->icount, sizeof(struct uart_icount));
  FUNC_8(&VAR_9->serial_lock);
  FUNC_5(VAR_2);
  if (((VAR_10 & VAR_6) && (VAR_12.rng != VAR_11.rng)) ||
      ((VAR_10 & VAR_5) && (VAR_12.dsr != VAR_11.dsr)) ||
      ((VAR_10 & VAR_4) && (VAR_12.dcd != VAR_11.dcd))) {
   VAR_14 = 0;
   break;
  }
  FUNC_4();

  if (FUNC_6(VAR_7)) {
   VAR_14 = -VAR_1;
   break;
  }
  VAR_11 = VAR_12;
 }
 VAR_7->state = VAR_3;
 FUNC_3(&VAR_13->waitq, &VAR_8);

 return VAR_14;
}
