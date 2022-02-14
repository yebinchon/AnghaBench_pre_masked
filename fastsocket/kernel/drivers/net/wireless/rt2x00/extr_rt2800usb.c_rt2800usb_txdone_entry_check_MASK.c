
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct queue_entry {int entry_idx; TYPE_1__* queue; int flags; } ;
typedef enum txdone_entry_desc_flags { ____Placeholder_txdone_entry_desc_flags } txdone_entry_desc_flags ;
typedef int __le32 ;
struct TYPE_2__ {int qid; int rt2x00dev; } ;


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
 int * FUNC_0 (struct queue_entry*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static enum txdone_entry_desc_flags
FUNC_5(struct queue_entry *VAR_11, u32 VAR_12)
{
 __le32 *VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;






 if (FUNC_4(VAR_0, &VAR_11->flags))
  return VAR_1;

 VAR_15 = FUNC_3(VAR_12, VAR_10);
 VAR_16 = FUNC_3(VAR_12, VAR_8);
 VAR_17 = FUNC_3(VAR_12, VAR_7);
 VAR_21 = FUNC_3(VAR_12, VAR_9);





 VAR_13 = FUNC_0(VAR_11);

 FUNC_2(VAR_13, 1, &VAR_14);
 VAR_18 = FUNC_3(VAR_14, VAR_6);
 VAR_19 = FUNC_3(VAR_14, VAR_4);
 VAR_20 = FUNC_3(VAR_14, VAR_5);

 if (VAR_15 != VAR_18 || VAR_16 != VAR_19 || (!VAR_21 && VAR_17 != VAR_20)) {
  FUNC_1(VAR_11->queue->rt2x00dev,
      "TX status report missed for queue %d entry %d\n",
      VAR_11->queue->qid, VAR_11->entry_idx);
  return VAR_3;
 }

 return VAR_2;
}
