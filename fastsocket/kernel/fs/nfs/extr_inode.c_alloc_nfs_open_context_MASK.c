
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct TYPE_2__ {struct nfs_open_context* open_context; } ;
struct nfs_open_context {int list; TYPE_1__ lock_context; scalar_t__ error; scalar_t__ flags; int mode; int * state; int cred; int dentry; } ;
struct dentry {int d_sb; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct rpc_cred*) ;
 struct nfs_open_context* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

struct nfs_open_context *FUNC_6(struct dentry *VAR_1, struct rpc_cred *VAR_2, fmode_t VAR_3)
{
 struct nfs_open_context *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (VAR_4 != ((void*)0)) {
  FUNC_5(VAR_1->d_sb);
  VAR_4->dentry = FUNC_1(VAR_1);
  VAR_4->cred = FUNC_2(VAR_2);
  VAR_4->state = ((void*)0);
  VAR_4->mode = VAR_3;
  VAR_4->flags = 0;
  VAR_4->error = 0;
  FUNC_4(&VAR_4->lock_context);
  VAR_4->lock_context.open_context = VAR_4;
  FUNC_0(&VAR_4->list);
 }
 return VAR_4;
}
