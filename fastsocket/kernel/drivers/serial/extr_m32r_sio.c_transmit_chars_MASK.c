
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {int fifosize; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct uart_sio_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct uart_sio_port*,int ) ;
 int FUNC_3 (struct uart_sio_port*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(struct uart_sio_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->port.state->xmit;
 int VAR_7;

 if (VAR_5->port.x_char) {

  FUNC_3(VAR_5, VAR_2, VAR_5->port.x_char);

  VAR_5->port.icount.tx++;
  VAR_5->port.x_char = 0;
  return;
 }
 if (FUNC_5(VAR_6) || FUNC_6(&VAR_5->port)) {
  FUNC_1(&VAR_5->port);
  return;
 }

 VAR_7 = VAR_5->port.fifosize;
 do {
  FUNC_3(VAR_5, VAR_2, VAR_6->buf[VAR_6->tail]);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_3 - 1);
  VAR_5->port.icount.tx++;
  if (FUNC_5(VAR_6))
   break;
  while (!(FUNC_2(VAR_5, VAR_0) & VAR_1));

 } while (--VAR_7 > 0);

 if (FUNC_4(VAR_6) < VAR_4)
  FUNC_7(&VAR_5->port);

 FUNC_0("THRE...");

 if (FUNC_5(VAR_6))
  FUNC_1(&VAR_5->port);
}
