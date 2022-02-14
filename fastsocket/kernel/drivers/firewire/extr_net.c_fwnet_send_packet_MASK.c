
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rfc2734_header {int w1; int w0; } ;
struct TYPE_7__ {int w0; int w1; } ;
struct fwnet_packet_task {unsigned int max_payload; scalar_t__ dest_node; int generation; unsigned long long fifo_addr; int pt_link; TYPE_2__* skb; int speed; int transaction; TYPE_3__ hdr; struct fwnet_device* dev; } ;
struct fwnet_device {TYPE_1__* netdev; int lock; int sent_list; TYPE_4__* card; int broadcasted_list; } ;
struct TYPE_8__ {int generation; int node_id; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int trans_start; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,int *,int ,scalar_t__,int,int ,unsigned long long,int ,unsigned int,int ,struct fwnet_packet_task*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int *) ;
 int * FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct fwnet_packet_task *VAR_11)
{
 struct fwnet_device *VAR_12;
 unsigned VAR_13;
 struct rfc2734_header *VAR_14;
 unsigned long VAR_15;

 VAR_12 = VAR_11->dev;
 VAR_13 = VAR_11->max_payload;
 switch (FUNC_3(&VAR_11->hdr)) {
 case 128:
  VAR_14 = (struct rfc2734_header *)
    FUNC_6(VAR_11->skb, VAR_4);
  FUNC_5(VAR_11->hdr.w0, &VAR_14->w0);
  break;

 case 131:
 case 130:
 case 129:
  VAR_14 = (struct rfc2734_header *)
    FUNC_6(VAR_11->skb, VAR_3);
  FUNC_5(VAR_11->hdr.w0, &VAR_14->w0);
  FUNC_5(VAR_11->hdr.w1, &VAR_14->w1);
  break;

 default:
  FUNC_0();
 }
 if (VAR_11->dest_node == VAR_1) {
  u8 *VAR_16;
  int VAR_17;
  int VAR_18;


  VAR_17 = VAR_12->card->generation;
  FUNC_7();
  VAR_18 = VAR_12->card->node_id;

  VAR_16 = FUNC_6(VAR_11->skb, 8);
  FUNC_5(VAR_18 << 16 | VAR_0 >> 8, VAR_16);
  FUNC_5((VAR_0 & 0xff) << 24
      | VAR_5, &VAR_16[4]);


  FUNC_1(VAR_12->card, &VAR_11->transaction,
    VAR_7,
    FUNC_2(3,
      VAR_2, 0),
    VAR_17, VAR_6, 0ULL, VAR_11->skb->data,
    VAR_13 + 8, VAR_9, VAR_11);


  FUNC_8(&VAR_12->lock, VAR_15);
  FUNC_4(&VAR_11->pt_link, &VAR_12->broadcasted_list);
  FUNC_9(&VAR_12->lock, VAR_15);

  return 0;
 }

 FUNC_1(VAR_12->card, &VAR_11->transaction,
   VAR_8, VAR_11->dest_node,
   VAR_11->generation, VAR_11->speed, VAR_11->fifo_addr,
   VAR_11->skb->data, VAR_13, VAR_9, VAR_11);


 FUNC_8(&VAR_12->lock, VAR_15);
 FUNC_4(&VAR_11->pt_link, &VAR_12->sent_list);
 FUNC_9(&VAR_12->lock, VAR_15);

 VAR_12->netdev->trans_start = VAR_10;

 return 0;
}
