
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sio_port {int ier; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_sio_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2)
{
 struct uart_sio_port *VAR_3 = (struct uart_sio_port *)VAR_2;

 VAR_3->ier |= VAR_1;
 FUNC_0(VAR_3, VAR_0, VAR_3->ier);
}
