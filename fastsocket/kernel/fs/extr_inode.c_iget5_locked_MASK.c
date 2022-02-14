
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),int (*) (struct inode*,void*),void*) ;
 int FUNC_1 (struct super_block*,unsigned long) ;
 struct inode* FUNC_2 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),void*,int) ;
 struct hlist_head* VAR_0 ;

struct inode *FUNC_3(struct super_block *VAR_1, unsigned long VAR_2,
  int (*VAR_3)(struct inode *, void *),
  int (*VAR_4)(struct inode *, void *), void *VAR_5)
{
 struct hlist_head *VAR_6 = VAR_0 + FUNC_1(VAR_1, VAR_2);
 struct inode *VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_3, VAR_5, 1);
 if (VAR_7)
  return VAR_7;




 return FUNC_0(VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
}
