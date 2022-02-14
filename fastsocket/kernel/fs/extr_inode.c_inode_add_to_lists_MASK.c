
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_ino; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct super_block*,struct hlist_head*,struct inode*) ;
 int FUNC_1 (struct super_block*,int ) ;
 struct hlist_head* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_2, struct inode *VAR_3)
{
 struct hlist_head *VAR_4 = VAR_0 + FUNC_1(VAR_2, VAR_3->i_ino);

 FUNC_2(&VAR_1);
 FUNC_0(VAR_2, VAR_4, VAR_3);
 FUNC_3(&VAR_1);
}
