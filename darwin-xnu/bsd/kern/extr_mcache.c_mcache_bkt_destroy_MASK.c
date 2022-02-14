
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int mc_flags; scalar_t__ mc_purge_cnt; int mc_private; int (* mc_slab_free ) (int ,TYPE_2__*,int) ;int mc_name; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_11__ {struct TYPE_11__* obj_next; } ;
typedef TYPE_2__ mcache_obj_t ;
struct TYPE_12__ {int bt_cache; } ;
typedef TYPE_3__ mcache_bkttype_t ;
struct TYPE_13__ {TYPE_2__** bkt_obj; } ;
typedef TYPE_4__ mcache_bkt_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (char*,int ,void*,void*,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(mcache_t *VAR_1, mcache_bkttype_t *VAR_2, mcache_bkt_t *VAR_3,
    int VAR_4)
{
 if (VAR_4 > 0) {
  mcache_obj_t *VAR_5 = VAR_3->bkt_obj[VAR_4 - 1];

  if (VAR_1->mc_flags & VAR_0) {
   mcache_obj_t *VAR_6 = VAR_5;
   int VAR_7 = 0;






   while (VAR_6 != ((void*)0)) {
    VAR_6 = VAR_6->obj_next;
    ++VAR_7;
   }
   if (VAR_7 != VAR_4) {
    FUNC_1("mcache_bkt_destroy: %s cp %p corrupted "
        "list in bkt %p (nobjs %d actual %d)\n",
        VAR_1->mc_name, (void *)VAR_1, (void *)VAR_3,
        VAR_4, VAR_7);
   }
  }


  (*VAR_1->mc_slab_free)(VAR_1->mc_private, VAR_5,
      (VAR_1->mc_flags & VAR_0) || VAR_1->mc_purge_cnt);
 }
 FUNC_0(VAR_2->bt_cache, VAR_3);
}
