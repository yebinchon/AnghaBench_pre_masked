
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct vnode_fsparam {char* vnfs_str; int vnfs_flags; scalar_t__ vnfs_markroot; scalar_t__ vnfs_marksystem; scalar_t__ vnfs_filesize; scalar_t__ vnfs_rdev; int vnfs_vops; int * vnfs_cnp; int * vnfs_fsnode; int * vnfs_dvp; int vnfs_vtype; struct mount* vnfs_mp; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct mount {int dummy; } ;
typedef scalar_t__ dev_t ;
struct TYPE_11__ {int v_tag; int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*,int ,struct vfs_context*) ;
 int FUNC_1 (TYPE_1__*,int ,struct vfs_context*) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_14 ;
 int FUNC_5 (int ,int ,struct vnode_fsparam*,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(dev_t VAR_15, vnode_t *VAR_16)
{
 vnode_t VAR_17;
 int VAR_18;
 struct vnode_fsparam VAR_19;
 struct vfs_context VAR_20;

 if (VAR_15 == VAR_5) {
  *VAR_16 = VAR_6;
  return (VAR_1);
 }

 VAR_20.vc_thread = FUNC_3();
 VAR_20.vc_ucred = VAR_3;

 VAR_19.vnfs_mp = (struct mount *)0;
 VAR_19.vnfs_vtype = VAR_8;
 VAR_19.vnfs_str = "bdevvp";
 VAR_19.vnfs_dvp = ((void*)0);
 VAR_19.vnfs_fsnode = ((void*)0);
 VAR_19.vnfs_cnp = ((void*)0);
 VAR_19.vnfs_vops = VAR_14;
 VAR_19.vnfs_rdev = VAR_15;
 VAR_19.vnfs_filesize = 0;

 VAR_19.vnfs_flags = VAR_12 | VAR_11;

 VAR_19.vnfs_marksystem = 0;
 VAR_19.vnfs_markroot = 0;

 if ( (VAR_18 = FUNC_5(VAR_10, VAR_9, &VAR_19, &VAR_17)) ) {
  *VAR_16 = VAR_6;
  return (VAR_18);
 }
 FUNC_6(VAR_17);
 VAR_17->v_flag |= VAR_7;
 VAR_17->v_tag = VAR_13;
 FUNC_8(VAR_17);
 if ( (VAR_18 = FUNC_7(VAR_17)) ) {
  FUNC_4("bdevvp failed: vnode_ref");
  return (VAR_18);
 }
 if ( (VAR_18 = FUNC_0(VAR_17, VAR_4, &VAR_20)) ) {
  FUNC_4("bdevvp failed: fsync");
  return (VAR_18);
 }
 if ( (VAR_18 = FUNC_2(VAR_17, VAR_0, 0, 0)) ) {
  FUNC_4("bdevvp failed: invalidateblks");
  return (VAR_18);
 }
 if ( (VAR_18 = FUNC_1(VAR_17, VAR_2, &VAR_20)) ) {
  FUNC_4("bdevvp failed: open");
  return (VAR_18);
 }
 *VAR_16 = VAR_17;

 return (0);
}
