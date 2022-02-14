
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct pcmcia_device {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct pcmcia_device *VAR_0, struct uart_port *VAR_1)
{
 VAR_1->uartclk = 14745600;
}
