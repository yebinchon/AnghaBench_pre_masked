
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_pd {int usecnt; } ;
struct ib_mr {TYPE_1__* device; struct ib_pd* pd; int usecnt; } ;
struct TYPE_2__ {int (* dereg_mr ) (struct ib_mr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ib_mr*) ;

int FUNC_3(struct ib_mr *VAR_1)
{
 struct ib_pd *VAR_2;
 int VAR_3;

 if (FUNC_1(&VAR_1->usecnt))
  return -VAR_0;

 VAR_2 = VAR_1->pd;
 VAR_3 = VAR_1->device->dereg_mr(VAR_1);
 if (!VAR_3)
  FUNC_0(&VAR_2->usecnt);

 return VAR_3;
}
