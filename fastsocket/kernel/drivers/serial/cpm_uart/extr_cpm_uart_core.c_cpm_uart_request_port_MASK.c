
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int line; } ;
struct uart_cpm_port {int flags; TYPE_2__* sccp; TYPE_1__* smcp; } ;
struct TYPE_4__ {int scc_gsmrl; int scc_sccm; } ;
struct TYPE_3__ {int smc_smcmr; int smc_smcm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uart_cpm_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct uart_cpm_port*,int ) ;
 int FUNC_5 (struct uart_cpm_port*) ;
 int FUNC_6 (struct uart_cpm_port*) ;
 int FUNC_7 (struct uart_cpm_port*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_9)
{
 struct uart_cpm_port *VAR_10 = (struct uart_cpm_port *)VAR_9;
 int VAR_11;

 FUNC_8("CPM uart[%d]:request port\n", VAR_9->line);

 if (VAR_10->flags & VAR_0)
  return 0;

 if (FUNC_0(VAR_10)) {
  FUNC_3(&VAR_10->smcp->smc_smcm, VAR_5 | VAR_6);
  FUNC_1(&VAR_10->smcp->smc_smcmr, VAR_3 | VAR_4);
 } else {
  FUNC_1(&VAR_10->sccp->scc_sccm, VAR_8 | VAR_7);
  FUNC_2(&VAR_10->sccp->scc_gsmrl, VAR_1 | VAR_2);
 }

 VAR_11 = FUNC_4(VAR_10, 0);

 if (VAR_11)
  return VAR_11;

 FUNC_7(VAR_10);
 if (FUNC_0(VAR_10))
  FUNC_6(VAR_10);
 else
  FUNC_5(VAR_10);

 return 0;
}
