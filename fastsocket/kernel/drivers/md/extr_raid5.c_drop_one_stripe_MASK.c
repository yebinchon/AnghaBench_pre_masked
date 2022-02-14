
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int count; } ;
struct r5conf {int active_stripes; int slab_cache; int device_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stripe_head* FUNC_3 (struct r5conf*) ;
 int FUNC_4 (int ,struct stripe_head*) ;
 int FUNC_5 (struct stripe_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct r5conf *VAR_0)
{
 struct stripe_head *VAR_1;

 FUNC_6(&VAR_0->device_lock);
 VAR_1 = FUNC_3(VAR_0);
 FUNC_7(&VAR_0->device_lock);
 if (!VAR_1)
  return 0;
 FUNC_0(FUNC_2(&VAR_1->count));
 FUNC_5(VAR_1);
 FUNC_4(VAR_0->slab_cache, VAR_1);
 FUNC_1(&VAR_0->active_stripes);
 return 1;
}
