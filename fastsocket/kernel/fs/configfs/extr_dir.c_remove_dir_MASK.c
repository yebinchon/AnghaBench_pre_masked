
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {int d_count; TYPE_1__ d_name; scalar_t__ d_inode; struct configfs_dirent* d_fsdata; int d_parent; } ;
struct configfs_dirent {int s_sibling; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct configfs_dirent*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (scalar_t__,struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct dentry * VAR_1)
{
 struct dentry * VAR_2 = FUNC_2(VAR_1->d_parent);
 struct configfs_dirent * VAR_3;

 VAR_3 = VAR_1->d_fsdata;
 FUNC_7(&VAR_0);
 FUNC_4(&VAR_3->s_sibling);
 FUNC_8(&VAR_0);
 FUNC_1(VAR_3);
 if (VAR_1->d_inode)
  FUNC_6(VAR_2->d_inode,VAR_1);

 FUNC_5(" o %s removing done (%d)\n",VAR_1->d_name.name,
   FUNC_0(&VAR_1->d_count));

 FUNC_3(VAR_2);
}
