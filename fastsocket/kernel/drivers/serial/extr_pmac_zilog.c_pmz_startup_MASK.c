
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_5__ {int irq; } ;
struct uart_pmac_port {int* curregs; TYPE_3__* dev; TYPE_1__ port; int flags; int * node; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_7__ {TYPE_2__ ofdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (struct uart_pmac_port*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 TYPE_4__* FUNC_10 (struct uart_pmac_port*) ;
 int VAR_10 ;
 int FUNC_11 (struct uart_pmac_port*) ;
 int VAR_11 ;
 int FUNC_12 (struct uart_pmac_port*,int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ,char*,struct uart_pmac_port*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_16 (struct uart_port*) ;
 int FUNC_17 (struct uart_pmac_port*,size_t,int) ;

__attribute__((used)) static int FUNC_18(struct uart_port *VAR_12)
{
 struct uart_pmac_port *VAR_13 = FUNC_16(VAR_12);
 unsigned long VAR_14;
 int VAR_15 = 0;

 FUNC_9("pmz: startup()\n");

 if (FUNC_0(VAR_13))
  return -VAR_0;
 if (VAR_13->node == ((void*)0))
  return -VAR_1;

 FUNC_7(&VAR_11);

 VAR_13->flags |= VAR_7;




 if (!FUNC_1(VAR_13)) {
  FUNC_14(&VAR_12->lock, VAR_14);
  VAR_15 = FUNC_4(VAR_13);
  FUNC_15(&VAR_12->lock, VAR_14);
 }

 FUNC_10(VAR_13)->flags |= VAR_6;
 if (FUNC_13(VAR_13->port.irq, VAR_10, VAR_5, "PowerMac Zilog", VAR_13)) {
  FUNC_5(&VAR_13->dev->ofdev.dev,
   "Unable to register zs interrupt handler.\n");
  FUNC_12(VAR_13, 0);
  FUNC_8(&VAR_11);
  return -VAR_2;
 }

 FUNC_8(&VAR_11);




 if (VAR_15 != 0) {
  FUNC_9("pmz: delaying %d ms\n", VAR_15);
  FUNC_6(VAR_15);
 }


 if (FUNC_3(VAR_13))
  FUNC_11(VAR_13);


 FUNC_14(&VAR_12->lock, VAR_14);
 VAR_13->curregs[VAR_8] |= VAR_4 | VAR_9;
 if (!FUNC_2(VAR_13))
  VAR_13->curregs[VAR_8] |= VAR_3;
 FUNC_17(VAR_13, VAR_8, VAR_13->curregs[VAR_8]);
        FUNC_15(&VAR_12->lock, VAR_14);

 FUNC_9("pmz: startup() done.\n");

 return 0;
}
