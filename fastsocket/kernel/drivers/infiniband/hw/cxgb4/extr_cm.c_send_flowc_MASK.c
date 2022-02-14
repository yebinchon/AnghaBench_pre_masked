
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fw_flowc_wr {TYPE_3__* mnemval; void* flowid_len16; void* op_to_nparams; } ;
struct TYPE_11__ {TYPE_4__* dev; } ;
struct c4iw_ep {int tx_chan; int rss_qid; int snd_seq; int rcv_seq; int emss; TYPE_5__ com; int txq_idx; int hwtid; } ;
struct TYPE_8__ {TYPE_1__* pdev; } ;
struct TYPE_12__ {TYPE_2__ lldi; } ;
struct TYPE_10__ {TYPE_6__ rdev; } ;
struct TYPE_9__ {scalar_t__* r4; void* val; scalar_t__ mnemonic; } ;
struct TYPE_7__ {int devfn; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (TYPE_6__*,struct sk_buff*) ;
 void* FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,unsigned int,int ) ;
 int FUNC_10 (struct sk_buff*,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_11(struct c4iw_ep *VAR_12, struct sk_buff *VAR_13)
{
 unsigned int VAR_14 = 80;
 struct fw_flowc_wr *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_9(VAR_13, VAR_14, VAR_10);
 VAR_15 = (struct fw_flowc_wr *)FUNC_6(VAR_13, VAR_14);

 VAR_15->op_to_nparams = FUNC_8(FUNC_4(VAR_9) |
        FUNC_1(8));
 VAR_15->flowid_len16 = FUNC_8(FUNC_3(FUNC_0(VAR_14,
       16)) | FUNC_2(VAR_12->hwtid));

 VAR_15->mnemval[0].mnemonic = VAR_4;
 VAR_15->mnemval[0].val = FUNC_8(
  FUNC_5(VAR_12->com.dev->rdev.lldi.pdev->devfn) << 8);
 VAR_15->mnemval[1].mnemonic = VAR_1;
 VAR_15->mnemval[1].val = FUNC_8(VAR_12->tx_chan);
 VAR_15->mnemval[2].mnemonic = VAR_5;
 VAR_15->mnemval[2].val = FUNC_8(VAR_12->tx_chan);
 VAR_15->mnemval[3].mnemonic = VAR_2;
 VAR_15->mnemval[3].val = FUNC_8(VAR_12->rss_qid);
 VAR_15->mnemval[4].mnemonic = VAR_8;
 VAR_15->mnemval[4].val = FUNC_8(VAR_12->snd_seq);
 VAR_15->mnemval[5].mnemonic = VAR_6;
 VAR_15->mnemval[5].val = FUNC_8(VAR_12->rcv_seq);
 VAR_15->mnemval[6].mnemonic = VAR_7;
 VAR_15->mnemval[6].val = FUNC_8(VAR_11);
 VAR_15->mnemval[7].mnemonic = VAR_3;
 VAR_15->mnemval[7].val = FUNC_8(VAR_12->emss);

 VAR_15->mnemval[8].mnemonic = 0;
 VAR_15->mnemval[8].val = 0;
 for (VAR_16 = 0; VAR_16 < 9; VAR_16++) {
  VAR_15->mnemval[VAR_16].r4[0] = 0;
  VAR_15->mnemval[VAR_16].r4[1] = 0;
  VAR_15->mnemval[VAR_16].r4[2] = 0;
 }

 FUNC_10(VAR_13, VAR_0, VAR_12->txq_idx);
 FUNC_7(&VAR_12->com.dev->rdev, VAR_13);
}
