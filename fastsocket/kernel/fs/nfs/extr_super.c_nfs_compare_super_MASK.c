
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nfs_server {int flags; int fsid; } ;
struct nfs_sb_mountdata {int mntflags; struct nfs_server* server; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct super_block*,struct nfs_server*,int) ;
 int FUNC_3 (struct nfs_server*,struct nfs_server*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1, void *VAR_2)
{
 struct nfs_sb_mountdata *VAR_3 = VAR_2;
 struct nfs_server *VAR_4 = VAR_3->server, *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_3->mntflags;

 if (!FUNC_3(VAR_5, VAR_4))
  return 0;

 if (VAR_5->flags & VAR_0)
  return 0;
 if (FUNC_1(&VAR_5->fsid, &VAR_4->fsid, sizeof(VAR_5->fsid)) != 0)
  return 0;
 return FUNC_2(VAR_1, VAR_4, VAR_6);
}
