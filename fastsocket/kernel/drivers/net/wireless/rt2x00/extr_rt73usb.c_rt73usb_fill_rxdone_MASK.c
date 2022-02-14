
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct skb_frame_desc {scalar_t__ desc; int desc_len; } ;
struct rxdone_entry_desc {scalar_t__ cipher; scalar_t__ cipher_status; void* size; int dev_flags; int rssi; void* signal; int flags; int icv; int * iv; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; } ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {int desc_size; struct rt2x00_dev* rt2x00dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int,int *) ;
 struct skb_frame_desc* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (int *,int,int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,void*) ;

__attribute__((used)) static void FUNC_8(struct queue_entry *VAR_20,
    struct rxdone_entry_desc *VAR_21)
{
 struct rt2x00_dev *VAR_22 = VAR_20->queue->rt2x00dev;
 struct skb_frame_desc *VAR_23 = FUNC_1(VAR_20->skb);
 __le32 *VAR_24 = (__le32 *)VAR_20->skb->data;
 u32 VAR_25;
 u32 VAR_26;





 FUNC_2(VAR_23->desc, VAR_24, VAR_23->desc_len);
 VAR_24 = (__le32 *)VAR_23->desc;




 FUNC_3(VAR_24, 0, &VAR_25);
 FUNC_3(VAR_24, 1, &VAR_26);

 if (FUNC_4(VAR_25, VAR_8))
  VAR_21->flags |= VAR_16;

 VAR_21->cipher = FUNC_4(VAR_25, VAR_6);
 VAR_21->cipher_status = FUNC_4(VAR_25, VAR_7);

 if (VAR_21->cipher != VAR_0) {
  FUNC_0(VAR_24, 2, &VAR_21->iv[0]);
  FUNC_0(VAR_24, 3, &VAR_21->iv[1]);
  VAR_21->dev_flags |= VAR_2;

  FUNC_0(VAR_24, 4, &VAR_21->icv);
  VAR_21->dev_flags |= VAR_1;






  VAR_21->flags |= VAR_17;





  VAR_21->flags |= VAR_19;

  if (VAR_21->cipher_status == VAR_14)
   VAR_21->flags |= VAR_15;
  else if (VAR_21->cipher_status == VAR_13)
   VAR_21->flags |= VAR_18;
 }







 VAR_21->signal = FUNC_4(VAR_26, VAR_12);
 VAR_21->rssi = FUNC_5(VAR_22, VAR_26);
 VAR_21->size = FUNC_4(VAR_25, VAR_9);

 if (FUNC_4(VAR_25, VAR_11))
  VAR_21->dev_flags |= VAR_5;
 else
  VAR_21->dev_flags |= VAR_4;
 if (FUNC_4(VAR_25, VAR_10))
  VAR_21->dev_flags |= VAR_3;




 FUNC_6(VAR_20->skb, VAR_20->queue->desc_size);
 FUNC_7(VAR_20->skb, VAR_21->size);
}
