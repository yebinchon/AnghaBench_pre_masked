
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_2__* fh_export; struct dentry* fh_dentry; } ;
struct kstat {int mtime; } ;
struct dentry {scalar_t__ d_inode; } ;
typedef int __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int * FUNC_0 (struct svc_rqst*,int *,struct svc_fh*,struct kstat*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,struct dentry*,struct kstat*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32 *
FUNC_3(struct svc_rqst *VAR_2, __be32 *VAR_3, struct svc_fh *VAR_4)
{
 struct dentry *VAR_5 = VAR_4->fh_dentry;
 if (VAR_5 && VAR_5->d_inode) {
         int VAR_6;
  struct kstat VAR_7;

  VAR_6 = FUNC_2(VAR_4->fh_export->ex_path.mnt, VAR_5, &VAR_7);
  if (!VAR_6) {
   *VAR_3++ = VAR_0;
   FUNC_1(VAR_5->d_inode, &VAR_7.mtime);
   return FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7);
  }
 }
 *VAR_3++ = VAR_1;
 return VAR_3;
}
