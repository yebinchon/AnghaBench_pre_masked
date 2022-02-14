
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct uart_sunsu_port {int ier; int acr; TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_sunsu_port*,int ,int) ;
 int FUNC_1 (struct uart_sunsu_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5)
{
 struct uart_sunsu_port *VAR_6 = (struct uart_sunsu_port *) VAR_5;

 if (!(VAR_6->ier & VAR_4)) {
  VAR_6->ier |= VAR_4;
  FUNC_1(VAR_6, VAR_3, VAR_6->ier);
 }




 if (VAR_6->port.type == VAR_0 && VAR_6->acr & VAR_2) {
  VAR_6->acr &= ~VAR_2;
  FUNC_0(VAR_6, VAR_1, VAR_6->acr);
 }
}
