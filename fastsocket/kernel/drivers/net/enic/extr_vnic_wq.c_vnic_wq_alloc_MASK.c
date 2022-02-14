
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {unsigned int index; int ring; int ctrl; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct vnic_dev*,int *,unsigned int,unsigned int) ;
 int FUNC_2 (struct vnic_dev*,int ,unsigned int) ;
 int FUNC_3 (struct vnic_wq*) ;
 int FUNC_4 (struct vnic_wq*) ;
 int FUNC_5 (struct vnic_wq*) ;

int FUNC_6(struct vnic_dev *VAR_2, struct vnic_wq *VAR_3, unsigned int VAR_4,
 unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_3->index = VAR_4;
 VAR_3->vdev = VAR_2;

 VAR_3->ctrl = FUNC_2(VAR_2, VAR_1, VAR_4);
 if (!VAR_3->ctrl) {
  FUNC_0("Failed to hook WQ[%d] resource\n", VAR_4);
  return -VAR_0;
 }

 FUNC_4(VAR_3);

 VAR_7 = FUNC_1(VAR_2, &VAR_3->ring, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7) {
  FUNC_5(VAR_3);
  return VAR_7;
 }

 return 0;
}
