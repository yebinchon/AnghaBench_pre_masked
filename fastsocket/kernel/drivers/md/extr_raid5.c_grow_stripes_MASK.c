
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int dummy; } ;
struct r5dev {int dummy; } ;
struct r5conf {char** cache_name; int level; size_t active_name; int pool_size; struct kmem_cache* slab_cache; TYPE_1__* mddev; int previous_raid_disks; int raid_disks; } ;
struct kmem_cache {int dummy; } ;
struct TYPE_2__ {scalar_t__ gendisk; } ;


 int FUNC_0 (struct r5conf*) ;
 struct kmem_cache* FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct r5conf *VAR_0, int VAR_1)
{
 struct kmem_cache *VAR_2;
 int VAR_3 = FUNC_2(VAR_0->raid_disks, VAR_0->previous_raid_disks);

 if (VAR_0->mddev->gendisk)
  FUNC_4(VAR_0->cache_name[0],
   "raid%d-%s", VAR_0->level, FUNC_3(VAR_0->mddev));
 else
  FUNC_4(VAR_0->cache_name[0],
   "raid%d-%p", VAR_0->level, VAR_0->mddev);
 FUNC_4(VAR_0->cache_name[1], "%s-alt", VAR_0->cache_name[0]);

 VAR_0->active_name = 0;
 VAR_2 = FUNC_1(VAR_0->cache_name[VAR_0->active_name],
          sizeof(struct stripe_head)+(VAR_3-1)*sizeof(struct r5dev),
          0, 0, ((void*)0));
 if (!VAR_2)
  return 1;
 VAR_0->slab_cache = VAR_2;
 VAR_0->pool_size = VAR_3;
 while (VAR_1--)
  if (!FUNC_0(VAR_0))
   return 1;
 return 0;
}
