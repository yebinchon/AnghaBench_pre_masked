
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ah_attr {int dummy; } ;
struct ib_ah {TYPE_1__* device; } ;
struct TYPE_2__ {int (* modify_ah ) (struct ib_ah*,struct ib_ah_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_ah*,struct ib_ah_attr*) ;

int FUNC_1(struct ib_ah *VAR_1, struct ib_ah_attr *VAR_2)
{
 return VAR_1->device->modify_ah ?
  VAR_1->device->modify_ah(VAR_1, VAR_2) :
  -VAR_0;
}
