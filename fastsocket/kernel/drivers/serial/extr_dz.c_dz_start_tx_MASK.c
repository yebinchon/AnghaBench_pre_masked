
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int line; } ;
struct dz_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct dz_port*,int ) ;
 int FUNC_1 (struct dz_port*,int ,int) ;
 struct dz_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct dz_port *VAR_2 = FUNC_2(VAR_1);
 u16 VAR_3, VAR_4 = 1 << VAR_2->port.line;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 |= VAR_4;
 FUNC_1(VAR_2, VAR_0, VAR_3);
}
