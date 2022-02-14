
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int u32 ;
struct aac_queue_block {TYPE_1__* queue; } ;
struct aac_entry {int dummy; } ;
struct aac_dev {int fib_lock; struct aac_queue_block* queues; } ;
struct TYPE_2__ {int lock; struct aac_entry* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct aac_dev*,void**,unsigned long,int ) ;
 int FUNC_1 (struct aac_dev*,TYPE_1__*,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct aac_dev * VAR_20)
{
 unsigned long VAR_21 = (sizeof(u32) * VAR_17) * 2;
 unsigned long VAR_22 = sizeof(struct aac_entry) * VAR_19;
 u32 *VAR_23;
 struct aac_entry * VAR_24;
 unsigned long VAR_25;
 struct aac_queue_block * VAR_26 = VAR_20->queues;






 FUNC_2(&VAR_20->fib_lock);






 VAR_25 = VAR_21 + VAR_22;

 if (!FUNC_0(VAR_20, (void * *)&VAR_23, VAR_25, VAR_18))
  return -VAR_8;

 VAR_24 = (struct aac_entry *)(((ulong)VAR_23) + VAR_21);


 VAR_26->queue[VAR_15].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_15], VAR_23, VAR_11);
 VAR_24 += VAR_11;
 VAR_23 += 2;


 VAR_26->queue[VAR_13].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_13], VAR_23, VAR_9);

 VAR_24 += VAR_9;
 VAR_23 +=2;


 VAR_26->queue[VAR_6].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_6], VAR_23, VAR_2);

 VAR_24 += VAR_2;
 VAR_23 += 2;


 VAR_26->queue[VAR_4].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_4], VAR_23, VAR_0);

 VAR_24 += VAR_0;
 VAR_23 += 2;


 VAR_26->queue[VAR_16].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_16], VAR_23, VAR_12);
 VAR_24 += VAR_12;
 VAR_23 += 2;


 VAR_26->queue[VAR_14].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_14], VAR_23, VAR_10);

 VAR_24 += VAR_10;
 VAR_23 += 2;


 VAR_26->queue[VAR_7].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_7], VAR_23, VAR_3);

 VAR_24 += VAR_3;
 VAR_23 += 2;


 VAR_26->queue[VAR_5].base = VAR_24;
 FUNC_1(VAR_20, &VAR_26->queue[VAR_5], VAR_23, VAR_1);

 VAR_26->queue[VAR_6].lock = VAR_26->queue[VAR_16].lock;
 VAR_26->queue[VAR_4].lock = VAR_26->queue[VAR_14].lock;
 VAR_26->queue[VAR_7].lock = VAR_26->queue[VAR_15].lock;
 VAR_26->queue[VAR_5].lock = VAR_26->queue[VAR_13].lock;

 return 0;
}
