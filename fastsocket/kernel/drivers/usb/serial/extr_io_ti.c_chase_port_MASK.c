
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_t ;
struct tty_struct {int write_wait; } ;
struct edgeport_port {int baud_rate; TYPE_2__* port; int ep_lock; int ep_out_buf; } ;
struct TYPE_4__ {TYPE_1__* serial; int port; } ;
struct TYPE_3__ {int interface; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 unsigned long VAR_5 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 unsigned long FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct tty_struct*) ;
 struct tty_struct* FUNC_14 (int *) ;
 int FUNC_15 (struct edgeport_port*) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct edgeport_port *VAR_6, unsigned long VAR_7,
        int VAR_8)
{
 int VAR_9;
 struct tty_struct *VAR_10 = FUNC_14(&VAR_6->port->port);
 wait_queue_t VAR_11;
 unsigned long VAR_12;

 if (!VAR_10)
  return;

 if (!VAR_7)
  VAR_7 = (VAR_1 * VAR_0)/100;


 FUNC_11(&VAR_6->ep_lock, VAR_12);
 FUNC_4(&VAR_11, VAR_4);
 FUNC_1(&VAR_10->write_wait, &VAR_11);
 for (;;) {
  FUNC_9(VAR_2);
  if (FUNC_3(VAR_6->ep_out_buf) == 0
  || VAR_7 == 0 || FUNC_10(VAR_4)
  || !FUNC_16(VAR_6->port->serial->interface))

   break;
  FUNC_12(&VAR_6->ep_lock, VAR_12);
  VAR_7 = FUNC_8(VAR_7);
  FUNC_11(&VAR_6->ep_lock, VAR_12);
 }
 FUNC_9(VAR_3);
 FUNC_7(&VAR_10->write_wait, &VAR_11);
 if (VAR_8)
  FUNC_2(VAR_6->ep_out_buf);
 FUNC_12(&VAR_6->ep_lock, VAR_12);
 FUNC_13(VAR_10);


 VAR_7 += VAR_5;
 while ((long)(VAR_5 - VAR_7) < 0 && !FUNC_10(VAR_4)
 && FUNC_16(VAR_6->port->serial->interface)) {

  if (!FUNC_15(VAR_6))
   break;
  FUNC_6(10);
 }


 if (!FUNC_16(VAR_6->port->serial->interface))
  return;



 VAR_9 = VAR_6->baud_rate;
 if (VAR_9 == 0)
  VAR_9 = 50;
 FUNC_6(FUNC_5(1, FUNC_0(10000, VAR_9)));
}
