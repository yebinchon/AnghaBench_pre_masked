
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext3_sb_info {scalar_t__ s_resuid; scalar_t__ s_resgid; TYPE_1__* s_es; int s_freeblocks_counter; } ;
typedef scalar_t__ ext3_fsblk_t ;
struct TYPE_2__ {int s_r_blocks_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ext3_sb_info *VAR_1)
{
 ext3_fsblk_t VAR_2, VAR_3;

 VAR_2 = FUNC_4(&VAR_1->s_freeblocks_counter);
 VAR_3 = FUNC_3(VAR_1->s_es->s_r_blocks_count);
 if (VAR_2 < VAR_3 + 1 && !FUNC_0(VAR_0) &&
  VAR_1->s_resuid != FUNC_1() &&
  (VAR_1->s_resgid == 0 || !FUNC_2 (VAR_1->s_resgid))) {
  return 0;
 }
 return 1;
}
