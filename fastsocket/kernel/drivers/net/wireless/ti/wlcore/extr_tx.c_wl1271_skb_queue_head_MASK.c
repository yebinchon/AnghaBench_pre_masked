
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {size_t last_tx_hlid; int * tx_queue_count; } ;
struct wl1271 {int wl_lock; int * tx_queue_count; TYPE_1__* links; int flags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * tx_queue; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wl1271*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3,
      struct sk_buff *VAR_4, u8 VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = FUNC_5(FUNC_1(VAR_4));

 if (FUNC_6(VAR_2, VAR_4)) {
  FUNC_0(VAR_0, &VAR_2->flags);
 } else {
  FUNC_2(&VAR_2->links[VAR_5].tx_queue[VAR_7], VAR_4);


  VAR_3->last_tx_hlid = (VAR_5 + VAR_1 - 1) %
          VAR_1;
 }

 FUNC_3(&VAR_2->wl_lock, VAR_6);
 VAR_2->tx_queue_count[VAR_7]++;
 if (VAR_3)
  VAR_3->tx_queue_count[VAR_7]++;
 FUNC_4(&VAR_2->wl_lock, VAR_6);
}
