
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlock {int flag; scalar_t__ next; } ;
struct jfs_inode_info {int anon_inode_list; scalar_t__ atltail; scalar_t__ atlhead; } ;
struct inode {int dummy; } ;
typedef scalar_t__ lid_t ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tlock* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct inode *VAR_1)
{
 struct jfs_inode_info *VAR_2 = FUNC_0(VAR_1);
 struct tlock *VAR_3, *VAR_4;
 lid_t VAR_5 = 0, VAR_6;

 if (!VAR_2->atlhead)
  return;

 FUNC_1();
 VAR_3 = (struct tlock *) &VAR_2->atlhead;

 while ((VAR_6 = VAR_3->next) != 0) {
  VAR_4 = FUNC_3(VAR_6);
  if (VAR_4->flag & VAR_0) {
   VAR_3->next = VAR_4->next;
   FUNC_5(VAR_6);
  } else {
   VAR_3 = VAR_4;
   VAR_5 = VAR_6;
  }
 }

 if (VAR_2->atlhead)
  VAR_2->atltail = VAR_5;
 else {
  VAR_2->atltail = 0;



  FUNC_4(&VAR_2->anon_inode_list);
 }
 FUNC_2();
}
