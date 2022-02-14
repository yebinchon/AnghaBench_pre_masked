
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_9__ {int i_nlink; } ;
struct TYPE_8__ {int i_nlink; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 TYPE_6__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct dentry*,struct dentry*,int ,int ) ;
 int FUNC_6 (struct inode*,TYPE_1__*) ;
 int FUNC_7 (struct inode*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 struct dentry* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*,TYPE_1__*,struct dentry*) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_0, struct inode *VAR_1,
    struct dentry *VAR_2)
{
 struct dentry *VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(VAR_0->d_inode);
 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_3(VAR_2);
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 VAR_5 = FUNC_10(VAR_4);
 VAR_7 = FUNC_12(VAR_3, VAR_5->d_inode,
        VAR_4);
 if (VAR_7 || !VAR_4->d_inode)
  goto out_lock;
 VAR_7 = FUNC_5(VAR_4, VAR_2, VAR_1->i_sb, 0);
 if (VAR_7)
  goto out_lock;
 FUNC_6(VAR_1, VAR_4->d_inode);
 FUNC_7(VAR_1, VAR_4->d_inode);
 VAR_0->d_inode->i_nlink =
  FUNC_4(VAR_0->d_inode)->i_nlink;
 FUNC_9(VAR_2->d_inode, VAR_6);
out_lock:
 FUNC_11(VAR_5);
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
 FUNC_0(VAR_0);
 return VAR_7;
}
