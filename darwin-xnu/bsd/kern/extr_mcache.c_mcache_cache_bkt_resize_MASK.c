
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mc_bkt_lock; scalar_t__ mc_bkt_contention; scalar_t__ mc_bkt_contention_prev; TYPE_2__* cache_bkttype; scalar_t__ mc_chunksize; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_6__ {unsigned int bt_maxbuf; } ;
typedef TYPE_2__ mcache_bkttype_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 mcache_t *VAR_2 = VAR_1;
 mcache_bkttype_t *VAR_3 = VAR_2->cache_bkttype;

 if ((unsigned int)VAR_2->mc_chunksize < VAR_3->bt_maxbuf) {
  FUNC_2(VAR_2);






  FUNC_0(&VAR_2->mc_bkt_lock);
  VAR_2->cache_bkttype = ++VAR_3;
  VAR_2 ->mc_bkt_contention_prev = VAR_2->mc_bkt_contention + VAR_0;
  FUNC_1(&VAR_2->mc_bkt_lock);

  FUNC_3(VAR_2);
 }
}
