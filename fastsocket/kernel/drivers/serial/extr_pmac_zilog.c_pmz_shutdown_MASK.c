
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_3__ {int irq; } ;
struct uart_pmac_port {int* curregs; int mate; int flags; TYPE_1__ port; int * node; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct uart_pmac_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 TYPE_2__* FUNC_7 (struct uart_pmac_port*) ;
 int VAR_11 ;
 int FUNC_8 (struct uart_pmac_port*) ;
 int FUNC_9 (struct uart_pmac_port*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_12 (struct uart_port*) ;
 int FUNC_13 (struct uart_pmac_port*,size_t,int) ;
 int FUNC_14 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_15(struct uart_port *VAR_12)
{
 struct uart_pmac_port *VAR_13 = FUNC_12(VAR_12);
 unsigned long VAR_14;

 FUNC_6("pmz: shutdown()\n");

 if (VAR_13->node == ((void*)0))
  return;

 FUNC_4(&VAR_11);


        FUNC_3(VAR_13->port.irq, VAR_13);

 FUNC_10(&VAR_12->lock, VAR_14);

 VAR_13->flags &= ~VAR_2;

 if (!FUNC_2(VAR_13->mate))
  FUNC_7(VAR_13)->flags &= ~VAR_1;


 if (!FUNC_0(VAR_13)) {
  VAR_13->curregs[VAR_3] &= ~(VAR_0 | VAR_10 | VAR_7);
  FUNC_13(VAR_13, VAR_3, VAR_13->curregs[VAR_3]);
  FUNC_14(VAR_13);
 }

 if (FUNC_1(VAR_13) || FUNC_0(VAR_13)) {
  FUNC_11(&VAR_12->lock, VAR_14);
  FUNC_5(&VAR_11);
  return;
 }


 VAR_13->curregs[VAR_4] &= ~VAR_6;
 VAR_13->curregs[VAR_5] &= ~VAR_9;


 VAR_13->curregs[VAR_5] &= ~VAR_8;
 FUNC_8(VAR_13);


 FUNC_9(VAR_13, 0);

 FUNC_11(&VAR_12->lock, VAR_14);

 FUNC_5(&VAR_11);

 FUNC_6("pmz: shutdown() done.\n");
}
