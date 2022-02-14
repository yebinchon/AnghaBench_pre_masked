
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx; } ;
struct TYPE_6__ {TYPE_2__ icount; TYPE_1__* state; } ;
struct uart_sio_port {int ier; TYPE_3__ port; } ;
struct uart_port {int dummy; } ;
struct circ_buf {int* buf; size_t tail; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_sio_port*,int ) ;
 int FUNC_1 (struct uart_sio_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_6)
{
 struct uart_sio_port *VAR_7 = (struct uart_sio_port *)VAR_6;

 if (!(VAR_7->ier & VAR_2)) {
  VAR_7->ier |= VAR_2;
  FUNC_1(VAR_7, VAR_1, VAR_7->ier);
 }

}
