
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct dentry {int d_name; TYPE_2__* d_inode; } ;
typedef int btree_key ;
struct TYPE_4__ {int i_ino; } ;
struct TYPE_3__ {int cat_key; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int FUNC_2 (int ,struct inode*,int *,struct inode*,int *) ;
 int FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1,
        struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;


 if (VAR_3->d_inode) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1->d_inode->i_ino,
      VAR_0, &VAR_1->d_name,
      VAR_2, &VAR_3->d_name);
 if (!VAR_4)
  FUNC_1(VAR_0->i_sb,
      (btree_key *)&FUNC_0(VAR_1->d_inode)->cat_key,
      VAR_2->i_ino, &VAR_3->d_name);
 return VAR_4;
}
