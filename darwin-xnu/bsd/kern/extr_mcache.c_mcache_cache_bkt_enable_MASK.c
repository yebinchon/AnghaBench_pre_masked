
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mc_flags; TYPE_1__* cache_bkttype; TYPE_3__* mc_cpu; } ;
typedef TYPE_2__ mcache_t ;
struct TYPE_7__ {int cc_lock; int cc_bktsize; } ;
typedef TYPE_3__ mcache_cpu_t ;
struct TYPE_5__ {int bt_bktsize; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(mcache_t *VAR_2)
{
 mcache_cpu_t *VAR_3;
 int VAR_4;

 if (VAR_2->mc_flags & VAR_0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->mc_cpu[VAR_4];
  FUNC_0(&VAR_3->cc_lock);
  VAR_3->cc_bktsize = VAR_2->cache_bkttype->bt_bktsize;
  FUNC_1(&VAR_3->cc_lock);
 }
}
