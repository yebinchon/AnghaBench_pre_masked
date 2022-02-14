
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_flush_list; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; } ;
struct ipoib_cm_rx {int state; int list; int dev; } ;
struct ib_event {scalar_t__ event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipoib_dev_priv*) ;
 int FUNC_1 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ib_event *VAR_2, void *VAR_3)
{
 struct ipoib_cm_rx *VAR_4 = VAR_3;
 struct ipoib_dev_priv *VAR_5 = FUNC_2(VAR_4->dev);
 unsigned long VAR_6;

 if (VAR_2->event != VAR_0)
  return;

 FUNC_3(&VAR_5->lock, VAR_6);
 FUNC_1(&VAR_4->list, &VAR_5->cm.rx_flush_list);
 VAR_4->state = VAR_1;
 FUNC_0(VAR_5);
 FUNC_4(&VAR_5->lock, VAR_6);
}
