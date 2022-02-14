
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dentry; } ;
struct nameidata {TYPE_4__ path; } ;
struct dentry {int dummy; } ;
typedef int mode_t ;
struct TYPE_8__ {int i_mutex; } ;
struct TYPE_7__ {int mnt_root; } ;
struct TYPE_6__ {TYPE_3__* d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct nameidata*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,struct dentry*,int ) ;
 int FUNC_7 (int ,TYPE_2__*,char const*,int ,struct nameidata*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2, mode_t VAR_3)
{
 struct nameidata VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_1->mnt_root, VAR_1,
         VAR_2, VAR_0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_3(&VAR_4, 1);
 if (!FUNC_0(VAR_5)) {
  VAR_6 = FUNC_6(VAR_4.path.dentry->d_inode, VAR_5, VAR_3);
  FUNC_2(VAR_5);
 } else {
  VAR_6 = FUNC_1(VAR_5);
 }
 FUNC_4(&VAR_4.path.dentry->d_inode->i_mutex);

 FUNC_5(&VAR_4.path);
 return VAR_6;
}
