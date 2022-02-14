
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ib_cq {TYPE_1__* device; } ;
struct TYPE_2__ {int (* modify_cq ) (struct ib_cq*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cq*,int ,int ) ;

int FUNC_1(struct ib_cq *VAR_1, u16 VAR_2, u16 VAR_3)
{
 return VAR_1->device->modify_cq ?
  VAR_1->device->modify_cq(VAR_1, VAR_2, VAR_3) : -VAR_0;
}
