
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dfs_info3_param {int dummy; } ;
struct cifs_sb_info {int mountdata; } ;


 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const*,struct dfs_info3_param const*,char**) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 struct vfsmount* FUNC_3 (int *,int ,char*,char*) ;

__attribute__((used)) static struct vfsmount *FUNC_4(struct cifs_sb_info *VAR_1,
  const char *VAR_2, const struct dfs_info3_param *VAR_3)
{
 struct vfsmount *VAR_4;
 char *VAR_5;
 char *VAR_6 = ((void*)0);


 VAR_5 = FUNC_1(VAR_1->mountdata,
   VAR_2 + 1, VAR_3, &VAR_6);

 if (FUNC_0(VAR_5))
  return (struct vfsmount *)VAR_5;

 VAR_4 = FUNC_3(&VAR_0, 0, VAR_6, VAR_5);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 return VAR_4;

}
