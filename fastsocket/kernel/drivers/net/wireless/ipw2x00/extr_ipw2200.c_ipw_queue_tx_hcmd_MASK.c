
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int index; int length; int payload; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {int control_bits; int message_type; } ;
struct tfd_frame {TYPE_3__ u; TYPE_1__ control_flags; } ;
struct clx2_queue {size_t first_empty; int reg_w; int n_bd; } ;
struct clx2_tx_queue {int ** txb; struct tfd_frame* bd; struct clx2_queue q; } ;
struct ipw_priv {int hcmd_seq; struct clx2_tx_queue txq_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*,int) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct clx2_queue*) ;
 int FUNC_4 (struct ipw_priv*,int ,size_t) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct tfd_frame*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ipw_priv *VAR_3, int VAR_4, void *VAR_5,
        int VAR_6, int VAR_7)
{
 struct clx2_tx_queue *VAR_8 = &VAR_3->txq_cmd;
 struct clx2_queue *VAR_9 = &VAR_8->q;
 struct tfd_frame *VAR_10;

 if (FUNC_3(VAR_9) < (VAR_7 ? 1 : 2)) {
  FUNC_0("No space for Tx\n");
  return -VAR_0;
 }

 VAR_10 = &VAR_8->bd[VAR_9->first_empty];
 VAR_8->txb[VAR_9->first_empty] = ((void*)0);

 FUNC_6(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->control_flags.message_type = VAR_2;
 VAR_10->control_flags.control_bits = VAR_1;
 VAR_3->hcmd_seq++;
 VAR_10->u.cmd.index = VAR_4;
 VAR_10->u.cmd.length = VAR_6;
 FUNC_5(VAR_10->u.cmd.payload, VAR_5, VAR_6);
 VAR_9->first_empty = FUNC_2(VAR_9->first_empty, VAR_9->n_bd);
 FUNC_4(VAR_3, VAR_9->reg_w, VAR_9->first_empty);
 FUNC_1(VAR_3, 0x90);

 return 0;
}
