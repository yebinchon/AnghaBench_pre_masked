
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_mr {int usecnt; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
struct TYPE_2__ {struct ib_mr* (* alloc_fast_reg_mr ) (struct ib_pd*,int) ;} ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_mr* FUNC_4 (struct ib_pd*,int) ;

struct ib_mr *FUNC_5(struct ib_pd *VAR_1, int VAR_2)
{
 struct ib_mr *VAR_3;

 if (!VAR_1->device->alloc_fast_reg_mr)
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1->device->alloc_fast_reg_mr(VAR_1, VAR_2);

 if (!FUNC_1(VAR_3)) {
  VAR_3->device = VAR_1->device;
  VAR_3->pd = VAR_1;
  VAR_3->uobject = ((void*)0);
  FUNC_2(&VAR_1->usecnt);
  FUNC_3(&VAR_3->usecnt, 0);
 }

 return VAR_3;
}
