
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int state_flags; } ;
struct pohmelfs_inode {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pohmelfs_inode* FUNC_0 (struct inode*) ;
 struct pohmelfs_sb* FUNC_1 (int ) ;
 int FUNC_2 (struct pohmelfs_inode*,int,size_t,char const*,void const*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_3, const char *VAR_4,
  const void *VAR_5, size_t VAR_6, int VAR_7)
{
 struct inode *VAR_8 = VAR_3->d_inode;
 struct pohmelfs_inode *VAR_9 = FUNC_0(VAR_8);
 struct pohmelfs_sb *VAR_10 = FUNC_1(VAR_8->i_sb);

 if (!(VAR_10->state_flags & VAR_2))
  return -VAR_0;

 return FUNC_2(VAR_9, VAR_7, VAR_6, VAR_4,
   VAR_5, VAR_6, VAR_1);
}
