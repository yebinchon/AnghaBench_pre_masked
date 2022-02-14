
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rxdone_entry_desc {int timestamp; int signal; int size; int dev_flags; scalar_t__ rssi; int flags; } ;
struct rt2x00_dev {scalar_t__ rssi_offset; int hw; TYPE_2__* ops; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {TYPE_3__* queue; struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_6__ {struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_5__ {TYPE_1__* hw; } ;
struct TYPE_4__ {int (* get_tsf ) (int ,int *) ;} ;


 int VAR_0 ;
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
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct queue_entry *VAR_11,
      struct rxdone_entry_desc *VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_11->queue->rt2x00dev;
 struct queue_entry_priv_mmio *VAR_14 = VAR_11->priv_data;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u64 VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 FUNC_0(VAR_14->desc, 0, &VAR_15);
 FUNC_0(VAR_14->desc, 2, &VAR_16);
 FUNC_0(VAR_14->desc, 3, &VAR_17);
 FUNC_0(VAR_14->desc, 4, &VAR_18);

 if (FUNC_1(VAR_15, VAR_2))
  VAR_12->flags |= VAR_9;
 if (FUNC_1(VAR_15, VAR_5))
  VAR_12->flags |= VAR_10;
 VAR_19 = VAR_13->ops->hw->get_tsf(VAR_13->hw, ((void*)0));
 VAR_20 = FUNC_1(VAR_18, VAR_8);
 VAR_21 = FUNC_3(VAR_19);

 if ((u32)VAR_19 <= VAR_20)
  VAR_21--;






 VAR_12->timestamp = ((u64)VAR_21 << 32) | VAR_20;
 VAR_12->signal = FUNC_1(VAR_16, VAR_6) & ~0x08;
 VAR_12->rssi = FUNC_1(VAR_16, VAR_7) -
     VAR_11->queue->rt2x00dev->rssi_offset;
 VAR_12->size = FUNC_1(VAR_15, VAR_3);

 VAR_12->dev_flags |= VAR_1;
 if (FUNC_1(VAR_15, VAR_4))
  VAR_12->dev_flags |= VAR_0;
}
