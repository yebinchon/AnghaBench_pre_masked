
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int page_len; struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_res; int rq_resused; int * rq_respages; } ;
struct TYPE_4__ {struct dentry* fh_dentry; } ;
struct nfsd3_getaclres {int mask; int * acl_default; int * acl_access; TYPE_2__ fh; } ;
struct kvec {scalar_t__ iov_base; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct svc_rqst*,int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int,struct inode*,int *,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct svc_rqst*,int *) ;

__attribute__((used)) static int FUNC_5(struct svc_rqst *VAR_4, __be32 *VAR_5,
  struct nfsd3_getaclres *VAR_6)
{
 struct dentry *VAR_7 = VAR_6->fh.fh_dentry;
 struct inode *VAR_8;
 struct kvec *VAR_9 = VAR_4->rq_res.head;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;






 if (VAR_7 == ((void*)0) || VAR_7->d_inode == ((void*)0))
  return 0;
 VAR_8 = VAR_7->d_inode;

 VAR_5 = FUNC_1(VAR_4, VAR_5, &VAR_6->fh);
 *VAR_5++ = FUNC_0(VAR_6->mask);
 if (!FUNC_4(VAR_4, VAR_5))
  return 0;
 VAR_10 = (char *)VAR_5 - (char *)VAR_9->iov_base;

 VAR_4->rq_res.page_len = VAR_12 = FUNC_3(
  (VAR_6->mask & VAR_0) ? VAR_6->acl_access : ((void*)0),
  (VAR_6->mask & VAR_2) ? VAR_6->acl_default : ((void*)0));
 while (VAR_12 > 0) {
  if (!VAR_4->rq_respages[VAR_4->rq_resused++])
   return 0;
  VAR_12 -= VAR_3;
 }

 VAR_11 = FUNC_2(&VAR_4->rq_res, VAR_10, VAR_8,
     VAR_6->acl_access,
     VAR_6->mask & VAR_0, 0);
 if (VAR_11 > 0)
  VAR_11 = FUNC_2(&VAR_4->rq_res, VAR_10 + VAR_11, VAR_8,
      VAR_6->acl_default,
      VAR_6->mask & VAR_2,
      VAR_1);
 if (VAR_11 <= 0)
  return 0;
 return 1;
}
