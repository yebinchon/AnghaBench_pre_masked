
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mc_bkt_lock; int * cache_bkttype; int mc_bkt_contention; } ;
typedef TYPE_1__ mcache_t ;
typedef int mcache_bkttype_t ;
struct TYPE_8__ {scalar_t__ bl_total; scalar_t__ bl_min; int bl_alloc; TYPE_3__* bl_list; } ;
typedef TYPE_2__ mcache_bktlist_t ;
struct TYPE_9__ {struct TYPE_9__* bkt_next; } ;
typedef TYPE_3__ mcache_bkt_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static mcache_bkt_t *
FUNC_3(mcache_t *VAR_0, mcache_bktlist_t *VAR_1, mcache_bkttype_t **VAR_2)
{
 mcache_bkt_t *VAR_3;

 if (!FUNC_1(&VAR_0->mc_bkt_lock)) {





  FUNC_0(&VAR_0->mc_bkt_lock);
  VAR_0->mc_bkt_contention++;
 }

 if ((VAR_3 = VAR_1->bl_list) != ((void*)0)) {
  VAR_1->bl_list = VAR_3->bkt_next;
  if (--VAR_1->bl_total < VAR_1->bl_min)
   VAR_1->bl_min = VAR_1->bl_total;
  VAR_1->bl_alloc++;
 }

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->cache_bkttype;

 FUNC_2(&VAR_0->mc_bkt_lock);

 return (VAR_3);
}
