
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ line; } ;
struct dz_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct dz_port*,int ) ;
 int FUNC_1 (struct dz_port*,int ,int ) ;
 struct dz_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4, unsigned int VAR_5)
{



 struct dz_port *VAR_6 = FUNC_2(VAR_4);
 u16 VAR_7;

 if (VAR_6->port.line == VAR_0) {
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  if (VAR_5 & VAR_3)
   VAR_7 &= ~VAR_1;
  else
   VAR_7 |= VAR_1;
  FUNC_1(VAR_6, VAR_2, VAR_7);
 }
}
