
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __u32 ;


 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,unsigned long,unsigned long) ;

__attribute__((used)) static struct dentry *
FUNC_6(struct super_block *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3,
    __u32 VAR_4)
{
 struct inode *VAR_5;

 if (VAR_2 == 0)
  return FUNC_1(-VAR_0);
 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);
 if (VAR_4 && VAR_5->i_generation != VAR_4) {
  FUNC_4(VAR_5);
  return FUNC_1(-VAR_0);
 }
 return FUNC_3(VAR_5);
}
