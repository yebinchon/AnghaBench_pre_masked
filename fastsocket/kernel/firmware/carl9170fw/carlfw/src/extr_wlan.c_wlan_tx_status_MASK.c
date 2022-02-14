
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


struct dma_queue {int dummy; } ;
struct dma_desc {int ctrl; } ;
struct TYPE_13__ {int frame_control; } ;
struct TYPE_14__ {TYPE_4__ i3e; } ;
struct TYPE_10__ {int ampdu; } ;
struct TYPE_11__ {TYPE_1__ mac; } ;
struct TYPE_15__ {TYPE_5__ data; TYPE_2__ hdr; } ;
struct TYPE_12__ {unsigned int queue; int cab; size_t vif_id; } ;
struct carl9170_tx_superframe {TYPE_6__ f; TYPE_3__ s; } ;
struct TYPE_17__ {int down_queue; } ;
struct TYPE_16__ {int fw_desc_available; int queued_bar; int * cab_queue_len; int (* fw_desc_callback ) (struct carl9170_tx_superframe*,int) ;struct dma_desc* fw_desc; struct carl9170_tx_superframe* fw_desc_data; int tx_retry; scalar_t__* last_super_num; } ;
struct TYPE_18__ {TYPE_8__ pta; TYPE_7__ wlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct dma_desc*) ;
 int FUNC_3 (struct dma_desc*) ;
 int FUNC_4 (int *,struct dma_desc*) ;
 struct dma_desc* FUNC_5 (struct dma_queue*) ;
 int FUNC_6 () ;
 TYPE_9__ VAR_4 ;
 struct carl9170_tx_superframe* FUNC_7 (struct dma_desc*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct carl9170_tx_superframe*,int) ;
 int FUNC_10 (struct dma_desc*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct carl9170_tx_superframe*,int) ;
 scalar_t__ FUNC_13 (struct carl9170_tx_superframe*) ;
 int FUNC_14 (unsigned int) ;

__attribute__((used)) static bool FUNC_15(struct dma_queue *VAR_5,
      struct dma_desc *VAR_6)
{
 struct carl9170_tx_superframe *VAR_7 = FUNC_7(VAR_6);
 unsigned int VAR_8 = VAR_7->s.queue;
 bool VAR_9 = 0, VAR_10;

 VAR_10 = 1;


 VAR_4.wlan.last_super_num[VAR_8] = 0;
 if (!!(VAR_6->ctrl & VAR_1)) {
  VAR_9 = !!(VAR_6->ctrl & VAR_2);


  VAR_6->ctrl &= ~(VAR_2 | VAR_0);







  if (FUNC_13(VAR_7)) {







   if (!VAR_7->f.hdr.mac.ampdu) {







    VAR_7->f.data.i3e.frame_control |=
     FUNC_1(VAR_3);
   }

   if (VAR_9) {



    FUNC_3(VAR_6);






    FUNC_14(VAR_8);


    return 0;
   } else {
    FUNC_5(VAR_5);



    FUNC_2(&VAR_4.wlan.tx_retry, VAR_6);
    return 1;
   }
  } else {

   VAR_10 = 0;
  }
 }


 FUNC_5(VAR_5);



 if (VAR_9) {






  FUNC_14(VAR_8);
 }

 FUNC_10(VAR_6);

 if (FUNC_11(VAR_7 == VAR_4.wlan.fw_desc_data)) {
  VAR_4.wlan.fw_desc = VAR_6;
  VAR_4.wlan.fw_desc_available = 1;

  if (VAR_4.wlan.fw_desc_callback)
   VAR_4.wlan.fw_desc_callback(VAR_7, VAR_10);

  return 1;
 }






 FUNC_12(VAR_7, VAR_10);

 if (FUNC_8(VAR_7->f.data.i3e.frame_control)) {
  VAR_4.wlan.queued_bar--;
 }


 FUNC_4(&VAR_4.pta.down_queue, VAR_6);
 FUNC_6();
 return 1;
}
