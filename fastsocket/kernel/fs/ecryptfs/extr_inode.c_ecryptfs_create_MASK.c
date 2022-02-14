
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct dentry*,int,struct nameidata*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct dentry *VAR_2,
  int VAR_3, struct nameidata *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_3(VAR_5)) {
  FUNC_2(VAR_0, "Failed to create file in"
    "lower filesystem\n");
  goto out;
 }


 VAR_5 = FUNC_1(VAR_2);
out:
 return VAR_5;
}
