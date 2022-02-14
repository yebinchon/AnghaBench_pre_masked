
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int vnode; int vid; int unique; } ;
struct TYPE_6__ {void* tv_sec; } ;
struct TYPE_8__ {TYPE_2__ i_ctime; TYPE_2__ i_atime; TYPE_2__ i_mtime; int i_mode; int i_nlink; int i_version; int i_gid; int i_uid; } ;
struct afs_vnode {int flags; TYPE_3__ fid; TYPE_4__ vfs_inode; } ;
struct TYPE_5__ {int vid; int unique; int vnode; } ;
struct afs_file_status {int size; int data_version; void* mtime_server; int mode; int nlink; int group; int owner; TYPE_1__ parent; void* mtime_client; int lock_count; int anon_access; int caller_access; int author; int type; void* if_version; } ;
typedef int afs_dataversion_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(const __be32 **VAR_4,
          struct afs_file_status *VAR_5,
          struct afs_vnode *VAR_6,
          afs_dataversion_t *VAR_7)
{
 afs_dataversion_t VAR_8;
 const __be32 *VAR_9 = *VAR_4;
 umode_t VAR_10;
 u64 VAR_11, VAR_12;
 u32 VAR_13 = 0;
 VAR_5->if_version = FUNC_4(*VAR_9++);
 do { u32 VAR_14 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->type - VAR_14; VAR_5->type = VAR_14; } while (0);
 do { u32 VAR_15 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->nlink - VAR_15; VAR_5->nlink = VAR_15; } while (0);
 VAR_12 = FUNC_4(*VAR_9++);
 VAR_11 = FUNC_4(*VAR_9++);
 do { u32 VAR_16 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->author - VAR_16; VAR_5->author = VAR_16; } while (0);
 do { u32 VAR_17 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->owner - VAR_17; VAR_5->owner = VAR_17; } while (0);
 do { u32 VAR_18 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->caller_access - VAR_18; VAR_5->caller_access = VAR_18; } while (0);
 do { u32 VAR_19 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->anon_access - VAR_19; VAR_5->anon_access = VAR_19; } while (0);
 do { u32 VAR_20 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->mode - VAR_20; VAR_5->mode = VAR_20; } while (0);
 do { u32 VAR_21 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->parent.vnode - VAR_21; VAR_5->parent.vnode = VAR_21; } while (0);
 do { u32 VAR_22 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->parent.unique - VAR_22; VAR_5->parent.unique = VAR_22; } while (0);
 VAR_9++;
 VAR_5->mtime_client = FUNC_4(*VAR_9++);
 VAR_5->mtime_server = FUNC_4(*VAR_9++);
 do { u32 VAR_23 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->group - VAR_23; VAR_5->group = VAR_23; } while (0);
 VAR_9++;
 VAR_11 |= (u64) FUNC_4(*VAR_9++) << 32;
 do { u32 VAR_24 = FUNC_4(*VAR_9++); VAR_13 |= VAR_5->lock_count - VAR_24; VAR_5->lock_count = VAR_24; } while (0);
 VAR_12 |= (u64) FUNC_4(*VAR_9++) << 32;
 VAR_9++;
 *VAR_4 = VAR_9;

 if (VAR_12 != VAR_5->size) {
  VAR_5->size = VAR_12;
  VAR_13 |= 1;
 }
 VAR_5->mode &= VAR_3;

 FUNC_1("vnode time %lx, %lx",
        VAR_5->mtime_client, VAR_5->mtime_server);

 if (VAR_6) {
  VAR_5->parent.vid = VAR_6->fid.vid;
  if (VAR_13 && !FUNC_6(VAR_1, &VAR_6->flags)) {
   FUNC_1("vnode changed");
   FUNC_3(&VAR_6->vfs_inode, VAR_12);
   VAR_6->vfs_inode.i_uid = VAR_5->owner;
   VAR_6->vfs_inode.i_gid = VAR_5->group;
   VAR_6->vfs_inode.i_version = VAR_6->fid.unique;
   VAR_6->vfs_inode.i_nlink = VAR_5->nlink;

   VAR_10 = VAR_6->vfs_inode.i_mode;
   VAR_10 &= ~VAR_3;
   VAR_10 |= VAR_5->mode;
   FUNC_2();
   VAR_6->vfs_inode.i_mode = VAR_10;
  }

  VAR_6->vfs_inode.i_ctime.tv_sec = VAR_5->mtime_server;
  VAR_6->vfs_inode.i_mtime = VAR_6->vfs_inode.i_ctime;
  VAR_6->vfs_inode.i_atime = VAR_6->vfs_inode.i_ctime;
 }

 VAR_8 = VAR_5->data_version;
 if (VAR_7)
  VAR_8 = *VAR_7;

 if (VAR_8 != VAR_11) {
  VAR_5->data_version = VAR_11;
  if (VAR_6 && !FUNC_6(VAR_1, &VAR_6->flags)) {
   FUNC_1("vnode modified %llx on {%x:%u}",
          (unsigned long long) VAR_11,
          VAR_6->fid.vid, VAR_6->fid.vnode);
   FUNC_5(VAR_0, &VAR_6->flags);
   FUNC_5(VAR_2, &VAR_6->flags);
  }
 } else if (VAR_7) {
  VAR_5->data_version = VAR_11;
 }
}
