
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {TYPE_1__* device; int usecnt; } ;
struct TYPE_2__ {int (* dealloc_pd ) (struct ib_pd*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ib_pd*) ;

int FUNC_2(struct ib_pd *VAR_1)
{
 if (FUNC_0(&VAR_1->usecnt))
  return -VAR_0;

 return VAR_1->device->dealloc_pd(VAR_1);
}
