
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; unsigned char* data; } ;
struct TYPE_3__ {int xml; int cmd; } ;
struct TYPE_4__ {TYPE_1__ sr; } ;
struct fritz_bcs {int fifo_size; scalar_t__ mode; int tx_cnt; int channel; TYPE_2__ ctrl; struct sk_buff* tx_skb; struct fritz_adapter* adapter; } ;
struct fritz_adapter {int type; int hw_lock; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct fritz_bcs*,int) ;
 int FUNC_3 (struct fritz_bcs*,int) ;
 int FUNC_4 (struct fritz_bcs*,int) ;
 int FUNC_5 (scalar_t__,unsigned char*,int) ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct fritz_bcs *VAR_6)
{
 struct fritz_adapter *VAR_7 = VAR_6->adapter;
 struct sk_buff *VAR_8 = VAR_6->tx_skb;
 int VAR_9;
 unsigned long VAR_10;
 unsigned char *VAR_11;

 FUNC_1(0x40, "hdlc_fill_fifo");

 FUNC_0(VAR_8->len == 0);

 VAR_6->ctrl.sr.cmd &= ~VAR_3;
 if (VAR_6->tx_skb->len > VAR_6->fifo_size) {
  VAR_9 = VAR_6->fifo_size;
 } else {
  VAR_9 = VAR_6->tx_skb->len;
  if (VAR_6->mode != VAR_5)
   VAR_6->ctrl.sr.cmd |= VAR_3;
 }
 FUNC_1(0x40, "hdlc_fill_fifo %d/%d", VAR_9, VAR_6->tx_skb->len);
 VAR_11 = VAR_6->tx_skb->data;
 FUNC_7(VAR_6->tx_skb, VAR_9);
 VAR_6->tx_cnt += VAR_9;
 VAR_6->ctrl.sr.xml = ((VAR_9 == VAR_6->fifo_size) ? 0 : VAR_9);

 switch (VAR_7->type) {
 case 130:
  FUNC_8(&VAR_7->hw_lock, VAR_10);

  FUNC_2(VAR_6, 3);
  FUNC_6(VAR_7->io + VAR_0 + VAR_4,
        VAR_11, (VAR_9 + 3) / 4);
  FUNC_9(&VAR_7->hw_lock, VAR_10);
  break;
 case 129:
  FUNC_4(VAR_6, 3);
  FUNC_6(VAR_7->io +
        (VAR_6->channel ? VAR_2 : VAR_1),
        VAR_11, (VAR_9 + 3) / 4);
  break;
 case 128:
  FUNC_8(&VAR_7->hw_lock, VAR_10);

  FUNC_3(VAR_6, 3);
  FUNC_5(VAR_7->io + VAR_0, VAR_11, VAR_9);
  FUNC_9(&VAR_7->hw_lock, VAR_10);
  break;
 }
}
