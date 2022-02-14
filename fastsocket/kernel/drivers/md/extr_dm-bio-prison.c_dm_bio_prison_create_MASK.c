
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hlist_head {int dummy; } ;
struct dm_bio_prison {int nr_buckets; int hash_mask; struct hlist_head* cells; int cell_pool; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_head*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct dm_bio_prison*) ;
 struct dm_bio_prison* FUNC_3 (size_t,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;

struct dm_bio_prison *FUNC_6(unsigned VAR_2)
{
 unsigned VAR_3;
 uint32_t VAR_4 = FUNC_1(VAR_2);
 size_t VAR_5 = sizeof(struct dm_bio_prison) +
  (sizeof(struct hlist_head) * VAR_4);
 struct dm_bio_prison *VAR_6 = FUNC_3(VAR_5, VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_5(&VAR_6->lock);
 VAR_6->cell_pool = FUNC_4(VAR_2, VAR_1);
 if (!VAR_6->cell_pool) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_6->nr_buckets = VAR_4;
 VAR_6->hash_mask = VAR_4 - 1;
 VAR_6->cells = (struct hlist_head *) (VAR_6 + 1);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_0(VAR_6->cells + VAR_3);

 return VAR_6;
}
