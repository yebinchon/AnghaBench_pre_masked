
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int txstatus_fifo; } ;
struct queue_entry {int entry_idx; int flags; } ;
struct data_queue {int dummy; } ;
typedef enum txdone_entry_desc_flags { ____Placeholder_txdone_entry_desc_flags } txdone_entry_desc_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct queue_entry*,int ,int ) ;
 int FUNC_3 (struct queue_entry*) ;
 int FUNC_4 (struct queue_entry*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,char*,int ,...) ;
 int FUNC_7 (struct queue_entry*,int) ;
 int FUNC_8 (struct data_queue*) ;
 struct queue_entry* FUNC_9 (struct data_queue*,int ) ;
 struct data_queue* FUNC_10 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct rt2x00_dev *VAR_5)
{
 struct data_queue *VAR_6;
 struct queue_entry *VAR_7;
 u32 VAR_8;
 u8 VAR_9;
 enum txdone_entry_desc_flags VAR_10;

 while (FUNC_0(&VAR_5->txstatus_fifo, &VAR_8)) {




  VAR_9 = FUNC_5(VAR_8, VAR_4);
  VAR_6 = FUNC_10(VAR_5, VAR_9);

  if (FUNC_12(FUNC_8(VAR_6))) {
   FUNC_6(VAR_5, "Got TX status for an empty queue %u, dropping\n",
        VAR_9);
   break;
  }

  VAR_7 = FUNC_9(VAR_6, VAR_2);

  if (FUNC_12(FUNC_11(VAR_1, &VAR_7->flags) ||
        !FUNC_11(VAR_0, &VAR_7->flags))) {
   FUNC_6(VAR_5, "Data pending for entry %u in queue %u\n",
        VAR_7->entry_idx, VAR_9);
   break;
  }

  VAR_10 = FUNC_4(VAR_7, VAR_8);
  if (FUNC_1(VAR_10 == VAR_3))
   FUNC_2(VAR_7, VAR_8, FUNC_3(VAR_7));
  else
   FUNC_7(VAR_7, VAR_10);
 }
}
