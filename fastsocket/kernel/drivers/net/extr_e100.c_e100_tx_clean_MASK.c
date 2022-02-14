
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nic {struct net_device* netdev; int cb_lock; int cbs_avail; int pdev; scalar_t__ cbs; struct cb* cb_to_clean; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_7__ {int size; int buf_addr; } ;
struct TYPE_8__ {TYPE_2__ tbd; } ;
struct TYPE_9__ {TYPE_3__ tcb; } ;
struct cb {int status; TYPE_5__* skb; TYPE_4__ u; struct cb* next; } ;
struct TYPE_10__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct nic*,int ,int ,struct net_device*,char*,int,int) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct nic *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct cb *VAR_6;
 int VAR_7 = 0;

 FUNC_10(&VAR_4->cb_lock);


 for (VAR_6 = VAR_4->cb_to_clean;
     VAR_6->status & FUNC_0(VAR_2);
     VAR_6 = VAR_4->cb_to_clean = VAR_6->next) {
  FUNC_9();
  FUNC_5(VAR_4, VAR_3, VAR_0, VAR_4->netdev,
        "cb[%d]->status = 0x%04X\n",
        (int)(((void*)VAR_6 - (void*)VAR_4->cbs)/sizeof(struct cb)),
        VAR_6->status);

  if (FUNC_4(VAR_6->skb != ((void*)0))) {
   VAR_5->stats.tx_packets++;
   VAR_5->stats.tx_bytes += VAR_6->skb->len;

   FUNC_8(VAR_4->pdev,
    FUNC_3(VAR_6->u.tcb.tbd.buf_addr),
    FUNC_2(VAR_6->u.tcb.tbd.size),
    VAR_1);
   FUNC_1(VAR_6->skb);
   VAR_6->skb = ((void*)0);
   VAR_7 = 1;
  }
  VAR_6->status = 0;
  VAR_4->cbs_avail++;
 }

 FUNC_11(&VAR_4->cb_lock);


 if (FUNC_12(VAR_7 && FUNC_6(VAR_4->netdev)))
  FUNC_7(VAR_4->netdev);

 return VAR_7;
}
