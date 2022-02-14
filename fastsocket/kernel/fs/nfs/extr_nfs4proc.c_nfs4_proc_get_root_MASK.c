
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int flags; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_2 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nfs_server*,struct nfs_fh*) ;

__attribute__((used)) static int FUNC_5(struct nfs_server *VAR_2, struct nfs_fh *VAR_3,
         struct nfs_fsinfo *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if ((VAR_5 == -VAR_0) && !(VAR_2->flags & VAR_1))




  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == 0)
  VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 return FUNC_3(VAR_5);
}
