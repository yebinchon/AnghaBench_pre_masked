
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_port {int * regs; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zs_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct zs_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct zs_port *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 < 3)
  VAR_5->regs[5] |= VAR_1;
 else
  VAR_5->regs[5] &= ~VAR_1;
 FUNC_1(VAR_5, VAR_0, VAR_5->regs[5]);
}
