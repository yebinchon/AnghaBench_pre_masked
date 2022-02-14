
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mc_bkt_lock; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_8__ {int bl_total; TYPE_3__* bl_list; } ;
typedef TYPE_2__ mcache_bktlist_t ;
struct TYPE_9__ {struct TYPE_9__* bkt_next; } ;
typedef TYPE_3__ mcache_bkt_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(mcache_t *VAR_0, mcache_bktlist_t *VAR_1, mcache_bkt_t *VAR_2)
{
 FUNC_0(&VAR_0->mc_bkt_lock);

 VAR_2->bkt_next = VAR_1->bl_list;
 VAR_1->bl_list = VAR_2;
 VAR_1->bl_total++;

 FUNC_1(&VAR_0->mc_bkt_lock);
}
