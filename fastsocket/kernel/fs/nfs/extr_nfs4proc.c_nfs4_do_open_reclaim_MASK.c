
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_state {int inode; } ;
struct nfs4_exception {scalar_t__ retry; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_open_context*,struct nfs4_state*) ;
 scalar_t__ FUNC_2 (struct nfs_server*,int,struct nfs4_exception*) ;
 int FUNC_3 (struct nfs_server*,int,struct nfs4_exception*) ;

__attribute__((used)) static int FUNC_4(struct nfs_open_context *VAR_1, struct nfs4_state *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_0(VAR_2->inode);
 struct nfs4_exception VAR_4 = { };
 int VAR_5;
 do {
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  if (FUNC_2(VAR_3, VAR_5, &VAR_4))
   continue;
  if (VAR_5 != -VAR_0)
   break;
  FUNC_3(VAR_3, VAR_5, &VAR_4);
 } while (VAR_4.retry);
 return VAR_5;
}
