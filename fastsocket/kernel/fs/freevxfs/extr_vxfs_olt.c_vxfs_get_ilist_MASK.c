
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_sb_info {int vsi_iext; } ;
struct vxfs_oltilist {int * olt_iext; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct vxfs_oltilist *VAR_0, struct vxfs_sb_info *VAR_1)
{
 FUNC_0(VAR_1->vsi_iext);
 VAR_1->vsi_iext = VAR_0->olt_iext[0];
}
