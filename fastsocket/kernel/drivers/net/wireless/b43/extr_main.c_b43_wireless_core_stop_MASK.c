
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct b43_wldev {TYPE_1__* dev; int periodic_work; struct b43_wl* wl; } ;
struct b43_wl {int hw; int * tx_queue; struct b43_wldev* current_dev; int mutex; int hardirq_lock; int tx_work; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 scalar_t__ FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int ,int ) ;
 int FUNC_9 (struct b43_wl*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,struct b43_wldev*) ;
 int FUNC_13 (int ,struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct sk_buff* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static struct b43_wldev * FUNC_21(struct b43_wldev *VAR_4)
{
 struct b43_wl *VAR_5;
 struct b43_wldev *VAR_6;
 u32 VAR_7;
 int VAR_8;

 if (!VAR_4)
  return ((void*)0);
 VAR_5 = VAR_4->wl;
redo:
 if (!VAR_4 || FUNC_7(VAR_4) < VAR_3)
  return VAR_4;


 FUNC_15(&VAR_5->mutex);
 FUNC_10(&VAR_4->periodic_work);
 FUNC_11(&VAR_5->tx_work);
 FUNC_14(&VAR_5->mutex);
 VAR_4 = VAR_5->current_dev;
 if (!VAR_4 || FUNC_7(VAR_4) < VAR_3) {

  return VAR_4;
 }


 FUNC_6(VAR_4, VAR_2);
 if (FUNC_1(VAR_4->dev)) {

  FUNC_8(VAR_4, VAR_0, 0);
  FUNC_4(VAR_4, VAR_0);
 } else {
  FUNC_18(&VAR_5->hardirq_lock);
  FUNC_8(VAR_4, VAR_0, 0);
  FUNC_4(VAR_4, VAR_0);
  FUNC_19(&VAR_5->hardirq_lock);
 }

 VAR_6 = VAR_4;
 FUNC_15(&VAR_5->mutex);
 if (FUNC_1(VAR_4->dev)) {
  FUNC_5(VAR_4);
 } else {
  FUNC_20(VAR_4->dev->irq);
  FUNC_12(VAR_4->dev->irq, VAR_4);
 }
 FUNC_14(&VAR_5->mutex);
 VAR_4 = VAR_5->current_dev;
 if (!VAR_4)
  return VAR_4;
 if (VAR_4 != VAR_6) {
  if (FUNC_7(VAR_4) >= VAR_3)
   goto redo;
  return VAR_4;
 }
 VAR_7 = FUNC_4(VAR_4, VAR_0);
 FUNC_0(VAR_7 != 0xFFFFFFFF && VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  while (FUNC_17(&VAR_5->tx_queue[VAR_8])) {
   struct sk_buff *VAR_9;

   VAR_9 = FUNC_16(&VAR_5->tx_queue[VAR_8]);
   FUNC_13(VAR_5->hw, VAR_9);
  }
 }

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 FUNC_9(VAR_5, "Wireless interface stopped\n");

 return VAR_4;
}
