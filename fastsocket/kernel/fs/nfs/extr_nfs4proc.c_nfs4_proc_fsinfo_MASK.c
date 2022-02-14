
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_fsinfo {int fattr; } ;
struct nfs_fh {int dummy; } ;


 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_0, struct nfs_fh *VAR_1, struct nfs_fsinfo *VAR_2)
{
 FUNC_1(VAR_2->fattr);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
