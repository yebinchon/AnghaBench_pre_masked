
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct uart_8250_port {int ier; int bugs; unsigned char lsr_saved_flags; int acr; TYPE_1__ port; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (struct uart_8250_port*,int ,int) ;
 unsigned char FUNC_1 (struct uart_8250_port*,int ) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;
 int FUNC_3 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_11)
{
 struct uart_8250_port *VAR_12 = (struct uart_8250_port *)VAR_11;

 if (!(VAR_12->ier & VAR_7)) {
  VAR_12->ier |= VAR_7;
  FUNC_2(VAR_12, VAR_6, VAR_12->ier);

  if (VAR_12->bugs & VAR_5) {
   unsigned char VAR_13;
   VAR_13 = FUNC_1(VAR_12, VAR_8);
   VAR_12->lsr_saved_flags |= VAR_13 & VAR_0;
   if ((VAR_12->port.type == VAR_2) ?
    (VAR_13 & VAR_10) :
    (VAR_13 & VAR_9))
    FUNC_3(VAR_12);
  }
 }




 if (VAR_12->port.type == VAR_1 && VAR_12->acr & VAR_4) {
  VAR_12->acr &= ~VAR_4;
  FUNC_0(VAR_12, VAR_3, VAR_12->acr);
 }
}
