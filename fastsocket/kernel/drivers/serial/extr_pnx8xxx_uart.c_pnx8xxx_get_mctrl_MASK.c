
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct pnx8xxx_port {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct pnx8xxx_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_6)
{
 struct pnx8xxx_port *VAR_7 = (struct pnx8xxx_port *)VAR_6;
 unsigned int VAR_8 = VAR_5;
 unsigned int VAR_9;



 VAR_9 = FUNC_0(VAR_7, VAR_0);

 VAR_8 |= VAR_9 & VAR_1 ? VAR_4 : 0;
 VAR_8 |= VAR_9 & VAR_2 ? VAR_3 : 0;

 return VAR_8;
}
