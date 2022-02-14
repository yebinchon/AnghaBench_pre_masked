
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct gfs2_inode {int i_inode; int i_eattr; } ;


 struct posix_acl* VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_0 (int) ;
 struct posix_acl* FUNC_1 (int *,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct gfs2_inode*,char const*,char**) ;
 int FUNC_4 (char*) ;
 struct posix_acl* FUNC_5 (char*,int) ;

__attribute__((used)) static struct posix_acl *FUNC_6(struct gfs2_inode *VAR_2, int VAR_3)
{
 struct posix_acl *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 int VAR_7;

 if (!VAR_2->i_eattr)
  return ((void*)0);

 VAR_4 = FUNC_1(&VAR_2->i_inode, VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_3(VAR_2, VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return FUNC_0(VAR_7);
 if (VAR_7 == 0)
  return ((void*)0);

 VAR_4 = FUNC_5(VAR_6, VAR_7);
 FUNC_4(VAR_6);
 return VAR_4;
}
