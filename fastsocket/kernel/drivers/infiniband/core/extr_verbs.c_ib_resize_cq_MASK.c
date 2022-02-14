
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_cq {TYPE_1__* device; } ;
struct TYPE_2__ {int (* resize_cq ) (struct ib_cq*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_cq*,int,int *) ;

int FUNC_1(struct ib_cq *VAR_1, int VAR_2)
{
 return VAR_1->device->resize_cq ?
  VAR_1->device->resize_cq(VAR_1, VAR_2, ((void*)0)) : -VAR_0;
}
