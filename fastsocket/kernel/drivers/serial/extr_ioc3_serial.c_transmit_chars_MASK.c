
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int head; int tail; int * buf; } ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct uart_state {TYPE_3__ xmit; TYPE_1__ port; } ;
struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_2__ icount; struct uart_state* state; } ;
struct tty_struct {int dummy; } ;
struct ioc3_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ioc3_port*,char*,int) ;
 struct ioc3_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct ioc3_port*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;
 char *VAR_9;
 struct tty_struct *VAR_10;
 struct ioc3_port *VAR_11 = FUNC_1(VAR_4);
 struct uart_state *VAR_12;

 if (!VAR_4)
  return;
 if (!VAR_11)
  return;

 VAR_12 = VAR_4->state;
 VAR_10 = VAR_12->port.tty;

 if (FUNC_4(&VAR_12->xmit) || FUNC_5(VAR_4)) {

  FUNC_2(VAR_11, VAR_0, 0);
  return;
 }

 VAR_7 = VAR_12->xmit.head;
 VAR_6 = VAR_12->xmit.tail;
 VAR_9 = (char *)&VAR_12->xmit.buf[VAR_6];


 VAR_5 = (VAR_7 < VAR_6) ? (VAR_2 - VAR_6) : (VAR_7 - VAR_6);
 if (VAR_5 > 0) {
  VAR_8 = FUNC_0(VAR_11, VAR_9, VAR_5);
  if (VAR_8 > 0) {

   VAR_5 -= VAR_8;
   VAR_4->icount.tx += VAR_8;

   VAR_6 += VAR_8;
   VAR_6 &= VAR_2 - 1;
   VAR_12->xmit.tail = VAR_6;
   VAR_9 = (char *)&VAR_12->xmit.buf[VAR_6];
  }
 }
 if (FUNC_3(&VAR_12->xmit) < VAR_3)
  FUNC_6(VAR_4);

 if (FUNC_4(&VAR_12->xmit)) {
  FUNC_2(VAR_11, VAR_1, 0);
 } else {
  FUNC_2(VAR_11, VAR_1, 1);
 }
}
