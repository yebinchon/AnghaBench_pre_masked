
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; struct zs_port* zport; } ;
struct zs_port {int* regs; struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct zs_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct zs_port*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_11)
{
 struct zs_port *VAR_12 = FUNC_2(VAR_11);
 struct zs_scc *VAR_13 = VAR_12->scc;
 struct zs_port *VAR_14 = &VAR_13->zport[VAR_10];

 FUNC_0(&VAR_13->zlock);
 VAR_12->regs[15] &= ~VAR_0;
 VAR_12->regs[1] &= ~(VAR_7 | VAR_9);
 VAR_12->regs[1] |= VAR_6;

 if (VAR_12 != VAR_14) {

  VAR_14->regs[15] &= ~(VAR_2 | VAR_8);
  FUNC_3(VAR_14, VAR_5, VAR_14->regs[15]);
  if (!(VAR_14->regs[15] & VAR_0)) {
   VAR_14->regs[1] &= ~VAR_3;
   FUNC_3(VAR_14, VAR_4, VAR_14->regs[1]);
  }


  VAR_12->regs[15] &= ~(VAR_2 | VAR_1);
  VAR_12->regs[1] &= ~VAR_3;
 } else {

  if (!(VAR_12->regs[15] & (VAR_2 | VAR_8)))
   VAR_12->regs[1] &= ~VAR_3;
 }

 FUNC_3(VAR_12, VAR_5, VAR_12->regs[15]);
 FUNC_3(VAR_12, VAR_4, VAR_12->regs[1]);
 FUNC_1(&VAR_13->zlock);
}
