
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {int dummy; } ;
struct data_queue {size_t* index; int index_lock; struct queue_entry* entries; int rt2x00dev; } ;
typedef enum queue_index { ____Placeholder_queue_index } queue_index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

struct queue_entry *FUNC_4(struct data_queue *VAR_1,
       enum queue_index VAR_2)
{
 struct queue_entry *VAR_3;
 unsigned long VAR_4;

 if (FUNC_3(VAR_2 >= VAR_0)) {
  FUNC_0(VAR_1->rt2x00dev, "Entry requested from invalid index type (%d)\n",
      VAR_2);
  return ((void*)0);
 }

 FUNC_1(&VAR_1->index_lock, VAR_4);

 VAR_3 = &VAR_1->entries[VAR_1->index[VAR_2]];

 FUNC_2(&VAR_1->index_lock, VAR_4);

 return VAR_3;
}
