
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct gem {scalar_t__ lstate; int pm_mutex; int lock; int tx_lock; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gem*) ;
 int FUNC_1 (struct gem*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct gem* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4, int VAR_5)
{
 struct gem *VAR_6 = FUNC_4(VAR_4);

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
  return -VAR_0;

 if (!FUNC_6(VAR_4) || !FUNC_5(VAR_4)) {



  VAR_4->mtu = VAR_5;
  return 0;
 }

 FUNC_2(&VAR_6->pm_mutex);
 FUNC_8(&VAR_6->lock);
 FUNC_7(&VAR_6->tx_lock);
 VAR_4->mtu = VAR_5;
 if (VAR_6->running) {
  FUNC_0(VAR_6);
  if (VAR_6->lstate == VAR_3)
   FUNC_1(VAR_6);
 }
 FUNC_9(&VAR_6->tx_lock);
 FUNC_10(&VAR_6->lock);
 FUNC_3(&VAR_6->pm_mutex);

 return 0;
}
