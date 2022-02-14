
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_operations {int (* put_super ) (struct super_block*) ;} ;
struct super_block {int s_umount; int s_instances; int s_list; int s_id; int s_flags; scalar_t__ s_root; struct super_operations* s_op; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct super_block*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct super_block *VAR_2)
{
 const struct super_operations *VAR_3 = VAR_2->s_op;


 if (VAR_2->s_root) {
  FUNC_6(VAR_2);
  FUNC_10(VAR_2);
  FUNC_0();
  VAR_2->s_flags &= ~VAR_0;


  FUNC_1(VAR_2, 1);

  if (VAR_3->put_super)
   VAR_3->put_super(VAR_2);


  if (FUNC_1(VAR_2, 1)) {
   FUNC_4("VFS: Busy inodes after unmount of %s. "
      "Self-destruct in 5 seconds.  Have a nice day...\n",
      VAR_2->s_id);
  }
  FUNC_5();
 }
 FUNC_7(&VAR_1);

 FUNC_3(&VAR_2->s_list);
 FUNC_2(&VAR_2->s_instances);
 FUNC_8(&VAR_1);
 FUNC_11(&VAR_2->s_umount);
}
