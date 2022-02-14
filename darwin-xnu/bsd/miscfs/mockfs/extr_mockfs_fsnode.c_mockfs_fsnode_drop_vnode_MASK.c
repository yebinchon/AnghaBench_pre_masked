
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vnode_t ;
typedef TYPE_2__* mockfs_mount_t ;
typedef TYPE_3__* mockfs_fsnode_t ;
struct TYPE_7__ {int * vp; TYPE_1__* mnt; } ;
struct TYPE_6__ {int mockfs_mnt_mtx; } ;
struct TYPE_5__ {scalar_t__ mnt_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

int FUNC_4(mockfs_fsnode_t VAR_1)
{
 int VAR_2;
 mockfs_mount_t VAR_3;
 vnode_t VAR_4;

 VAR_2 = 0;

 if (!VAR_1) {
  VAR_2 = VAR_0;
  goto done;
 }

 VAR_3 = ((mockfs_mount_t) VAR_1->mnt->mnt_data);
 FUNC_0(&VAR_3->mockfs_mnt_mtx);

 if (!(VAR_1->vp)) {
  FUNC_2("mock_fsnode_drop_vnode: target fsnode does not have an associated vnode");
 }

 VAR_4 = VAR_1->vp;
 VAR_1->vp = ((void*)0);
 FUNC_3(VAR_4);

 FUNC_1(&VAR_3->mockfs_mnt_mtx);
done:
 return VAR_2;
}
