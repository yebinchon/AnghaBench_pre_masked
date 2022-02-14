
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_1,
  struct hlist_head *VAR_2, int (*VAR_3)(struct inode *, void *),
  void *VAR_4, const int VAR_5)
{
 struct inode *VAR_6;

 FUNC_3(&VAR_0);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_6);
  FUNC_4(&VAR_0);
  if (FUNC_2(VAR_5))
   FUNC_5(VAR_6);
  return VAR_6;
 }
 FUNC_4(&VAR_0);
 return ((void*)0);
}
