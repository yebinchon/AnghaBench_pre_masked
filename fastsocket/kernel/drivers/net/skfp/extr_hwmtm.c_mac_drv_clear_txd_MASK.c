
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union s_fp_descr {int dummy; } s_fp_descr ;
typedef int u_long ;
struct s_smt_tx_queue {int tx_free; scalar_t__ tx_used; struct s_smt_fp_txd volatile* tx_curr_get; } ;
typedef struct s_smt_fp_txd {struct s_smt_fp_txd volatile* txd_next; int txd_tbctrl; } volatile s_smt_fp_txd ;
struct TYPE_3__ {struct s_smt_tx_queue** tx; } ;
struct TYPE_4__ {TYPE_1__ fp; } ;
struct s_smc {TYPE_2__ hw; } ;
typedef int SMbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct s_smt_fp_txd volatile*,int ) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct s_smc*,union s_fp_descr volatile*,int) ;
 int * FUNC_5 (struct s_smc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct s_smc*,struct s_smt_fp_txd volatile*) ;
 int FUNC_8 (struct s_smc*,int *) ;

__attribute__((used)) static void FUNC_9(struct s_smc *VAR_7)
{
 struct s_smt_tx_queue *VAR_8 ;
 struct s_smt_fp_txd volatile *VAR_9 ;
 struct s_smt_fp_txd volatile *VAR_10 = ((void*)0) ;
 SMbuf *VAR_11 ;
 u_long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 FUNC_3("THcB",0,0,0) ;
 for (VAR_13 = VAR_6; VAR_13 <= VAR_5; VAR_13++) {
  VAR_8 = VAR_7->hw.fp.tx[VAR_13] ;
  VAR_9 = VAR_8->tx_curr_get ;
  FUNC_1("clear_txd: QUEUE = %d (0=sync/1=async)",VAR_13,0,5) ;

  for ( ; ; ) {
   VAR_14 = 0 ;

   do {
    FUNC_2(VAR_9,VAR_3) ;
    FUNC_1("check OWN/EOF bit of TxD 0x%x",VAR_9,0,5) ;
    VAR_12 = FUNC_6(FUNC_0(VAR_9->txd_tbctrl));

    if (VAR_12 & VAR_1 || !VAR_8->tx_used){
     FUNC_1("End of TxDs queue %d",VAR_13,0,4) ;
     goto free_next_queue ;
    }
    VAR_9 = VAR_9->txd_next ;
    VAR_14++ ;
   } while (!(VAR_12 & VAR_0)) ;

   VAR_9 = VAR_8->tx_curr_get ;
   for (VAR_15 = VAR_14; VAR_15; VAR_15--) {
    VAR_12 = FUNC_6(VAR_9->txd_tbctrl) ;
    FUNC_4(VAR_7,
     (union s_fp_descr volatile *) VAR_9,
     (int) (VAR_4 |
     ((VAR_12 & VAR_2) >> 18))) ;
    VAR_10 = VAR_9 ;
    VAR_9 = VAR_9->txd_next ;
   }

   if (VAR_12 & VAR_2) {
    VAR_11 = FUNC_5(VAR_7) ;
    FUNC_8(VAR_7,VAR_11) ;
   }
   else {

    FUNC_1("mac_drv_tx_comp for TxD 0x%x",VAR_10,0,4) ;
    FUNC_7(VAR_7,VAR_10) ;





   }
   VAR_8->tx_curr_get = VAR_9 ;
   VAR_8->tx_free += VAR_14 ;
   VAR_8->tx_used -= VAR_14 ;
  }
free_next_queue: ;
 }
 FUNC_3("THcE",0,0,0) ;
}
