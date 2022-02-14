
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct inode* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,unsigned long) ;

struct inode *FUNC_5(struct super_block *VAR_3, unsigned long VAR_4)
{
 struct inode *VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 if (!(VAR_5->i_state & VAR_1))
  return VAR_5;

 if (FUNC_1(VAR_5) == VAR_2)
  return FUNC_2(VAR_5);
 else
  return FUNC_3(VAR_5);
}
