
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_mr {int usecnt; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
struct TYPE_2__ {struct ib_mr* (* get_dma_mr ) (struct ib_pd*,int) ;} ;


 int FUNC_0 (struct ib_mr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct ib_mr* FUNC_3 (struct ib_pd*,int) ;

struct ib_mr *FUNC_4(struct ib_pd *VAR_0, int VAR_1)
{
 struct ib_mr *VAR_2;

 VAR_2 = VAR_0->device->get_dma_mr(VAR_0, VAR_1);

 if (!FUNC_0(VAR_2)) {
  VAR_2->device = VAR_0->device;
  VAR_2->pd = VAR_0;
  VAR_2->uobject = ((void*)0);
  FUNC_1(&VAR_0->usecnt);
  FUNC_2(&VAR_2->usecnt, 0);
 }

 return VAR_2;
}
