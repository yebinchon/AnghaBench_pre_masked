
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; struct FS_BPENTRY* data; } ;
struct fs_vcc {int channo; struct sk_buff* last_skb; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_6__ {int offset; } ;
struct fs_dev {TYPE_1__ tx_relq; TYPE_2__ hp_txq; int ntxpckts; } ;
struct atm_vcc {int dev; } ;
struct FS_BPENTRY {int flags; struct fs_dev* dev; struct sk_buff* skb; int bsa; scalar_t__ next; } ;
struct TYPE_8__ {struct atm_vcc* vcc; } ;
struct TYPE_7__ {int flags; struct fs_dev* dev; struct sk_buff* skb; int bsa; scalar_t__ next; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fs_dev* FUNC_1 (int ) ;
 struct fs_vcc* FUNC_2 (struct atm_vcc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct FS_BPENTRY** VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct FS_BPENTRY* FUNC_8 (int,int ) ;
 size_t VAR_11 ;
 int FUNC_9 (struct fs_dev*,int ) ;
 int FUNC_10 (struct fs_dev*,TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_11 (struct FS_BPENTRY*) ;

__attribute__((used)) static int FUNC_12 (struct atm_vcc *VAR_12, struct sk_buff *VAR_13)
{
 struct fs_dev *VAR_14 = FUNC_1 (VAR_12->dev);
 struct fs_vcc *VAR_15 = FUNC_2 (VAR_12);
 struct FS_BPENTRY *VAR_16;

 FUNC_6 ();

 FUNC_5 (VAR_4, "I");
 FUNC_5 (VAR_3, "Send: atm_vcc %p skb %p vcc %p dev %p\n",
      VAR_12, VAR_13, VAR_15, VAR_14);

 FUNC_5 (VAR_1, "Alloc t-skb: %p (atm_send)\n", VAR_13);

 FUNC_0(VAR_13)->vcc = VAR_12;

 VAR_15->last_skb = VAR_13;

 VAR_16 = FUNC_8 (sizeof (struct FS_BPENTRY), VAR_5);
 FUNC_5 (VAR_1, "Alloc transd: %p(%Zd)\n", VAR_16, sizeof (struct FS_BPENTRY));
 if (!VAR_16) {

  return -VAR_0;
 }

 FUNC_5 (VAR_3, "first word in buffer: %x\n",
      *(int *) VAR_13->data);

 VAR_16->flags = VAR_8 | VAR_7 | VAR_13->len;
 VAR_16->next = 0;
 VAR_16->bsa = FUNC_11 (VAR_13->data);
 VAR_16->skb = VAR_13;
 VAR_16->dev = VAR_14;
 VAR_14->ntxpckts++;
 FUNC_10 (VAR_14, &VAR_14->hp_txq,
        VAR_6 | VAR_15->channo,
        FUNC_11 (VAR_16), 0,
        FUNC_11 (VAR_16));

 FUNC_5 (VAR_2, "in send: txq %d txrq %d\n",
      FUNC_9 (VAR_14, FUNC_3 (VAR_14->hp_txq.offset)) -
      FUNC_9 (VAR_14, FUNC_4 (VAR_14->hp_txq.offset)),
      FUNC_9 (VAR_14, FUNC_3 (VAR_14->tx_relq.offset)) -
      FUNC_9 (VAR_14, FUNC_4 (VAR_14->tx_relq.offset)));

 FUNC_7 ();
 return 0;
}
