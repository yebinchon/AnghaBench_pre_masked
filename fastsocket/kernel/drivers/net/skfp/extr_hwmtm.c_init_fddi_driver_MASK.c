
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union s_fp_descr {int dummy; } s_fp_descr ;
typedef int u_char ;
struct TYPE_7__ {TYPE_4__* mb_free; TYPE_4__* mb_start; } ;
struct TYPE_8__ {union s_fp_descr volatile* descr_p; int isr_flag; scalar_t__ rx_len_error; scalar_t__ rx_break; scalar_t__ detec_count; scalar_t__ queued_txd_mb; scalar_t__ queued_rx_frames; void* pass_llc_promisc; scalar_t__ pass_DB; scalar_t__ pass_NSA; scalar_t__ pass_SMT; int * txd_tx_tail; int txd_tx_pipe; TYPE_4__* llc_rx_tail; TYPE_4__* llc_rx_pipe; TYPE_1__ mbuf_pool; } ;
struct TYPE_9__ {TYPE_2__ hwm; } ;
struct s_smc {TYPE_3__ os; } ;
struct TYPE_10__ {int sm_use_count; } ;
typedef TYPE_4__ SMbuf ;


 int FUNC_0 (char*,void*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct s_smc*,int *) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;
 int FUNC_4 (struct s_smc*) ;
 int FUNC_5 (struct s_smc*) ;
 int FUNC_6 (struct s_smc*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_7 (struct s_smc*,TYPE_4__*) ;

void FUNC_8(struct s_smc *VAR_6, u_char *VAR_7)
{
 SMbuf *VAR_8 ;
 int VAR_9 ;

 FUNC_1(VAR_6,VAR_7) ;
 (void)FUNC_2(VAR_6) ;





 VAR_8 = VAR_6->os.hwm.mbuf_pool.mb_start ;
 VAR_6->os.hwm.mbuf_pool.mb_free = (SMbuf *)((void*)0) ;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8->sm_use_count = 1 ;
  FUNC_7(VAR_6,VAR_8) ;
  VAR_8++ ;
 }
 VAR_6->os.hwm.llc_rx_pipe = VAR_6->os.hwm.llc_rx_tail = (SMbuf *)((void*)0) ;
 VAR_6->os.hwm.txd_tx_pipe = *(VAR_6->os.hwm.txd_tx_tail = ((void*)0)) ;
 VAR_6->os.hwm.pass_SMT = VAR_6->os.hwm.pass_NSA = VAR_6->os.hwm.pass_DB = 0 ;
 VAR_6->os.hwm.pass_llc_promisc = VAR_2 ;
 VAR_6->os.hwm.queued_rx_frames = VAR_6->os.hwm.queued_txd_mb = 0 ;
 VAR_6->os.hwm.detec_count = 0 ;
 VAR_6->os.hwm.rx_break = 0 ;
 VAR_6->os.hwm.rx_len_error = 0 ;
 VAR_6->os.hwm.isr_flag = VAR_0 ;




 VAR_9 = 16 - ((long)VAR_6->os.hwm.descr_p & 0xf) ;
 if (VAR_9 != 16) {
  FUNC_0("i = %d",VAR_9,0,3) ;
  VAR_6->os.hwm.descr_p = (union s_fp_descr volatile *)
   ((char *)VAR_6->os.hwm.descr_p+VAR_9) ;
 }
 FUNC_0("pt to descr area = %x",(void *)VAR_6->os.hwm.descr_p,0,3) ;

 FUNC_5(VAR_6) ;
 FUNC_4(VAR_6) ;
 FUNC_6(VAR_6) ;

 FUNC_3(VAR_6) ;
}
