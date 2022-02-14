
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct txdone_entry_desc {int retry; scalar_t__ flags; } ;
struct rt2x00_dev {TYPE_2__* ops; } ;
struct queue_entry_priv_mmio {int desc; } ;
struct queue_entry {int entry_idx; struct queue_entry_priv_mmio* priv_data; } ;
struct data_queue {int limit; struct queue_entry* entries; } ;
struct TYPE_4__ {TYPE_1__* tx; } ;
struct TYPE_3__ {int entry_num; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,char*,int ) ;
 int FUNC_4 (struct queue_entry*,struct txdone_entry_desc*) ;
 int FUNC_5 (struct queue_entry*,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int *) ;
 struct queue_entry* FUNC_7 (struct data_queue*,int ) ;
 struct data_queue* FUNC_8 (struct rt2x00_dev*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_14)
{
 struct data_queue *VAR_15;
 struct queue_entry *VAR_16;
 struct queue_entry *VAR_17;
 struct queue_entry_priv_mmio *VAR_18;
 struct txdone_entry_desc VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 for (VAR_24 = 0; VAR_24 < VAR_14->ops->tx->entry_num; VAR_24++) {
  FUNC_6(VAR_14, VAR_1, &VAR_21);
  if (!FUNC_2(VAR_21, VAR_6))
   break;





  VAR_22 = FUNC_2(VAR_21, VAR_3);
  VAR_15 = FUNC_8(VAR_14, VAR_22);
  if (FUNC_9(!VAR_15))
   continue;





  VAR_23 = FUNC_2(VAR_21, VAR_2);
  if (FUNC_9(VAR_23 >= VAR_15->limit))
   continue;

  VAR_16 = &VAR_15->entries[VAR_23];
  VAR_18 = VAR_16->priv_data;
  FUNC_1(VAR_18->desc, 0, &VAR_20);

  if (FUNC_2(VAR_20, VAR_12) ||
      !FUNC_2(VAR_20, VAR_13))
   return;

  VAR_17 = FUNC_7(VAR_15, VAR_0);
  while (VAR_16 != VAR_17) {



   FUNC_3(VAR_14, "TX status report missed for entry %d\n",
        VAR_17->entry_idx);

   FUNC_5(VAR_17, VAR_11);
   VAR_17 = FUNC_7(VAR_15, VAR_0);
  }




  VAR_19.flags = 0;
  switch (FUNC_2(VAR_21, VAR_5)) {
  case 0:
   FUNC_0(VAR_10, &VAR_19.flags);
   break;
  case 6:
   FUNC_0(VAR_7, &VAR_19.flags);

  default:
   FUNC_0(VAR_8, &VAR_19.flags);
  }
  VAR_19.retry = FUNC_2(VAR_21, VAR_4);





  if (VAR_19.retry)
   FUNC_0(VAR_9, &VAR_19.flags);

  FUNC_4(VAR_16, &VAR_19);
 }
}
