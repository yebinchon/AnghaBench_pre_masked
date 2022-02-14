
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,struct hlist_head*,unsigned long) ;
 int FUNC_1 (struct super_block*,unsigned long) ;
 struct inode* FUNC_2 (struct super_block*,struct hlist_head*,unsigned long) ;
 struct hlist_head* VAR_0 ;

struct inode *FUNC_3(struct super_block *VAR_1, unsigned long VAR_2)
{
 struct hlist_head *VAR_3 = VAR_0 + FUNC_1(VAR_1, VAR_2);
 struct inode *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;




 return FUNC_0(VAR_1, VAR_3, VAR_2);
}
