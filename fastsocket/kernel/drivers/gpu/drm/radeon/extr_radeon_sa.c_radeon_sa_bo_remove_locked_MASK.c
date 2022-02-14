
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_sa_manager {TYPE_1__* hole; } ;
struct TYPE_2__ {struct TYPE_2__* prev; } ;
struct radeon_sa_bo {int fence; TYPE_1__ flist; TYPE_1__ olist; struct radeon_sa_manager* manager; } ;


 int FUNC_0 (struct radeon_sa_bo*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct radeon_sa_bo *VAR_0)
{
 struct radeon_sa_manager *VAR_1 = VAR_0->manager;
 if (VAR_1->hole == &VAR_0->olist) {
  VAR_1->hole = VAR_0->olist.prev;
 }
 FUNC_1(&VAR_0->olist);
 FUNC_1(&VAR_0->flist);
 FUNC_2(&VAR_0->fence);
 FUNC_0(VAR_0);
}
