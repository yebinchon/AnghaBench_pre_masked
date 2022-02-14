
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {int tx_reclaim_timer; TYPE_1__* adapter; struct cmdQ* cmdQ; } ;
struct cmdQ {int lock; scalar_t__ in_use; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct sge*,struct cmdQ*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_5)
{
 int VAR_6;
 struct sge *VAR_7 = (struct sge *)VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  struct cmdQ *VAR_8 = &VAR_7->cmdQ[VAR_6];

  if (!FUNC_2(&VAR_8->lock))
   continue;

  FUNC_1(VAR_7, VAR_8);
  if (VAR_6 == 0 && VAR_8->in_use) {
   FUNC_4(VAR_1, VAR_7->adapter->regs + VAR_0);
  }
  FUNC_3(&VAR_8->lock);
 }
 FUNC_0(&VAR_7->tx_reclaim_timer, VAR_4 + VAR_3);
}
