
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_sb_info {scalar_t__ s_commit_interval; } ;
struct TYPE_3__ {int j_state_lock; int j_flags; scalar_t__ j_commit_interval; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext3_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_4, journal_t *VAR_5)
{
 struct ext3_sb_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->s_commit_interval)
  VAR_5->j_commit_interval = VAR_6->s_commit_interval;




 FUNC_1(&VAR_5->j_state_lock);
 if (FUNC_3(VAR_4, VAR_0))
  VAR_5->j_flags |= VAR_3;
 else
  VAR_5->j_flags &= ~VAR_3;
 if (FUNC_3(VAR_4, VAR_1))
  VAR_5->j_flags |= VAR_2;
 else
  VAR_5->j_flags &= ~VAR_2;
 FUNC_2(&VAR_5->j_state_lock);
}
