
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int flags; } ;
struct nameidata {int flags; } ;
struct inode {int i_mode; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_server*,struct inode*) ;
 scalar_t__ FUNC_5 (struct nameidata*,int ) ;
 int FUNC_6 (struct nfs_server*,struct inode*) ;

__attribute__((used)) static inline
int FUNC_7(struct inode *VAR_3, struct nameidata *VAR_4)
{
 struct nfs_server *VAR_5 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_3))
  return 0;
 if (VAR_4 != ((void*)0)) {

  if (VAR_4->flags & VAR_1)
   goto out_force;

  if (FUNC_5(VAR_4, VAR_0) != 0 &&
    !(VAR_5->flags & VAR_2) &&
    (FUNC_3(VAR_3->i_mode) ||
     FUNC_2(VAR_3->i_mode)))
   goto out_force;
  return 0;
 }
 return FUNC_6(VAR_5, VAR_3);
out_force:
 return FUNC_4(VAR_5, VAR_3);
}
