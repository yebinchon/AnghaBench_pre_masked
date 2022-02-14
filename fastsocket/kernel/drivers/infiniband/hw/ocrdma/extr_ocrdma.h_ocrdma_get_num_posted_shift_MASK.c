
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_qp {int id; TYPE_2__* dev; } ;
struct TYPE_3__ {scalar_t__ dev_family; } ;
struct TYPE_4__ {TYPE_1__ nic_info; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ocrdma_qp *VAR_1)
{
 return ((VAR_1->dev->nic_info.dev_family == VAR_0 &&
   VAR_1->id < 64) ? 24 : 16);
}
