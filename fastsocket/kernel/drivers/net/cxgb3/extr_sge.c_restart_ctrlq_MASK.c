
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct sge_txq {size_t in_use; size_t size; size_t pidx; int gen; int cntxt_id; int lock; int stops; int sendq; int * desc; } ;
struct sge_qset {int adap; int txq_stopped; struct sge_txq* txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (struct sge_txq*) ;
 int FUNC_3 (size_t,int *) ;
 scalar_t__ FUNC_4 (struct sge_txq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (size_t,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_3)
{
 struct sk_buff *VAR_4;
 struct sge_qset *VAR_5 = (struct sge_qset *)VAR_3;
 struct sge_txq *VAR_6 = &VAR_5->txq[VAR_2];

 FUNC_7(&VAR_6->lock);
      again:FUNC_2(VAR_6);

 while (VAR_6->in_use < VAR_6->size &&
        (VAR_4 = FUNC_1(&VAR_6->sendq)) != ((void*)0)) {

  FUNC_12(&VAR_6->desc[VAR_6->pidx], VAR_4, VAR_4->len, VAR_6->gen);

  if (++VAR_6->pidx >= VAR_6->size) {
   VAR_6->pidx = 0;
   VAR_6->gen ^= 1;
  }
  VAR_6->in_use++;
 }

 if (!FUNC_5(&VAR_6->sendq)) {
  FUNC_3(VAR_2, &VAR_5->txq_stopped);
  FUNC_6();

  if (FUNC_4(VAR_6) &&
      FUNC_10(VAR_2, &VAR_5->txq_stopped))
   goto again;
  VAR_6->stops++;
 }

 FUNC_8(&VAR_6->lock);
 FUNC_11();
 FUNC_9(VAR_5->adap, VAR_0,
       VAR_1 | FUNC_0(VAR_6->cntxt_id));
}
