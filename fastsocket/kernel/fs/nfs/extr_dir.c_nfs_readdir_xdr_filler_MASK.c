
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct page {int dummy; } ;
struct nfs_open_dir_context {struct rpc_cred* cred; } ;
struct nfs_entry {int cookie; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int dentry; } ;
struct file {TYPE_1__ f_path; struct nfs_open_dir_context* private_data; } ;
struct TYPE_8__ {unsigned long timestamp; unsigned long gencount; scalar_t__ plus; } ;
typedef TYPE_2__ nfs_readdir_descriptor_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int (* readdir ) (int ,struct rpc_cred*,int ,struct page**,int ,scalar_t__) ;} ;
struct TYPE_9__ {int caps; int dtsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int *) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int ,struct rpc_cred*,int ,struct page**,int ,scalar_t__) ;

__attribute__((used)) static
int FUNC_6(struct page **VAR_4, nfs_readdir_descriptor_t *VAR_5,
   struct nfs_entry *VAR_6, struct file *VAR_7, struct inode *VAR_8)
{
 struct nfs_open_dir_context *VAR_9 = VAR_7->private_data;
 struct rpc_cred *VAR_10 = VAR_9->cred;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 again:
 VAR_11 = VAR_3;
 VAR_12 = FUNC_4();
 VAR_13 = FUNC_1(VAR_8)->readdir(VAR_7->f_path.dentry, VAR_10, VAR_6->cookie, VAR_4,
       FUNC_2(VAR_8)->dtsize, VAR_5->plus);
 if (VAR_13 < 0) {

  if (VAR_13 == -VAR_0 && VAR_5->plus) {
   FUNC_2(VAR_8)->caps &= ~VAR_1;
   FUNC_3(VAR_2, &FUNC_0(VAR_8)->flags);
   VAR_5->plus = 0;
   goto again;
  }
  goto error;
 }
 VAR_5->timestamp = VAR_11;
 VAR_5->gencount = VAR_12;
error:
 return VAR_13;
}
