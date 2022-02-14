
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct efx_tx_queue {int queue; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; struct efx_loopback_state* loopback_selftest; } ;
struct efx_loopback_state {int packet_count; int payload; struct sk_buff** skbs; } ;
struct TYPE_2__ {int saddr; } ;
struct efx_loopback_payload {TYPE_1__ ip; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct efx_tx_queue*,struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct efx_loopback_payload*,int *,int) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int ,int,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct efx_tx_queue *VAR_6)
{
 struct efx_nic *VAR_7 = VAR_6->efx;
 struct efx_loopback_state *VAR_8 = VAR_7->loopback_selftest;
 struct efx_loopback_payload *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11;
 netdev_tx_t VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_8->packet_count; VAR_11++) {


  VAR_10 = FUNC_1(sizeof(VAR_8->payload), VAR_2);
  if (!VAR_10)
   return -VAR_0;
  VAR_8->skbs[VAR_11] = VAR_10;
  FUNC_9(VAR_10);



  VAR_9 = ((struct efx_loopback_payload *)
      FUNC_10(VAR_10, sizeof(VAR_8->payload)));
  FUNC_5(VAR_9, &VAR_8->payload, sizeof(VAR_8->payload));
  VAR_9->ip.saddr = FUNC_3(VAR_3 | (VAR_11 << 2));



  FUNC_11();

  FUNC_7(VAR_7->net_dev);
  VAR_12 = FUNC_2(VAR_6, VAR_10);
  FUNC_8(VAR_7->net_dev);

  if (VAR_12 != VAR_4) {
   FUNC_6(VAR_7, VAR_5, VAR_7->net_dev,
      "TX queue %d could not transmit packet %d of "
      "%d in %s loopback test\n", VAR_6->queue,
      VAR_11 + 1, VAR_8->packet_count,
      FUNC_0(VAR_7));


   FUNC_4(VAR_10);
   return -VAR_1;
  }
 }

 return 0;
}
