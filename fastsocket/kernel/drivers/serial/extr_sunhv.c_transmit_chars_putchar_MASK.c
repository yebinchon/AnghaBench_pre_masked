
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx; } ;
struct uart_port {TYPE_1__ icount; } ;
struct circ_buf {size_t tail; int * buf; } ;


 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, struct circ_buf *VAR_3)
{
 while (!FUNC_1(VAR_3)) {
  long VAR_4 = FUNC_0(VAR_3->buf[VAR_3->tail]);

  if (VAR_4 != VAR_0)
   break;

  VAR_3->tail = (VAR_3->tail + 1) & (VAR_1 - 1);
  VAR_2->icount.tx++;
 }
}
