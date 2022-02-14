
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hlist_head {int dummy; } ;
typedef unsigned int ino_t ;


 struct inode* FUNC_0 (struct super_block*,struct hlist_head*,unsigned int) ;
 int FUNC_1 (struct super_block*,unsigned int) ;
 struct hlist_head* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

ino_t FUNC_4(struct super_block *VAR_2, ino_t VAR_3)
{





 static unsigned int VAR_4;
 struct inode *VAR_5;
 struct hlist_head *VAR_6;
 ino_t VAR_7;

 FUNC_2(&VAR_1);
 do {
  if (VAR_4 <= VAR_3)
   VAR_4 = VAR_3 + 1;
  VAR_7 = VAR_4++;
  VAR_6 = VAR_0 + FUNC_1(VAR_2, VAR_7);
  VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_7);
 } while (VAR_5 != ((void*)0));
 FUNC_3(&VAR_1);

 return VAR_7;
}
