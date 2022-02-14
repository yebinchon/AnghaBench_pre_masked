
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cache; } ;
struct stripe_cache {int hash; scalar_t__ dm_io_client; scalar_t__ mem_cache_client; TYPE_1__ kc; int stripes; } ;
struct raid_set {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct raid_set* FUNC_2 (struct stripe_cache*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct stripe_cache*,int ) ;
 int FUNC_9 (struct raid_set*) ;

__attribute__((used)) static void FUNC_10(struct stripe_cache *VAR_0)
{
 struct raid_set *VAR_1 = FUNC_2(VAR_0);

 if (VAR_0->kc.cache) {
  FUNC_9(VAR_1);
  FUNC_0(FUNC_8(VAR_0, FUNC_3(&VAR_0->stripes)));
  FUNC_7(VAR_0->kc.cache);
  VAR_0->kc.cache = ((void*)0);

  if (VAR_0->mem_cache_client && !FUNC_1(VAR_0->mem_cache_client))
   FUNC_5(VAR_0->mem_cache_client);

  if (VAR_0->dm_io_client && !FUNC_1(VAR_0->dm_io_client))
   FUNC_4(VAR_0->dm_io_client);

  FUNC_6(&VAR_0->hash);
 }
}
