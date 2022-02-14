
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gem {int lock; TYPE_1__* pdev; int tx_lock; scalar_t__ running; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 int FUNC_3 (struct gem*) ;
 int FUNC_4 (struct gem*) ;
 int FUNC_5 (struct gem*) ;
 int FUNC_6 (int) ;
 struct gem* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_0, int VAR_1)
{
 struct gem *VAR_2 = FUNC_7(VAR_0);
 unsigned long VAR_3;

 FUNC_10(&VAR_2->lock, VAR_3);
 FUNC_9(&VAR_2->tx_lock);

 VAR_2->running = 0;


 FUNC_8(VAR_0);


 FUNC_2(VAR_2);


 FUNC_11(&VAR_2->tx_lock);
 FUNC_12(&VAR_2->lock, VAR_3);


 FUNC_5(VAR_2);
 FUNC_6(10);
 if (!VAR_1)
  FUNC_4(VAR_2);
 FUNC_6(10);


 FUNC_1(VAR_2);


 FUNC_0(VAR_2->pdev->irq, (void *) VAR_0);


 if (!VAR_1) {
  FUNC_10(&VAR_2->lock, VAR_3);
  FUNC_3(VAR_2);
  FUNC_12(&VAR_2->lock, VAR_3);
 }
}
