
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct inode {int i_state; int i_sb_list; int i_list; int i_hash; struct super_block* i_sb; } ;
struct TYPE_2__ {int nr_inodes; int nr_unused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int) ;

int FUNC_8(struct inode *VAR_9)
{
 struct super_block *VAR_10 = VAR_9->i_sb;

 if (!FUNC_2(&VAR_9->i_hash)) {
  if (!(VAR_9->i_state & (VAR_0|VAR_3)))
   FUNC_4(&VAR_9->i_list, &VAR_7);
  VAR_8.nr_unused++;
  if (VAR_10->s_flags & VAR_5) {
   FUNC_6(&VAR_6);
   return 0;
  }
  FUNC_0(VAR_9->i_state & VAR_2);
  VAR_9->i_state |= VAR_4;
  FUNC_6(&VAR_6);
  FUNC_7(VAR_9, 1);
  FUNC_5(&VAR_6);
  FUNC_0(VAR_9->i_state & VAR_2);
  VAR_9->i_state &= ~VAR_4;
  VAR_8.nr_unused--;
  FUNC_1(&VAR_9->i_hash);
 }
 FUNC_3(&VAR_9->i_list);
 FUNC_3(&VAR_9->i_sb_list);
 FUNC_0(VAR_9->i_state & VAR_2);
 VAR_9->i_state |= VAR_1;
 VAR_8.nr_inodes--;
 FUNC_6(&VAR_6);
 return 1;
}
