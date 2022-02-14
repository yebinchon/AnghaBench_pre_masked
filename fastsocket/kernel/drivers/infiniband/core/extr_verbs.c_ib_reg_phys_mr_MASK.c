
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_phys_buf {int dummy; } ;
struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_mr {int usecnt; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
struct TYPE_2__ {struct ib_mr* (* reg_phys_mr ) (struct ib_pd*,struct ib_phys_buf*,int,int,int *) ;} ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_mr* FUNC_4 (struct ib_pd*,struct ib_phys_buf*,int,int,int *) ;

struct ib_mr *FUNC_5(struct ib_pd *VAR_1,
        struct ib_phys_buf *VAR_2,
        int VAR_3,
        int VAR_4,
        u64 *VAR_5)
{
 struct ib_mr *VAR_6;

 if (!VAR_1->device->reg_phys_mr)
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_1->device->reg_phys_mr(VAR_1, VAR_2, VAR_3,
         VAR_4, VAR_5);

 if (!FUNC_1(VAR_6)) {
  VAR_6->device = VAR_1->device;
  VAR_6->pd = VAR_1;
  VAR_6->uobject = ((void*)0);
  FUNC_2(&VAR_1->usecnt);
  FUNC_3(&VAR_6->usecnt, 0);
 }

 return VAR_6;
}
