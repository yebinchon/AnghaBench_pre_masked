
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct pnx8xxx_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct pnx8xxx_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3)
{
 struct pnx8xxx_port *VAR_4 = (struct pnx8xxx_port *)VAR_3;

 return FUNC_0(VAR_4, VAR_0) & VAR_1 ? 0 : VAR_2;
}
