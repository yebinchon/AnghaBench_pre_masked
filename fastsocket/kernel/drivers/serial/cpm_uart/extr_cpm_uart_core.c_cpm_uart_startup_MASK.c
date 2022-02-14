
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int irq; int line; } ;
struct uart_cpm_port {int flags; TYPE_2__* sccp; TYPE_1__* smcp; } ;
struct TYPE_4__ {int scc_gsmrl; int scc_sccm; } ;
struct TYPE_3__ {int smc_smcmr; int smc_smcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_cpm_port*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct uart_cpm_port*,int ) ;
 int VAR_8 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,int ,char*,struct uart_port*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct uart_port *VAR_9)
{
 int VAR_10;
 struct uart_cpm_port *VAR_11 = (struct uart_cpm_port *)VAR_9;

 FUNC_5("CPM uart[%d]:startup\n", VAR_9->line);


 if (!(VAR_11->flags & VAR_1)) {

  if (FUNC_0(VAR_11)) {
   FUNC_1(&VAR_11->smcp->smc_smcmr, VAR_4);
   FUNC_3(&VAR_11->smcp->smc_smcm, VAR_6);
  } else {
   FUNC_2(&VAR_11->sccp->scc_gsmrl, VAR_2);
   FUNC_1(&VAR_11->sccp->scc_sccm, VAR_7);
  }
  FUNC_4(VAR_11, VAR_0);
 }

 VAR_10 = FUNC_6(VAR_9->irq, VAR_8, 0, "cpm_uart", VAR_9);
 if (VAR_10)
  return VAR_10;


 if (FUNC_0(VAR_11)) {
  FUNC_9(&VAR_11->smcp->smc_smcm, VAR_6);
  FUNC_7(&VAR_11->smcp->smc_smcmr, (VAR_4 | VAR_5));
 } else {
  FUNC_7(&VAR_11->sccp->scc_sccm, VAR_7);
  FUNC_8(&VAR_11->sccp->scc_gsmrl, (VAR_2 | VAR_3));
 }

 return 0;
}
