
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vfstable {int vfc_flags; int vfc_name; int vfc_refcount; int vfc_vfsops; } ;
struct mount {int dummy; } ;
typedef TYPE_2__* mount_t ;
struct TYPE_9__ {char* f_mntonname; int f_mntfromname; int f_fstypename; } ;
struct TYPE_10__ {int mnt_segreadcnt; int mnt_segwritecnt; int mnt_ioscale; int mnt_flag; TYPE_1__ mnt_vfsstat; void* mnt_vnodecovered; int mnt_op; struct vfstable* mnt_vtable; int mnt_newvnodes; int mnt_workerqueue; int mnt_vnodelist; scalar_t__ mnt_devbsdunit; scalar_t__ mnt_throttle_mask; int mnt_authcache_ttl; void* mnt_realrootvp; scalar_t__ mnt_ioflags; int mnt_ioqueue_depth; int mnt_alignmentmask; int mnt_devblocksize; int mnt_maxwritecnt; int mnt_maxsegwritesize; int mnt_maxreadcnt; int mnt_maxsegreadsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (void const*,int ,scalar_t__,int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static mount_t
FUNC_12(struct vfstable *VAR_15, const char *VAR_16)
{
 mount_t VAR_17;

 VAR_17 = FUNC_1(sizeof(struct mount), VAR_11, VAR_12);
 FUNC_2((char *)VAR_17, sizeof(struct mount));


 VAR_17->mnt_maxreadcnt = VAR_17->mnt_maxwritecnt = VAR_5;
 VAR_17->mnt_segreadcnt = VAR_17->mnt_segwritecnt = 32;
 VAR_17->mnt_maxsegreadsize = VAR_17->mnt_maxreadcnt;
 VAR_17->mnt_maxsegwritesize = VAR_17->mnt_maxwritecnt;
 VAR_17->mnt_devblocksize = VAR_1;
 VAR_17->mnt_alignmentmask = VAR_14;
 VAR_17->mnt_ioqueue_depth = VAR_7;
 VAR_17->mnt_ioscale = 1;
 VAR_17->mnt_ioflags = 0;
 VAR_17->mnt_realrootvp = VAR_13;
 VAR_17->mnt_authcache_ttl = VAR_0;
 VAR_17->mnt_throttle_mask = VAR_3 - 1;
 VAR_17->mnt_devbsdunit = 0;

 FUNC_8(VAR_17);
 (void)FUNC_10(VAR_17, VAR_2);

 FUNC_0(&VAR_17->mnt_vnodelist);
 FUNC_0(&VAR_17->mnt_workerqueue);
 FUNC_0(&VAR_17->mnt_newvnodes);

 VAR_17->mnt_vtable = VAR_15;
 VAR_17->mnt_op = VAR_15->vfc_vfsops;
 VAR_17->mnt_flag = VAR_8 | VAR_9;
 VAR_17->mnt_vnodecovered = VAR_13;

 VAR_17->mnt_flag |= VAR_15->vfc_flags & VAR_10;

 FUNC_6();
 VAR_15->vfc_refcount++;
 FUNC_7();

 FUNC_9(VAR_17->mnt_vfsstat.f_fstypename, VAR_15->vfc_name, VAR_6);
 VAR_17->mnt_vfsstat.f_mntonname[0] = '/';

 (void) FUNC_3((const void *)VAR_16, VAR_17->mnt_vfsstat.f_mntfromname, VAR_4 - 1, ((void*)0));





 return (VAR_17);
}
