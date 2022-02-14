
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int lru; int count; int stripe_lock; int lock; struct r5conf* raid_conf; } ;
struct r5conf {int active_stripes; int slab_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct stripe_head*) ;
 int FUNC_4 (int ,struct stripe_head*) ;
 struct stripe_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct stripe_head*) ;
 int FUNC_7 (struct stripe_head*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct r5conf *VAR_1)
{
 struct stripe_head *VAR_2;
 VAR_2 = FUNC_5(VAR_1->slab_cache, VAR_0);
 if (!VAR_2)
  return 0;

 VAR_2->raid_conf = VAR_1;

 FUNC_8(&VAR_2->lock);
 FUNC_8(&VAR_2->stripe_lock);

 if (FUNC_3(VAR_2)) {
  FUNC_7(VAR_2);
  FUNC_4(VAR_1->slab_cache, VAR_2);
  return 0;
 }

 FUNC_2(&VAR_2->count, 1);
 FUNC_1(&VAR_1->active_stripes);
 FUNC_0(&VAR_2->lru);
 FUNC_6(VAR_2);
 return 1;
}
