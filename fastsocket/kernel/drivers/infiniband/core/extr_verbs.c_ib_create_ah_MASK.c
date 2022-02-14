
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; TYPE_1__* device; } ;
struct ib_ah_attr {int dummy; } ;
struct ib_ah {int * uobject; struct ib_pd* pd; TYPE_1__* device; } ;
struct TYPE_2__ {struct ib_ah* (* create_ah ) (struct ib_pd*,struct ib_ah_attr*) ;} ;


 int FUNC_0 (struct ib_ah*) ;
 int FUNC_1 (int *) ;
 struct ib_ah* FUNC_2 (struct ib_pd*,struct ib_ah_attr*) ;

struct ib_ah *FUNC_3(struct ib_pd *VAR_0, struct ib_ah_attr *VAR_1)
{
 struct ib_ah *VAR_2;

 VAR_2 = VAR_0->device->create_ah(VAR_0, VAR_1);

 if (!FUNC_0(VAR_2)) {
  VAR_2->device = VAR_0->device;
  VAR_2->pd = VAR_0;
  VAR_2->uobject = ((void*)0);
  FUNC_1(&VAR_0->usecnt);
 }

 return VAR_2;
}
