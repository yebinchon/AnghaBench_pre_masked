
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int ssb_stat; int cnt; int id; } ;
struct fc_frame_header {void* fh_seq_cnt; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int esb_stat; int ex_lock; struct fc_seq seq; int lp; int r_a_tov; } ;
struct fc_ba_acc {void* ba_low_seq_cnt; void* ba_high_seq_cnt; int ba_seq_id_val; int ba_seq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fc_exch*) ;
 int FUNC_1 (struct fc_frame*,int ,int ) ;
 int FUNC_2 (struct fc_exch*,int ) ;
 struct fc_frame* FUNC_3 (int ,int) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_5 (struct fc_frame*) ;
 struct fc_ba_acc* FUNC_6 (struct fc_frame*,int) ;
 int FUNC_7 (struct fc_seq*,struct fc_frame*,int ,int ) ;
 struct fc_seq* FUNC_8 (struct fc_seq*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct fc_ba_acc*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct fc_exch *VAR_9, struct fc_frame *VAR_10)
{
 struct fc_frame *VAR_11;
 struct fc_ba_acc *VAR_12;
 struct fc_frame_header *VAR_13;
 struct fc_seq *VAR_14;

 if (!VAR_9)
  goto reject;
 FUNC_11(&VAR_9->ex_lock);
 if (VAR_9->esb_stat & VAR_1) {
  FUNC_12(&VAR_9->ex_lock);
  goto reject;
 }
 if (!(VAR_9->esb_stat & VAR_2))
  FUNC_0(VAR_9);
 VAR_9->esb_stat |= VAR_0 | VAR_2;
 FUNC_2(VAR_9, VAR_9->r_a_tov);

 VAR_11 = FUNC_3(VAR_9->lp, sizeof(*VAR_12));
 if (!VAR_11) {
  FUNC_12(&VAR_9->ex_lock);
  goto free;
 }
 VAR_13 = FUNC_5(VAR_11);
 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12));
 FUNC_10(VAR_12, 0, sizeof(*VAR_12));
 VAR_14 = &VAR_9->seq;
 VAR_12->ba_high_seq_cnt = FUNC_9(0xffff);
 if (VAR_14->ssb_stat & VAR_8) {
  VAR_12->ba_seq_id = VAR_14->id;
  VAR_12->ba_seq_id_val = VAR_5;
  VAR_12->ba_high_seq_cnt = VAR_13->fh_seq_cnt;
  VAR_12->ba_low_seq_cnt = FUNC_9(VAR_14->cnt);
 }
 VAR_14 = FUNC_8(VAR_14);
 FUNC_7(VAR_14, VAR_11, VAR_6, VAR_7);
 FUNC_12(&VAR_9->ex_lock);
 FUNC_4(VAR_10);
 return;

reject:
 FUNC_1(VAR_10, VAR_4, VAR_3);
free:
 FUNC_4(VAR_10);
}
