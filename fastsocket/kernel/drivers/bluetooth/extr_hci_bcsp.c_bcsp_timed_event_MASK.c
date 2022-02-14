
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_uart {struct bcsp_struct* priv; } ;
struct TYPE_2__ {int lock; int qlen; } ;
struct bcsp_struct {int msgq_txseq; TYPE_1__ unack; int rel; } ;


 int FUNC_0 (char*,struct hci_uart*,int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hci_uart*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long,int ) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1)
{
 struct hci_uart *VAR_2 = (struct hci_uart *) VAR_1;
 struct bcsp_struct *VAR_3 = VAR_2->priv;
 struct sk_buff *VAR_4;
 unsigned long VAR_5;

 FUNC_0("hu %p retransmitting %u pkts", VAR_2, VAR_3->unack.qlen);

 FUNC_4(&VAR_3->unack.lock, VAR_5, VAR_0);

 while ((VAR_4 = FUNC_1(&VAR_3->unack)) != ((void*)0)) {
  VAR_3->msgq_txseq = (VAR_3->msgq_txseq - 1) & 0x07;
  FUNC_3(&VAR_3->rel, VAR_4);
 }

 FUNC_5(&VAR_3->unack.lock, VAR_5);

 FUNC_2(VAR_2);
}
