
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vnode_t ;
struct vnode_fsparam {char* vnfs_str; int vnfs_markroot; int vnfs_flags; int * vnfs_cnp; int vnfs_filesize; scalar_t__ vnfs_rdev; scalar_t__ vnfs_marksystem; int vnfs_vops; TYPE_4__* vnfs_fsnode; int * vnfs_dvp; int vnfs_vtype; TYPE_1__* vnfs_mp; } ;
typedef TYPE_3__* mockfs_mount_t ;
typedef TYPE_4__* mockfs_fsnode_t ;
typedef int memory_object_control_t ;
struct TYPE_9__ {scalar_t__ type; int vp; int size; TYPE_2__* parent; TYPE_1__* mnt; } ;
struct TYPE_8__ {int mockfs_memdev_base; int mockfs_mnt_mtx; scalar_t__ mockfs_memory_backed; } ;
struct TYPE_7__ {int * vp; } ;
struct TYPE_6__ {scalar_t__ mnt_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,struct vnode_fsparam*,int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(mockfs_fsnode_t VAR_11, vnode_t * VAR_12)
{
 int VAR_13;
 memory_object_control_t VAR_14;
 mockfs_mount_t VAR_15;
 struct vnode_fsparam VAR_16;

 if ((!VAR_11) || (!VAR_12)) {
  VAR_13 = VAR_0;
  goto done;
 }

 VAR_15 = ((mockfs_mount_t) VAR_11->mnt->mnt_data);
 FUNC_0(&VAR_15->mockfs_mnt_mtx);

 if (VAR_11->vp) {



  VAR_13 = FUNC_6(VAR_11->vp);
  if (!VAR_13) {
   *VAR_12 = VAR_11->vp;
  }
 }
 else {



  VAR_16.vnfs_mp = VAR_11->mnt;
  VAR_16.vnfs_vtype = (VAR_11->type == VAR_1) ? VAR_9 : VAR_5;
  VAR_16.vnfs_str = "mockfs";
  VAR_16.vnfs_dvp = (VAR_11->type == VAR_2) ? ((void*)0) : VAR_11->parent->vp;
  VAR_16.vnfs_fsnode = VAR_11;
  VAR_16.vnfs_vops = VAR_10;
  VAR_16.vnfs_markroot = (VAR_11->type == VAR_2);
  VAR_16.vnfs_marksystem = 0;
  VAR_16.vnfs_rdev = 0;
  VAR_16.vnfs_filesize = VAR_11->size;
  VAR_16.vnfs_cnp = ((void*)0);
  VAR_16.vnfs_flags = VAR_7 | VAR_8;
  VAR_13 = FUNC_5(VAR_6, VAR_4, &VAR_16, &VAR_11->vp);

  if ((!VAR_13) && (VAR_11->type == VAR_1) && (VAR_15->mockfs_memory_backed)) {



   VAR_14 = FUNC_4(VAR_11->vp, 0);

   if (!VAR_14)
    FUNC_3("mockfs_fsvnode failed to get ubc_mem_object for a new vnode");

   VAR_13 = FUNC_2(VAR_14, 0, (VAR_15->mockfs_memdev_base << VAR_3), VAR_11->size);

   if (VAR_13)
    FUNC_3("mockfs_fsnode_vnode failed to create fictitious pages for a memory-backed device; rvalue = %d", VAR_13);
  }

  if (!VAR_13)
   *VAR_12 = VAR_11->vp;
 }

 FUNC_1(&VAR_15->mockfs_mnt_mtx);

done:
 return VAR_13;
}
