
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {struct nfs4_state* state; int cred; int mode; int dentry; } ;
struct nfs4_state {int inode; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;


 struct inode* FUNC_0 (struct nfs4_state*) ;
 scalar_t__ FUNC_1 (struct nfs4_state*) ;
 struct inode* FUNC_2 (int ) ;
 struct nfs4_state* FUNC_3 (struct inode*,int ,int ,int,struct iattr*,int ) ;

__attribute__((used)) static struct inode *
FUNC_4(struct inode *VAR_0, struct nfs_open_context *VAR_1, int VAR_2, struct iattr *VAR_3)
{
 struct nfs4_state *VAR_4;


 VAR_4 = FUNC_3(VAR_0, VAR_1->dentry, VAR_1->mode, VAR_2, VAR_3, VAR_1->cred);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);
 VAR_1->state = VAR_4;
 return FUNC_2(VAR_4->inode);
}
