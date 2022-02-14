
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int priority; } ;
struct sge_txq {unsigned int size; unsigned int in_use; unsigned int gen; unsigned int pidx; int cntxt_id; int flags; int lock; int sendq; int stops; } ;
struct sge_qset {int txq_stopped; int netdev; struct sge_txq* txq; } ;
struct port_info {struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 struct port_info* FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,struct sge_txq*,int ) ;
 int FUNC_4 (size_t,int *) ;
 scalar_t__ FUNC_5 (struct sge_txq*) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_11 (size_t,int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (struct adapter*,struct sk_buff*,struct sge_txq*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_15(unsigned long VAR_6)
{
 struct sk_buff *VAR_7;
 struct sge_qset *VAR_8 = (struct sge_qset *)VAR_6;
 struct sge_txq *VAR_9 = &VAR_8->txq[VAR_3];
 const struct port_info *VAR_10 = FUNC_2(VAR_8->netdev);
 struct adapter *VAR_11 = VAR_10->adapter;

 FUNC_8(&VAR_9->lock);
again: FUNC_3(VAR_11, VAR_9, VAR_5);

 while ((VAR_7 = FUNC_6(&VAR_9->sendq)) != ((void*)0)) {
  unsigned int VAR_12, VAR_13;
  unsigned int VAR_14 = VAR_7->priority;

  if (FUNC_12(VAR_9->size - VAR_9->in_use < VAR_14)) {
   FUNC_4(VAR_3, &VAR_8->txq_stopped);
   FUNC_7();

   if (FUNC_5(VAR_9) &&
       FUNC_11(VAR_3, &VAR_8->txq_stopped))
    goto again;
   VAR_9->stops++;
   break;
  }

  VAR_12 = VAR_9->gen;
  VAR_9->in_use += VAR_14;
  VAR_13 = VAR_9->pidx;
  VAR_9->pidx += VAR_14;
  if (VAR_9->pidx >= VAR_9->size) {
   VAR_9->pidx -= VAR_9->size;
   VAR_9->gen ^= 1;
  }
  FUNC_1(VAR_7, &VAR_9->sendq);
  FUNC_9(&VAR_9->lock);

  FUNC_14(VAR_11, VAR_7, VAR_9, VAR_13, VAR_12, VAR_14);
  FUNC_8(&VAR_9->lock);
 }
 FUNC_9(&VAR_9->lock);





 FUNC_13();
 FUNC_10(VAR_11, VAR_0,
       VAR_1 | FUNC_0(VAR_9->cntxt_id));
}
