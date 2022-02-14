
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_sunsab_port {unsigned char pvr_dsr_bit; TYPE_1__* regs; } ;
struct uart_port {int dummy; } ;
struct TYPE_4__ {int star; int vstr; int pvr; } ;
struct TYPE_3__ {TYPE_2__ r; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char FUNC_0 (int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_5)
{
 struct uart_sunsab_port *VAR_6 = (struct uart_sunsab_port *) VAR_5;
 unsigned char VAR_7;
 unsigned int VAR_8;

 VAR_8 = 0;

 VAR_7 = FUNC_0(&VAR_6->regs->r.pvr);
 VAR_8 |= (VAR_7 & VAR_6->pvr_dsr_bit) ? 0 : VAR_4;

 VAR_7 = FUNC_0(&VAR_6->regs->r.vstr);
 VAR_8 |= (VAR_7 & VAR_1) ? 0 : VAR_2;

 VAR_7 = FUNC_0(&VAR_6->regs->r.star);
 VAR_8 |= (VAR_7 & VAR_0) ? VAR_3 : 0;

 return VAR_8;
}
