
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_mw {int type; int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
typedef enum ib_mw_type { ____Placeholder_ib_mw_type } ib_mw_type ;
struct TYPE_2__ {struct ib_mw* (* alloc_mw ) (struct ib_pd*,int) ;} ;


 int VAR_0 ;
 struct ib_mw* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mw*) ;
 int FUNC_2 (int *) ;
 struct ib_mw* FUNC_3 (struct ib_pd*,int) ;

struct ib_mw *FUNC_4(struct ib_pd *VAR_1, enum ib_mw_type VAR_2)
{
 struct ib_mw *VAR_3;

 if (!VAR_1->device->alloc_mw)
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1->device->alloc_mw(VAR_1, VAR_2);
 if (!FUNC_1(VAR_3)) {
  VAR_3->device = VAR_1->device;
  VAR_3->pd = VAR_1;
  VAR_3->uobject = ((void*)0);
  VAR_3->type = VAR_2;
  FUNC_2(&VAR_1->usecnt);
 }

 return VAR_3;
}
