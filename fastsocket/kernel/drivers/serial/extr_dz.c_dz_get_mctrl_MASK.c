
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ line; } ;
struct dz_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct dz_port*,int ) ;
 struct dz_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_6)
{



 struct dz_port *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8 = VAR_3 | VAR_5 | VAR_4;

 if (VAR_7->port.line == VAR_0) {
  if (FUNC_0(VAR_7, VAR_2) & VAR_1)
   VAR_8 &= ~VAR_5;
 }

 return VAR_8;
}
