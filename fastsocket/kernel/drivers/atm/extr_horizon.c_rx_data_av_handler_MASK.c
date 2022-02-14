
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int data; } ;
struct TYPE_14__ {scalar_t__ traffic_class; size_t max_sdu; } ;
struct TYPE_15__ {TYPE_1__ rxtp; } ;
struct atm_vcc {TYPE_2__ qos; } ;
struct TYPE_16__ {size_t rx_bytes; int flags; int rx_addr; int rx_channel; struct sk_buff* rx_skb; struct atm_vcc** rxer; } ;
typedef TYPE_3__ hrz_dev ;
struct TYPE_13__ {struct atm_vcc* vcc; } ;


 scalar_t__ VAR_0 ;
 TYPE_12__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_3__*,size_t) ;
 int VAR_13 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 struct sk_buff* FUNC_8 (struct atm_vcc*,size_t,int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_14 ;
 size_t FUNC_10 (int) ;
 size_t FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (struct sk_buff*,size_t) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16 (hrz_dev * VAR_15) {
  u32 VAR_16;
  u32 VAR_17;
  u16 VAR_18;
  u16 VAR_19;

  FUNC_2 (VAR_2, "hrz_data_av_handler");


  if (FUNC_15 (VAR_14, &VAR_15->flags)) {
    FUNC_2 (VAR_3, "locked out of rx lock");
    return;
  }
  FUNC_2 (VAR_3, "set rx_busy for dev %p", VAR_15);


  FUNC_6(VAR_15);

  VAR_16 = FUNC_12 (VAR_15);

  VAR_18 = FUNC_10 (VAR_16);
  VAR_19 = FUNC_11 (VAR_16);

  FUNC_5 (VAR_15);

  FUNC_4 (VAR_15, VAR_19);

  FUNC_2 (VAR_3, "rx_queue_entry is: %#x", VAR_16);
  VAR_17 = VAR_16 & (VAR_12|VAR_11|VAR_13);

  if (!VAR_18) {


    FUNC_3 (VAR_8, "zero-length frame!");
    VAR_17 &= ~VAR_11;
  }

  if (VAR_17 & VAR_13) {
    FUNC_2 (VAR_3|VAR_1, "Simon's marker detected!");
  }
  if (VAR_17 == (VAR_12 | VAR_11)) {
    struct atm_vcc * VAR_20;

    FUNC_2 (VAR_3, "got a frame on rx_channel %x len %u", VAR_19, VAR_18);

    VAR_20 = VAR_15->rxer[VAR_19];



    if (VAR_20) {

      if (VAR_20->qos.rxtp.traffic_class != VAR_0) {

 if (VAR_18 <= VAR_20->qos.rxtp.max_sdu) {

   struct sk_buff * VAR_21 = FUNC_8 (VAR_20, VAR_18, VAR_7);
   if (VAR_21) {

     VAR_15->rx_skb = VAR_21;

     VAR_15->rx_channel = VAR_19;


     FUNC_14 (VAR_21, VAR_18);
     FUNC_0(VAR_21)->vcc = VAR_20;




     VAR_15->rx_bytes = VAR_18;
     VAR_15->rx_addr = VAR_21->data;
     FUNC_2 (VAR_3, "RX start simple transfer (addr %p, len %d)",
      VAR_21->data, VAR_18);


     FUNC_13 (VAR_15, 0);
     return;

   } else {
     FUNC_2 (VAR_4|VAR_6, "failed to get skb");
   }

 } else {
   FUNC_3 (VAR_9, "frame received on TX-only VC %x", VAR_19);

 }

      } else {
 FUNC_3 (VAR_10, "dropped over-size frame");

      }

    } else {
      FUNC_2 (VAR_6|VAR_5|VAR_3, "no VCC for this frame (VC closed)");

    }

  } else {

  }


  FUNC_7(VAR_15);

  FUNC_1 (VAR_15,VAR_19);
  FUNC_9 (VAR_14, &VAR_15->flags);

  return;
}
