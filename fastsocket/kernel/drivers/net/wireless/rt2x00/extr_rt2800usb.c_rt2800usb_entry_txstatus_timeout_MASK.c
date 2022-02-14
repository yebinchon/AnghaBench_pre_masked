
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_entry {TYPE_1__* queue; int entry_idx; scalar_t__ last_action; int flags; } ;
struct TYPE_2__ {int qid; int rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline bool FUNC_5(struct queue_entry *VAR_2)
{
 bool VAR_3;

 if (!FUNC_2(VAR_0, &VAR_2->flags))
  return 0;

 VAR_3 = FUNC_3(VAR_1, VAR_2->last_action + FUNC_0(100));
 if (FUNC_4(VAR_3))
  FUNC_1(VAR_2->queue->rt2x00dev,
       "TX status timeout for entry %d in queue %d\n",
       VAR_2->entry_idx, VAR_2->queue->qid);
 return VAR_3;

}
