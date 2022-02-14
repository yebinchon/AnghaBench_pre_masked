
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct fc_lport {int host; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {scalar_t__ oxid; scalar_t__ rxid; scalar_t__ sid; int esb_stat; int ex_lock; int ex_refcnt; int timeout_work; } ;
struct fc_els_rrq {int rrq_rx_id; int rrq_ox_id; int rrq_s_id; } ;
typedef enum fc_els_rjt_explan { ____Placeholder_fc_els_rjt_explan } fc_els_rjt_explan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct fc_exch* FUNC_2 (struct fc_lport*,scalar_t__) ;
 int FUNC_3 (struct fc_exch*) ;
 struct fc_els_rrq* FUNC_4 (struct fc_frame*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (struct fc_frame*,int ,int) ;
 struct fc_lport* FUNC_8 (struct fc_frame*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct fc_frame *VAR_7)
{
 struct fc_lport *VAR_8;
 struct fc_exch *VAR_9 = ((void*)0);
 struct fc_els_rrq *VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 enum fc_els_rjt_explan VAR_13;

 VAR_8 = FUNC_8(VAR_7);
 VAR_10 = FUNC_4(VAR_7, sizeof(*VAR_10));
 VAR_13 = VAR_0;
 if (!VAR_10)
  goto reject;




 VAR_11 = FUNC_9(VAR_10->rrq_s_id);
 VAR_12 = FUNC_5(VAR_8->host) == VAR_11 ?
   FUNC_10(VAR_10->rrq_ox_id) : FUNC_10(VAR_10->rrq_rx_id);
 VAR_9 = FUNC_2(VAR_8, VAR_12);
 VAR_13 = VAR_1;
 if (!VAR_9)
  goto reject;
 FUNC_11(&VAR_9->ex_lock);
 if (VAR_9->oxid != FUNC_10(VAR_10->rrq_ox_id))
  goto unlock_reject;
 if (VAR_9->rxid != FUNC_10(VAR_10->rrq_rx_id) &&
     VAR_9->rxid != VAR_6)
  goto unlock_reject;
 VAR_13 = VAR_2;
 if (VAR_9->sid != VAR_11)
  goto unlock_reject;




 if (VAR_9->esb_stat & VAR_5) {
  VAR_9->esb_stat &= ~VAR_5;
  FUNC_0(&VAR_9->ex_refcnt);
 }
 if (VAR_9->esb_stat & VAR_4) {
  if (FUNC_1(&VAR_9->timeout_work))
   FUNC_0(&VAR_9->ex_refcnt);
 }

 FUNC_12(&VAR_9->ex_lock);




 FUNC_6(VAR_7);
 goto out;

unlock_reject:
 FUNC_12(&VAR_9->ex_lock);
reject:
 FUNC_7(VAR_7, VAR_3, VAR_13);
out:
 if (VAR_9)
  FUNC_3(VAR_9);
}
