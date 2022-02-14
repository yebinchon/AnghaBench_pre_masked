
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_queue {struct iu_entry* pool; struct iu_entry* items; int queue; int lock; } ;
struct srp_buf {int dummy; } ;
struct iu_entry {struct srp_buf* sbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int) ;
 void* FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (void*,size_t,int ,int *) ;
 int FUNC_4 (struct iu_entry*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct srp_queue *VAR_2, size_t VAR_3,
        struct srp_buf **VAR_4)
{
 int VAR_5;
 struct iu_entry *VAR_6;

 VAR_2->pool = FUNC_2(VAR_3, sizeof(struct iu_entry *), VAR_1);
 if (!VAR_2->pool)
  return -VAR_0;
 VAR_2->items = FUNC_2(VAR_3, sizeof(struct iu_entry), VAR_1);
 if (!VAR_2->items)
  goto free_pool;

 FUNC_5(&VAR_2->lock);
 VAR_2->queue = FUNC_3((void *) VAR_2->pool, VAR_3 * sizeof(void *),
         VAR_1, &VAR_2->lock);
 if (FUNC_0(VAR_2->queue))
  goto free_item;

 for (VAR_5 = 0, VAR_6 = VAR_2->items; VAR_5 < VAR_3; VAR_5++) {
  FUNC_1(VAR_2->queue, (void *) &VAR_6, sizeof(void *));
  VAR_6->sbuf = VAR_4[VAR_5];
  VAR_6++;
 }
 return 0;

free_item:
 FUNC_4(VAR_2->items);
free_pool:
 FUNC_4(VAR_2->pool);
 return -VAR_0;
}
