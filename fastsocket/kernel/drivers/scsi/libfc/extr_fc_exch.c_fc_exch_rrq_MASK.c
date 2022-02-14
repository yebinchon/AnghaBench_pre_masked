
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_lport {int e_d_tov; int port_id; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int esb_stat; int state; int ex_lock; int r_a_tov; int sid; int did; int rxid; int oxid; struct fc_lport* lp; } ;
struct fc_els_rrq {void* rrq_rx_id; void* rrq_ox_id; int rrq_s_id; int rrq_cmd; } ;


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
 int FUNC_0 (struct fc_exch*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct fc_lport*,struct fc_frame*,int ,int *,struct fc_exch*,int ) ;
 int FUNC_2 (struct fc_exch*,int ) ;
 int FUNC_3 (struct fc_frame*,int ,int ,int ,int ,int,int ) ;
 struct fc_frame* FUNC_4 (struct fc_lport*,int) ;
 struct fc_els_rrq* FUNC_5 (struct fc_frame*,int) ;
 int FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct fc_els_rrq*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct fc_exch *VAR_11)
{
 struct fc_lport *VAR_12;
 struct fc_els_rrq *VAR_13;
 struct fc_frame *VAR_14;
 u32 VAR_15;

 VAR_12 = VAR_11->lp;

 VAR_14 = FUNC_4(VAR_12, sizeof(*VAR_13));
 if (!VAR_14)
  goto retry;

 VAR_13 = FUNC_5(VAR_14, sizeof(*VAR_13));
 FUNC_8(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->rrq_cmd = VAR_0;
 FUNC_6(VAR_13->rrq_s_id, VAR_11->sid);
 VAR_13->rrq_ox_id = FUNC_7(VAR_11->oxid);
 VAR_13->rrq_rx_id = FUNC_7(VAR_11->rxid);

 VAR_15 = VAR_11->did;
 if (VAR_11->esb_stat & VAR_2)
  VAR_15 = VAR_11->sid;

 FUNC_3(VAR_14, VAR_8, VAR_15,
         VAR_12->port_id, VAR_9,
         VAR_6 | VAR_5 | VAR_7, 0);

 if (FUNC_1(VAR_12, VAR_14, VAR_10, ((void*)0), VAR_11,
        VAR_12->e_d_tov))
  return;

retry:
 FUNC_9(&VAR_11->ex_lock);
 if (VAR_11->state & (VAR_4 | VAR_3)) {
  FUNC_10(&VAR_11->ex_lock);

  FUNC_0(VAR_11);
  return;
 }
 VAR_11->esb_stat |= VAR_1;
 FUNC_2(VAR_11, VAR_11->r_a_tov);
 FUNC_10(&VAR_11->ex_lock);
}
