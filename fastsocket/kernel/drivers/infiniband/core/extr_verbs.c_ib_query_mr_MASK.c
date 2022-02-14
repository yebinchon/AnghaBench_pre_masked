
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mr_attr {int dummy; } ;
struct ib_mr {TYPE_1__* device; } ;
struct TYPE_2__ {int (* query_mr ) (struct ib_mr*,struct ib_mr_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mr*,struct ib_mr_attr*) ;

int FUNC_1(struct ib_mr *VAR_1, struct ib_mr_attr *VAR_2)
{
 return VAR_1->device->query_mr ?
  VAR_1->device->query_mr(VAR_1, VAR_2) : -VAR_0;
}
