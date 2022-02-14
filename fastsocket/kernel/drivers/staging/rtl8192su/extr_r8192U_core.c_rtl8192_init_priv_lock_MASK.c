
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int mutex; int ps_lock; int rf_sem; int wx_sem; int irq_lock; int tx_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct r8192_priv* VAR_0)
{
 FUNC_2(&VAR_0->tx_lock);
 FUNC_2(&VAR_0->irq_lock);

 FUNC_1(&VAR_0->wx_sem,1);
 FUNC_1(&VAR_0->rf_sem,1);
 FUNC_2(&VAR_0->ps_lock);
 FUNC_0(&VAR_0->mutex);
}
