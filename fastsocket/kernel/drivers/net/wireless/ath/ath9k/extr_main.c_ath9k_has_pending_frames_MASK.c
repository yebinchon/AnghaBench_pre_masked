
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_txq {int axq_lock; int axq_acq; scalar_t__ axq_depth; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ath_softc *VAR_0, struct ath_txq *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_1(&VAR_1->axq_lock);

 if (VAR_1->axq_depth || !FUNC_0(&VAR_1->axq_acq))
  VAR_2 = 1;

 FUNC_2(&VAR_1->axq_lock);
 return VAR_2;
}
