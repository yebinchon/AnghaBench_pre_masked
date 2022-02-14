
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rxdone_entry_desc {scalar_t__ cipher; scalar_t__ cipher_status; int dev_flags; void* size; int rssi; void* signal; int flags; int icv; int * iv; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {struct queue_entry_priv_mmio* priv_data; TYPE_1__* queue; } ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


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
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct queue_entry *VAR_20,
    struct rxdone_entry_desc *VAR_21)
{
 struct rt2x00_dev *VAR_22 = VAR_20->queue->rt2x00dev;
 struct queue_entry_priv_mmio *VAR_23 = VAR_20->priv_data;
 u32 VAR_24;
 u32 VAR_25;

 FUNC_1(VAR_23->desc, 0, &VAR_24);
 FUNC_1(VAR_23->desc, 1, &VAR_25);

 if (FUNC_2(VAR_24, VAR_8))
  VAR_21->flags |= VAR_16;

 VAR_21->cipher = FUNC_2(VAR_24, VAR_6);
 VAR_21->cipher_status = FUNC_2(VAR_24, VAR_7);

 if (VAR_21->cipher != VAR_0) {
  FUNC_0(VAR_23->desc, 2, &VAR_21->iv[0]);
  FUNC_0(VAR_23->desc, 3, &VAR_21->iv[1]);
  VAR_21->dev_flags |= VAR_2;

  FUNC_0(VAR_23->desc, 4, &VAR_21->icv);
  VAR_21->dev_flags |= VAR_1;






  VAR_21->flags |= VAR_17;





  VAR_21->flags |= VAR_19;

  if (VAR_21->cipher_status == VAR_14)
   VAR_21->flags |= VAR_15;
  else if (VAR_21->cipher_status == VAR_13)
   VAR_21->flags |= VAR_18;
 }







 VAR_21->signal = FUNC_2(VAR_25, VAR_12);
 VAR_21->rssi = FUNC_3(VAR_22, VAR_25);
 VAR_21->size = FUNC_2(VAR_24, VAR_9);

 if (FUNC_2(VAR_24, VAR_11))
  VAR_21->dev_flags |= VAR_5;
 else
  VAR_21->dev_flags |= VAR_4;
 if (FUNC_2(VAR_24, VAR_10))
  VAR_21->dev_flags |= VAR_3;
}
