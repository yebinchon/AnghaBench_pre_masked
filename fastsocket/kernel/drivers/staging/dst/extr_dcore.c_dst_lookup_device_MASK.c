
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct nameidata {TYPE_2__ path; } ;
struct inode {int i_rdev; int i_mode; } ;
typedef int dev_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,struct nameidata*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, dev_t *VAR_4)
{
 int VAR_5;
 struct nameidata VAR_6;
 struct inode *VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_7 = VAR_6.path.dentry->d_inode;
 if (!VAR_7) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (!FUNC_0(VAR_7->i_mode)) {
  VAR_5 = -VAR_1;
  goto out;
 }

 *VAR_4 = VAR_7->i_rdev;

out:
 FUNC_2(&VAR_6.path);
 return VAR_5;
}
