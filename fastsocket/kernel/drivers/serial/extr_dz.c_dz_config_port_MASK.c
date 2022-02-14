
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; } ;
struct dz_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct dz_port*) ;
 struct dz_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2, int VAR_3)
{
 struct dz_port *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3 & VAR_1) {
  if (FUNC_0(VAR_2))
   return;

  VAR_2->type = VAR_0;

  FUNC_1(VAR_4);
 }
}
