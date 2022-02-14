
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_intr {unsigned int index; int ctrl; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct vnic_dev*,int ,unsigned int) ;

int FUNC_2(struct vnic_dev *VAR_2, struct vnic_intr *VAR_3,
 unsigned int VAR_4)
{
 VAR_3->index = VAR_4;
 VAR_3->vdev = VAR_2;

 VAR_3->ctrl = FUNC_1(VAR_2, VAR_1, VAR_4);
 if (!VAR_3->ctrl) {
  FUNC_0("Failed to hook INTR[%d].ctrl resource\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
