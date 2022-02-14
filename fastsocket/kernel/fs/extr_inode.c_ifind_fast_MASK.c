
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,struct hlist_head*,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_1,
  struct hlist_head *VAR_2, unsigned long VAR_3)
{
 struct inode *VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_4);
  FUNC_3(&VAR_0);
  FUNC_4(VAR_4);
  return VAR_4;
 }
 FUNC_3(&VAR_0);
 return ((void*)0);
}
