
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_6__ {int mtime; } ;
struct TYPE_5__ {TYPE_1__* fh_dentry; } ;
struct nfsd3_attrstat {scalar_t__ status; TYPE_3__ stat; TYPE_2__ fh; } ;
typedef int __be32 ;
struct TYPE_4__ {int d_inode; } ;


 int * FUNC_0 (struct svc_rqst*,int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct svc_rqst*,int *) ;

int
FUNC_3(struct svc_rqst *VAR_0, __be32 *VAR_1,
     struct nfsd3_attrstat *VAR_2)
{
 if (VAR_2->status == 0) {
  FUNC_1(VAR_2->fh.fh_dentry->d_inode,
    &VAR_2->stat.mtime);
  VAR_1 = FUNC_0(VAR_0, VAR_1, &VAR_2->fh, &VAR_2->stat);
 }
 return FUNC_2(VAR_0, VAR_1);
}
