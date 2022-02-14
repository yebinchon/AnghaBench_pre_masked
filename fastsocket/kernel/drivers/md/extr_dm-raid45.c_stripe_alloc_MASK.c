
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cache; } ;
struct stripe_cache {TYPE_1__ kc; } ;
struct stripe {int obj; } ;
struct dm_mem_cache_client {int dummy; } ;
typedef enum grow { ____Placeholder_grow } grow ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dm_mem_cache_client*) ;
 int FUNC_2 (struct dm_mem_cache_client*,int) ;
 int FUNC_3 (struct dm_mem_cache_client*,int) ;
 int FUNC_4 (int ,struct stripe*) ;
 struct stripe* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct stripe_cache*,struct stripe*) ;

__attribute__((used)) static struct stripe *FUNC_7(struct stripe_cache *VAR_2,
       struct dm_mem_cache_client *VAR_3,
       enum grow VAR_4)
{
 int VAR_5;
 struct stripe *VAR_6;

 VAR_6 = FUNC_5(VAR_2->kc.cache, VAR_0);
 if (VAR_6) {

  if (VAR_4 == VAR_1) {
   VAR_5 = FUNC_2(VAR_3, 1);
   if (VAR_5)
    goto err_free;
  }

  VAR_6->obj = FUNC_1(VAR_3);
  if (FUNC_0(VAR_6->obj))
   goto err_shrink;

  FUNC_6(VAR_2, VAR_6);
 }

 return VAR_6;

err_shrink:
 if (VAR_4 == VAR_1)
  FUNC_3(VAR_3, 1);
err_free:
 FUNC_4(VAR_2->kc.cache, VAR_6);
 return ((void*)0);
}
