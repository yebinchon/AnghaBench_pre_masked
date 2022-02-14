
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


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct reordering_mpdu*,int) ;
 struct reordering_mpdu* FUNC_3 (int *) ;

__attribute__((used)) static struct reordering_mpdu *FUNC_4(PRTMP_ADAPTER VAR_0)
{
 struct reordering_mpdu *VAR_1;

 FUNC_0(&VAR_0->mpdu_blk_pool.lock);
 VAR_1 = FUNC_3(&VAR_0->mpdu_blk_pool.freelist);
 if (VAR_1)
 {


  FUNC_2(VAR_1, sizeof(struct reordering_mpdu));
 }
 FUNC_1(&VAR_0->mpdu_blk_pool.lock);
 return VAR_1;
}
