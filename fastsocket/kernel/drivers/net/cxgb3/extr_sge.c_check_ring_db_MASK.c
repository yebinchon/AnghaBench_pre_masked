
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {scalar_t__ cleaned; scalar_t__ in_use; scalar_t__ processed; int cntxt_id; int flags; } ;
struct sge_qset {struct sge_txq* txq; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_8, struct sge_qset *VAR_9,
     unsigned int VAR_10)
{
 if (VAR_10 & VAR_1) {
  struct sge_txq *VAR_11 = &VAR_9->txq[VAR_4];

  if (VAR_11->cleaned + VAR_11->in_use != VAR_11->processed &&
      !FUNC_3(VAR_5, &VAR_11->flags)) {
   FUNC_1(VAR_7, &VAR_11->flags);
   FUNC_2(VAR_8, VAR_0, VAR_3 |
         FUNC_0(VAR_11->cntxt_id));
  }
 }

 if (VAR_10 & VAR_2) {
  struct sge_txq *VAR_12 = &VAR_9->txq[VAR_6];

  if (VAR_12->cleaned + VAR_12->in_use != VAR_12->processed &&
      !FUNC_3(VAR_5, &VAR_12->flags)) {
   FUNC_1(VAR_7, &VAR_12->flags);
   FUNC_2(VAR_8, VAR_0, VAR_3 |
         FUNC_0(VAR_12->cntxt_id));
  }
 }
}
