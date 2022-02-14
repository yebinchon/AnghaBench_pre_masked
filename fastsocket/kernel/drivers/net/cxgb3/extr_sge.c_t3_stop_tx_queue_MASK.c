
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int stops; } ;
struct sge_qset {int txq_stopped; } ;
struct netdev_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdev_queue*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct netdev_queue *VAR_1,
        struct sge_qset *VAR_2, struct sge_txq *VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_0, &VAR_2->txq_stopped);
 VAR_3->stops++;
}
