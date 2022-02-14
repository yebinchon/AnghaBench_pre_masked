
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_operations {void (* delete_inode ) (struct inode*) ;} ;
struct inode {int i_state; int i_hash; int i_data; int i_sb_list; int i_list; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int nr_inodes; } ;
struct TYPE_3__ {struct super_operations* s_op; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;

void FUNC_13(struct inode *VAR_5)
{
 const struct super_operations *VAR_6 = VAR_5->i_sb->s_op;

 FUNC_6(&VAR_5->i_list);
 FUNC_6(&VAR_5->i_sb_list);
 FUNC_1(VAR_5->i_state & VAR_2);
 VAR_5->i_state |= VAR_1;
 VAR_4.nr_inodes--;
 FUNC_9(&VAR_3);

 FUNC_7(VAR_5);

 if (VAR_6->delete_inode) {
  void (*VAR_7)(struct inode *) = VAR_6->delete_inode;
  if (!FUNC_5(VAR_5))
   FUNC_11(VAR_5);




  VAR_7(VAR_5);
 } else {
  FUNC_10(&VAR_5->i_data, 0);
  FUNC_2(VAR_5);
 }
 FUNC_8(&VAR_3);
 FUNC_4(&VAR_5->i_hash);
 FUNC_9(&VAR_3);
 FUNC_12(VAR_5);
 FUNC_0(VAR_5->i_state != VAR_0);
 FUNC_3(VAR_5);
}
