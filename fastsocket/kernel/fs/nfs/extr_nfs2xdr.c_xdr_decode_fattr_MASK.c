
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ minor; void* major; } ;
struct TYPE_4__ {void* blocks; void* blocksize; } ;
struct TYPE_5__ {TYPE_1__ nfs2; } ;
struct nfs_fattr {int mode; int rdev; int valid; int ctime; int change_attr; int mtime; int atime; void* fileid; TYPE_3__ fsid; TYPE_2__ du; void* size; void* gid; void* uid; void* nlink; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static __be32 *
FUNC_4(__be32 *VAR_5, struct nfs_fattr *VAR_6)
{
 u32 VAR_7, VAR_8;
 VAR_8 = FUNC_2(*VAR_5++);
 VAR_6->mode = FUNC_2(*VAR_5++);
 VAR_6->nlink = FUNC_2(*VAR_5++);
 VAR_6->uid = FUNC_2(*VAR_5++);
 VAR_6->gid = FUNC_2(*VAR_5++);
 VAR_6->size = FUNC_2(*VAR_5++);
 VAR_6->du.nfs2.blocksize = FUNC_2(*VAR_5++);
 VAR_7 = FUNC_2(*VAR_5++);
 VAR_6->du.nfs2.blocks = FUNC_2(*VAR_5++);
 VAR_6->fsid.major = FUNC_2(*VAR_5++);
 VAR_6->fsid.minor = 0;
 VAR_6->fileid = FUNC_2(*VAR_5++);
 VAR_5 = FUNC_3(VAR_5, &VAR_6->atime);
 VAR_5 = FUNC_3(VAR_5, &VAR_6->mtime);
 VAR_5 = FUNC_3(VAR_5, &VAR_6->ctime);
 VAR_6->change_attr = FUNC_1(&VAR_6->ctime);
 VAR_6->valid |= VAR_2;
 VAR_6->rdev = FUNC_0(VAR_7);
 if (VAR_8 == VAR_0 && VAR_7 == VAR_1) {
  VAR_6->mode = (VAR_6->mode & ~VAR_4) | VAR_3;
  VAR_6->rdev = 0;
 }
 return VAR_5;
}
