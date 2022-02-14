
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct super_block*,unsigned long) ;
 struct inode* FUNC_1 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),void*,int) ;
 struct hlist_head* VAR_0 ;

struct inode *FUNC_2(struct super_block *VAR_1, unsigned long VAR_2,
  int (*VAR_3)(struct inode *, void *), void *VAR_4)
{
 struct hlist_head *VAR_5 = VAR_0 + FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_1, VAR_5, VAR_3, VAR_4, 1);
}
