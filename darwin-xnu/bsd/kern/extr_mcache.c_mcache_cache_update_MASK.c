
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mc_flags; int mc_bkt_lock; scalar_t__ mc_bkt_contention; scalar_t__ mc_bkt_contention_prev; TYPE_1__* cache_bkttype; scalar_t__ mc_chunksize; int mc_sync_lock; scalar_t__ mc_enable_cnt; } ;
typedef TYPE_2__ mcache_t ;
struct TYPE_6__ {unsigned int bt_maxbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(mcache_t *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_2(VAR_5, VAR_0);

 FUNC_5(VAR_6);







 FUNC_3(&VAR_6->mc_sync_lock);
 if (!(VAR_6->mc_flags & VAR_1) && VAR_6->mc_enable_cnt)
  VAR_8 = 1;
 FUNC_4(&VAR_6->mc_sync_lock);

 FUNC_0(&VAR_6->mc_bkt_lock);






 if ((unsigned int)VAR_6->mc_chunksize < VAR_6->cache_bkttype->bt_maxbuf &&
     (int)(VAR_6->mc_bkt_contention - VAR_6->mc_bkt_contention_prev) >
     VAR_2 && !VAR_8)
  VAR_7 = 1;

 VAR_6 ->mc_bkt_contention_prev = VAR_6->mc_bkt_contention;
 FUNC_1(&VAR_6->mc_bkt_lock);

 if (VAR_7)
  FUNC_6(VAR_3, VAR_6);
 else if (VAR_8)
  FUNC_6(VAR_4, VAR_6);
}
