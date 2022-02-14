
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {int dummy; } ;
struct nfs_open_dir_context {int cred; scalar_t__ dup_cookie; scalar_t__ dir_cookie; int attr_gencount; scalar_t__ duped; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int attr_gencount; } ;


 int VAR_0 ;
 struct nfs_open_dir_context* FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_cred*) ;
 struct nfs_open_dir_context* FUNC_3 (int,int ) ;

__attribute__((used)) static struct nfs_open_dir_context *FUNC_4(struct inode *VAR_2, struct rpc_cred *VAR_3)
{
 struct nfs_open_dir_context *VAR_4;
 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (VAR_4 != ((void*)0)) {
  VAR_4->duped = 0;
  VAR_4->attr_gencount = FUNC_1(VAR_2)->attr_gencount;
  VAR_4->dir_cookie = 0;
  VAR_4->dup_cookie = 0;
  VAR_4->cred = FUNC_2(VAR_3);
  return VAR_4;
 }
 return FUNC_0(-VAR_0);
}
