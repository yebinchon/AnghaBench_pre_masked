
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sge_ofld_txq {int qresume_tsk; } ;
struct TYPE_5__ {scalar_t__ in_use; } ;
struct sge_eth_txq {TYPE_3__* txq; TYPE_1__ q; } ;
struct sge {unsigned long* txq_maperr; unsigned int ethtxq_rover; unsigned int ethqsets; int tx_timer; struct sge_eth_txq* ethtxq; struct sge_ofld_txq** egr_map; } ;
struct adapter {struct sge sge; } ;
struct TYPE_6__ {scalar_t__ trans_start; } ;


 unsigned int FUNC_0 (unsigned long*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (unsigned long,unsigned long*) ;
 int FUNC_5 (struct adapter*,TYPE_1__*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;
 struct adapter *VAR_9 = (struct adapter *)VAR_5;
 struct sge *VAR_10 = &VAR_9->sge;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_10->txq_maperr); VAR_7++)
  for (VAR_6 = VAR_10->txq_maperr[VAR_7]; VAR_6; VAR_6 &= VAR_6 - 1) {
   unsigned long VAR_11 = FUNC_1(VAR_6) + VAR_7 * VAR_0;
   struct sge_ofld_txq *VAR_12 = VAR_10->egr_map[VAR_11];

   FUNC_4(VAR_11, VAR_10->txq_maperr);
   FUNC_8(&VAR_12->qresume_tsk);
  }

 VAR_8 = VAR_2;
 VAR_7 = VAR_10->ethtxq_rover;
 do {
  struct sge_eth_txq *VAR_13 = &VAR_10->ethtxq[VAR_7];

  if (VAR_13->q.in_use &&
      FUNC_9(VAR_4, VAR_13->txq->trans_start + VAR_1 / 100) &&
      FUNC_2(VAR_13->txq)) {
   int VAR_14 = FUNC_7(&VAR_13->q);

   if (VAR_14) {
    if (VAR_14 > VAR_8)
     VAR_14 = VAR_8;

    FUNC_5(VAR_9, &VAR_13->q, VAR_14, 1);
    VAR_13->q.in_use -= VAR_14;
    VAR_8 -= VAR_14;
   }
   FUNC_3(VAR_13->txq);
  }

  if (++VAR_7 >= VAR_10->ethqsets)
   VAR_7 = 0;
 } while (VAR_8 && VAR_7 != VAR_10->ethtxq_rover);
 VAR_10->ethtxq_rover = VAR_7;
 FUNC_6(&VAR_10->tx_timer, VAR_4 + (VAR_8 ? VAR_3 : 2));
}
