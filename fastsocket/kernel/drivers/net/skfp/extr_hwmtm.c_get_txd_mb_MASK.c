
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* txd_tx_pipe; int queued_txd_mb; } ;
struct TYPE_6__ {TYPE_1__ hwm; } ;
struct s_smc {TYPE_2__ os; } ;
struct TYPE_7__ {struct TYPE_7__* sm_next; } ;
typedef TYPE_3__ SMbuf ;


 int FUNC_0 (char*,void*,int ,int) ;

__attribute__((used)) static SMbuf *FUNC_1(struct s_smc *VAR_0)
{
 SMbuf *VAR_1 ;

 if ((VAR_1 = VAR_0->os.hwm.txd_tx_pipe)) {
  VAR_0->os.hwm.queued_txd_mb-- ;
  VAR_0->os.hwm.txd_tx_pipe = VAR_1->sm_next ;
 }
 FUNC_0("get_txd_mb: mb = 0x%x",(void *)VAR_1,0,4) ;
 return(VAR_1) ;
}
