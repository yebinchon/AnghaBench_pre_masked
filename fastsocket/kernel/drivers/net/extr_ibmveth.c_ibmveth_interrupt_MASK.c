
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmveth_adapter {int napi; TYPE_1__* vdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int unit_address; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ibmveth_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct ibmveth_adapter *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;

 if (FUNC_3(&VAR_6->napi)) {
  VAR_7 = FUNC_2(VAR_6->vdev->unit_address,
           VAR_2);
  FUNC_0(VAR_7 != VAR_0);
  FUNC_1(&VAR_6->napi);
 }
 return VAR_1;
}
