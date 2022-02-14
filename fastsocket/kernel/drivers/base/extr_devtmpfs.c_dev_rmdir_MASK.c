
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* dentry; } ;
struct TYPE_7__ {int len; int name; } ;
struct nameidata {TYPE_4__ path; TYPE_1__ last; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_11__ {TYPE_2__* d_inode; } ;
struct TYPE_9__ {int mnt_root; } ;
struct TYPE_8__ {int i_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ,TYPE_5__*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_3__*,char const*,int ,struct nameidata*) ;
 int FUNC_8 (TYPE_2__*,struct dentry*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_4)
{
 struct nameidata VAR_5;
 struct dentry *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_3->mnt_root, VAR_3,
         VAR_4, VAR_2, &VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_4(&VAR_5.path.dentry->d_inode->i_mutex, VAR_1);
 VAR_6 = FUNC_3(VAR_5.last.name, VAR_5.path.dentry, VAR_5.last.len);
 if (!FUNC_0(VAR_6)) {
  if (VAR_6->d_inode)
   VAR_7 = FUNC_8(VAR_5.path.dentry->d_inode, VAR_6);
  else
   VAR_7 = -VAR_0;
  FUNC_2(VAR_6);
 } else {
  VAR_7 = FUNC_1(VAR_6);
 }
 FUNC_5(&VAR_5.path.dentry->d_inode->i_mutex);

 FUNC_6(&VAR_5.path);
 return VAR_7;
}
