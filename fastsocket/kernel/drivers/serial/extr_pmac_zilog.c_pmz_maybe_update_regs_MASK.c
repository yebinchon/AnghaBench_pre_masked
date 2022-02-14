
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int curregs; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct uart_pmac_port*,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_pmac_port *VAR_1)
{
        if (!FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_1)) {
   VAR_1->flags |= VAR_0;
  } else {
   FUNC_2("pmz: maybe_update_regs: updating\n");
   FUNC_3(VAR_1, VAR_1->curregs);
  }
 }
}
