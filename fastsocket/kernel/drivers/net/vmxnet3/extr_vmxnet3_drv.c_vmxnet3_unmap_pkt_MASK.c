
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {size_t next2comp; int size; TYPE_1__* base; } ;
struct vmxnet3_tx_queue {TYPE_3__ tx_ring; TYPE_2__* buf_info; } ;
struct vmxnet3_adapter {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {size_t sop_idx; struct sk_buff* skb; } ;
struct TYPE_4__ {int txd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,struct pci_dev*) ;

__attribute__((used)) static int
FUNC_6(u32 VAR_0, struct vmxnet3_tx_queue *VAR_1,
    struct pci_dev *VAR_2, struct vmxnet3_adapter *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5 = 0;


 FUNC_0(VAR_1->buf_info[VAR_0].sop_idx != VAR_1->tx_ring.next2comp);
 FUNC_0(FUNC_2(&(VAR_1->tx_ring.base[VAR_0].txd)) != 1);

 VAR_4 = VAR_1->buf_info[VAR_0].skb;
 FUNC_0(VAR_4 == ((void*)0));
 VAR_1->buf_info[VAR_0].skb = ((void*)0);

 FUNC_1(VAR_0, VAR_1->tx_ring.size);

 while (VAR_1->tx_ring.next2comp != VAR_0) {
  FUNC_5(VAR_1->buf_info + VAR_1->tx_ring.next2comp,
         VAR_2);






  FUNC_4(&VAR_1->tx_ring);
  VAR_5++;
 }

 FUNC_3(VAR_4);
 return VAR_5;
}
