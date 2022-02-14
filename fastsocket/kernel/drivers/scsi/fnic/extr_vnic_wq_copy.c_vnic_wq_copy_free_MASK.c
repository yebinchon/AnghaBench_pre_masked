
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq_copy {int * ctrl; int ring; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 int FUNC_0 (struct vnic_dev*,int *) ;

void FUNC_1(struct vnic_wq_copy *VAR_0)
{
 struct vnic_dev *VAR_1;

 VAR_1 = VAR_0->vdev;
 FUNC_0(VAR_1, &VAR_0->ring);
 VAR_0->ctrl = ((void*)0);
}
