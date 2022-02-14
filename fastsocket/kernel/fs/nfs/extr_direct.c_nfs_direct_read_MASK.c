
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_lock_context {int dummy; } ;
struct nfs_direct_req {struct kiocb* iocb; struct nfs_lock_context* l_ctx; int ctx; struct inode* inode; } ;
struct kiocb {TYPE_2__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 scalar_t__ FUNC_1 (struct nfs_lock_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kiocb*) ;
 scalar_t__ FUNC_4 (struct nfs_direct_req*,struct iovec const*,unsigned long,int ) ;
 struct nfs_direct_req* FUNC_5 () ;
 int FUNC_6 (struct nfs_direct_req*) ;
 scalar_t__ FUNC_7 (struct nfs_direct_req*) ;
 int FUNC_8 (TYPE_2__*) ;
 struct nfs_lock_context* FUNC_9 (int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct kiocb *VAR_1, const struct iovec *VAR_2,
          unsigned long VAR_3, loff_t VAR_4)
{
 ssize_t VAR_5 = -VAR_0;
 struct inode *VAR_6 = VAR_1->ki_filp->f_mapping->host;
 struct nfs_direct_req *VAR_7;
 struct nfs_lock_context *VAR_8;

 VAR_7 = FUNC_5();
 if (VAR_7 == ((void*)0))
  goto out;

 VAR_7->inode = VAR_6;
 VAR_7->ctx = FUNC_2(FUNC_8(VAR_1->ki_filp));
 VAR_8 = FUNC_9(VAR_7->ctx);
 if (FUNC_0(VAR_8)) {
  VAR_5 = FUNC_1(VAR_8);
  goto out_release;
 }
 VAR_7->l_ctx = VAR_8;
 if (!FUNC_3(VAR_1))
  VAR_7->iocb = VAR_1;

 VAR_5 = FUNC_4(VAR_7, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_7(VAR_7);
out_release:
 FUNC_6(VAR_7);
out:
 return VAR_5;
}
