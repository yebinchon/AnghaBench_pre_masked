
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int timestamp; } ;
struct TYPE_11__ {TYPE_1__ probe_resp; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct dma_desc {int dummy; } ;
struct TYPE_15__ {size_t queue; int fill_in_tsf; } ;
struct TYPE_17__ {int i3e; } ;
struct TYPE_16__ {TYPE_8__ data; } ;
struct carl9170_tx_superframe {TYPE_6__ s; TYPE_7__ f; } ;
struct TYPE_14__ {int * tx_queue; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_13__ {TYPE_3__ psm; } ;
struct TYPE_18__ {TYPE_5__ wlan; TYPE_4__ phy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct dma_desc*) ;
 TYPE_9__ VAR_1 ;
 struct carl9170_tx_superframe* FUNC_2 (struct dma_desc*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct carl9170_tx_superframe*) ;

__attribute__((used)) static void FUNC_6(struct dma_desc *VAR_2)
{
 struct carl9170_tx_superframe *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_4(VAR_3->s.fill_in_tsf)) {
  struct ieee80211_mgmt *VAR_4 = (void *) &VAR_3->f.data.i3e;
  uint32_t *VAR_5 = (uint32_t *) &VAR_4->u.probe_resp.timestamp;
  FUNC_3(VAR_5);
 }

 FUNC_5(VAR_3);






 FUNC_1(&VAR_1.wlan.tx_queue[VAR_3->s.queue], VAR_2);
}
