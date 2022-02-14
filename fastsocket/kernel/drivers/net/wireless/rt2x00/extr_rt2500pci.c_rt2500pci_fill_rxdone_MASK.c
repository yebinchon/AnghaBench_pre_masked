
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rxdone_entry_desc {int dev_flags; void* size; void* rssi; void* signal; int flags; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {TYPE_2__* queue; struct queue_entry_priv_mmio* priv_data; } ;
struct TYPE_4__ {TYPE_1__* rt2x00dev; } ;
struct TYPE_3__ {void* rssi_offset; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int,int *) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct queue_entry *VAR_12,
      struct rxdone_entry_desc *VAR_13)
{
 struct queue_entry_priv_mmio *VAR_14 = VAR_12->priv_data;
 u32 VAR_15;
 u32 VAR_16;

 FUNC_0(VAR_14->desc, 0, &VAR_15);
 FUNC_0(VAR_14->desc, 2, &VAR_16);

 if (FUNC_1(VAR_15, VAR_3))
  VAR_13->flags |= VAR_10;
 if (FUNC_1(VAR_15, VAR_7))
  VAR_13->flags |= VAR_11;







 VAR_13->signal = FUNC_1(VAR_16, VAR_9);
 VAR_13->rssi = FUNC_1(VAR_16, VAR_8) -
     VAR_12->queue->rt2x00dev->rssi_offset;
 VAR_13->size = FUNC_1(VAR_15, VAR_4);

 if (FUNC_1(VAR_15, VAR_6))
  VAR_13->dev_flags |= VAR_2;
 else
  VAR_13->dev_flags |= VAR_1;
 if (FUNC_1(VAR_15, VAR_5))
  VAR_13->dev_flags |= VAR_0;
}
