
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_devcmd_fw_info {int dummy; } ;
struct enic {int devcmd_lock; int vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct vnic_devcmd_fw_info**) ;

int FUNC_3(struct enic *VAR_0, struct vnic_devcmd_fw_info **VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->devcmd_lock);
 VAR_2 = FUNC_2(VAR_0->vdev, VAR_1);
 FUNC_1(&VAR_0->devcmd_lock);

 return VAR_2;
}
