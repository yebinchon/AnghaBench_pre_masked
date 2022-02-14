
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pd {int usecnt; int * uobject; struct ib_device* device; } ;
struct ib_device {struct ib_pd* (* alloc_pd ) (struct ib_device*,int *,int *) ;} ;


 int FUNC_0 (struct ib_pd*) ;
 int FUNC_1 (int *,int ) ;
 struct ib_pd* FUNC_2 (struct ib_device*,int *,int *) ;

struct ib_pd *FUNC_3(struct ib_device *VAR_0)
{
 struct ib_pd *VAR_1;

 VAR_1 = VAR_0->alloc_pd(VAR_0, ((void*)0), ((void*)0));

 if (!FUNC_0(VAR_1)) {
  VAR_1->device = VAR_0;
  VAR_1->uobject = ((void*)0);
  FUNC_1(&VAR_1->usecnt, 0);
 }

 return VAR_1;
}
