
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {scalar_t__ type; char x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned char* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned short FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,unsigned short) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (struct circ_buf*) ;
 unsigned int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_7)
{
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 unsigned int VAR_9 = FUNC_9(VAR_7);
 unsigned short VAR_10;
 unsigned short VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(VAR_7, VAR_3);
 if (!(VAR_10 & FUNC_0(VAR_7))) {
  VAR_11 = FUNC_2(VAR_7, VAR_2);
  if (FUNC_8(VAR_8))
   VAR_11 &= ~VAR_1;
  else
   VAR_11 |= VAR_1;
  FUNC_3(VAR_7, VAR_2, VAR_11);
  return;
 }

 if (VAR_7->type == VAR_0)
  VAR_12 = FUNC_5(VAR_7);
 else
  VAR_12 = FUNC_6(VAR_7);

 do {
  unsigned char VAR_13;

  if (VAR_7->x_char) {
   VAR_13 = VAR_7->x_char;
   VAR_7->x_char = 0;
  } else if (!FUNC_8(VAR_8) && !VAR_9) {
   VAR_13 = VAR_8->buf[VAR_8->tail];
   VAR_8->tail = (VAR_8->tail + 1) & (VAR_5 - 1);
  } else {
   break;
  }

  FUNC_3(VAR_7, VAR_4, VAR_13);

  VAR_7->icount.tx++;
 } while (--VAR_12 > 0);

 FUNC_3(VAR_7, VAR_3, FUNC_1(VAR_7));

 if (FUNC_7(VAR_8) < VAR_6)
  FUNC_10(VAR_7);
 if (FUNC_8(VAR_8)) {
  FUNC_4(VAR_7);
 } else {
  VAR_11 = FUNC_2(VAR_7, VAR_2);

  if (VAR_7->type != VAR_0) {
   FUNC_2(VAR_7, VAR_3);
   FUNC_3(VAR_7, VAR_3, FUNC_1(VAR_7));
  }

  VAR_11 |= VAR_1;
  FUNC_3(VAR_7, VAR_2, VAR_11);
 }
}
