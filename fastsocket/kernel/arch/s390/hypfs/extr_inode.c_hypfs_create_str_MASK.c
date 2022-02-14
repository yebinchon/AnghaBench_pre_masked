
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct super_block*,struct dentry*,char const*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

struct dentry *FUNC_8(struct super_block *VAR_4, struct dentry *VAR_5,
    const char *VAR_6, char *VAR_7)
{
 char *VAR_8;
 struct dentry *VAR_9;

 VAR_8 = FUNC_5(FUNC_7(VAR_7) + 2, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);
 FUNC_6(VAR_8, "%s\n", VAR_7);
 VAR_9 =
     FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_3 | VAR_2);
 if (FUNC_1(VAR_9)) {
  FUNC_4(VAR_8);
  return FUNC_0(-VAR_0);
 }
 FUNC_2(VAR_9);
 return VAR_9;
}
