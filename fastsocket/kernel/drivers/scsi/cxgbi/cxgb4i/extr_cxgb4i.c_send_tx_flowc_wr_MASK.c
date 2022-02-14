
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ head; } ;
struct fw_flowc_wr {TYPE_1__* mnemval; void* flowid_len16; void* op_to_nparams; } ;
struct cxgbi_sock {int tx_chan; int rss_qid; int snd_nxt; int rcv_nxt; int advmss; size_t port_id; TYPE_2__* cdev; int tid; } ;
struct TYPE_4__ {int pfvf; int * ports; } ;
struct TYPE_3__ {scalar_t__* r4; void* val; scalar_t__ mnemonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 struct sk_buff* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 int VAR_13 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int,char*,struct cxgbi_sock*,int ,int ,int,int,int,int,int,int) ;
 int FUNC_9 (struct sk_buff*,int ,struct cxgbi_sock*) ;

__attribute__((used)) static inline void FUNC_10(struct cxgbi_sock *VAR_14)
{
 struct sk_buff *VAR_15;
 struct fw_flowc_wr *VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = 80;
 VAR_15 = FUNC_5(VAR_17, 0, VAR_12);
 VAR_16 = (struct fw_flowc_wr *)VAR_15->head;
 VAR_16->op_to_nparams =
  FUNC_7(FUNC_4(VAR_11) | FUNC_1(8));
 VAR_16->flowid_len16 =
  FUNC_7(FUNC_3(FUNC_0(72, 16)) |
    FUNC_2(VAR_14->tid));
 VAR_16->mnemval[0].mnemonic = VAR_6;
 VAR_16->mnemval[0].val = FUNC_7(VAR_14->cdev->pfvf);
 VAR_16->mnemval[1].mnemonic = VAR_3;
 VAR_16->mnemval[1].val = FUNC_7(VAR_14->tx_chan);
 VAR_16->mnemval[2].mnemonic = VAR_7;
 VAR_16->mnemval[2].val = FUNC_7(VAR_14->tx_chan);
 VAR_16->mnemval[3].mnemonic = VAR_4;
 VAR_16->mnemval[3].val = FUNC_7(VAR_14->rss_qid);
 VAR_16->mnemval[4].mnemonic = VAR_10;
 VAR_16->mnemval[4].val = FUNC_7(VAR_14->snd_nxt);
 VAR_16->mnemval[5].mnemonic = VAR_8;
 VAR_16->mnemval[5].val = FUNC_7(VAR_14->rcv_nxt);
 VAR_16->mnemval[6].mnemonic = VAR_9;
 VAR_16->mnemval[6].val = FUNC_7(VAR_13);
 VAR_16->mnemval[7].mnemonic = VAR_5;
 VAR_16->mnemval[7].val = FUNC_7(VAR_14->advmss);
 VAR_16->mnemval[8].mnemonic = 0;
 VAR_16->mnemval[8].val = 0;
 for (VAR_18 = 0; VAR_18 < 9; VAR_18++) {
  VAR_16->mnemval[VAR_18].r4[0] = 0;
  VAR_16->mnemval[VAR_18].r4[1] = 0;
  VAR_16->mnemval[VAR_18].r4[2] = 0;
 }
 FUNC_9(VAR_15, VAR_0, VAR_14);

 FUNC_8(1 << VAR_2 | 1 << VAR_1,
  "csk 0x%p, tid 0x%x, %u,%u,%u,%u,%u,%u,%u.\n",
  VAR_14, VAR_14->tid, 0, VAR_14->tx_chan, VAR_14->rss_qid,
  VAR_14->snd_nxt, VAR_14->rcv_nxt, VAR_13,
  VAR_14->advmss);

 FUNC_6(VAR_14->cdev->ports[VAR_14->port_id], VAR_15);
}
