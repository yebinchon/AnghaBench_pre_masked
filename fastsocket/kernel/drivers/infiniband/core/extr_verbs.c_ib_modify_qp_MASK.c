
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_attr {int dummy; } ;
struct ib_qp {int real_qp; TYPE_1__* device; } ;
struct TYPE_2__ {int (* modify_qp ) (int ,struct ib_qp_attr*,int,int *) ;} ;


 int FUNC_0 (int ,struct ib_qp_attr*,int,int *) ;

int FUNC_1(struct ib_qp *VAR_0,
   struct ib_qp_attr *VAR_1,
   int VAR_2)
{
 return VAR_0->device->modify_qp(VAR_0->real_qp, VAR_1, VAR_2, ((void*)0));
}
