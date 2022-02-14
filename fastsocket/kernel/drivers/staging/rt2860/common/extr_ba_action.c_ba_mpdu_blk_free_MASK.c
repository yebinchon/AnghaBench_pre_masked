
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reordering_mpdu {int dummy; } ;
struct TYPE_4__ {int lock; int freelist; } ;
struct TYPE_5__ {TYPE_1__ mpdu_blk_pool; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (struct reordering_mpdu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct reordering_mpdu*) ;

__attribute__((used)) static void FUNC_4(PRTMP_ADAPTER VAR_0, struct reordering_mpdu *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_1(&VAR_0->mpdu_blk_pool.lock);

 FUNC_3(&VAR_0->mpdu_blk_pool.freelist, VAR_1);
 FUNC_2(&VAR_0->mpdu_blk_pool.lock);
}
