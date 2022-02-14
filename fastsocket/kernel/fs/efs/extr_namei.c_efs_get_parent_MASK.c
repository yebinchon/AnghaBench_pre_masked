
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
typedef scalar_t__ efs_ino_t ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,scalar_t__) ;

struct dentry *FUNC_4(struct dentry *VAR_1)
{
 struct dentry *VAR_2 = FUNC_0(-VAR_0);
 efs_ino_t VAR_3;

 VAR_3 = FUNC_2(VAR_1->d_inode, "..", 2);
 if (VAR_3)
  VAR_2 = FUNC_1(FUNC_3(VAR_1->d_inode->i_sb, VAR_3));

 return VAR_2;
}
