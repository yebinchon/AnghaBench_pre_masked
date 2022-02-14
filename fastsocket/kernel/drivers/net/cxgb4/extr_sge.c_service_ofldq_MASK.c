
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {unsigned int priority; int destructor; int dev; scalar_t__ head; int data; } ;
struct TYPE_13__ {size_t pidx; int size; TYPE_1__* sdesc; int * desc; } ;
struct TYPE_14__ {int lock; } ;
struct sge_ofld_txq {TYPE_2__ q; TYPE_6__* adap; TYPE_5__ sendq; int full; } ;
typedef int dma_addr_t ;
struct TYPE_15__ {int * port; int pdev_dev; } ;
struct TYPE_12__ {struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,TYPE_5__*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct sk_buff*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int ,struct sk_buff*,int *) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct sge_ofld_txq*,struct sk_buff*) ;
 int FUNC_11 (TYPE_6__*,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_6__*,TYPE_2__*,unsigned int) ;
 struct sk_buff* FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (struct sge_ofld_txq*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct sk_buff*,TYPE_2__*,void*,int *,int,int *) ;

__attribute__((used)) static void FUNC_22(struct sge_ofld_txq *VAR_2)
{
 u64 *VAR_3;
 int VAR_4;
 struct sk_buff *VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7, VAR_8;

 while ((VAR_5 = FUNC_13(&VAR_2->sendq)) != ((void*)0) && !VAR_2->full) {




  FUNC_16(&VAR_2->sendq.lock);

  FUNC_11(VAR_2->adap, &VAR_2->q, 0);

  VAR_7 = VAR_5->priority;
  VAR_8 = FUNC_2(VAR_7);
  VAR_4 = FUNC_18(&VAR_2->q) - VAR_8;
  FUNC_0(VAR_4 < 0);
  if (FUNC_20(VAR_4 < VAR_0))
   FUNC_10(VAR_2, VAR_5);

  VAR_3 = (u64 *)&VAR_2->q.desc[VAR_2->q.pidx];
  if (FUNC_4(VAR_5))
   FUNC_3(VAR_5, &VAR_2->q, VAR_3);
  else if (FUNC_7(VAR_2->adap->pdev_dev, VAR_5,
     (dma_addr_t *)VAR_5->head)) {
   FUNC_19(VAR_2);
   FUNC_15(&VAR_2->sendq.lock);
   break;
  } else {
   int VAR_9, VAR_10 = FUNC_14(VAR_5);

   FUNC_8(VAR_3, VAR_5->data, VAR_10);
   FUNC_21(VAR_5, &VAR_2->q, (void *)VAR_3 + VAR_10,
      VAR_3 + VAR_7, VAR_10,
      (dma_addr_t *)VAR_5->head);

   if (FUNC_9()) {
    VAR_5->dev = VAR_2->adap->port[0];
    VAR_5->destructor = VAR_1;
   }

   VAR_9 = VAR_2->q.pidx + VAR_8 - 1;
   if (VAR_9 >= VAR_2->q.size)
    VAR_9 -= VAR_2->q.size;
   VAR_2->q.sdesc[VAR_9].skb = VAR_5;
  }

  FUNC_17(&VAR_2->q, VAR_8);
  VAR_6 += VAR_8;
  if (FUNC_20(VAR_6 > 32)) {
   FUNC_12(VAR_2->adap, &VAR_2->q, VAR_6);
   VAR_6 = 0;
  }

  FUNC_15(&VAR_2->sendq.lock);
  FUNC_1(VAR_5, &VAR_2->sendq);
  if (FUNC_4(VAR_5))
   FUNC_5(VAR_5);
 }
 if (FUNC_6(VAR_6))
  FUNC_12(VAR_2->adap, &VAR_2->q, VAR_6);
}
