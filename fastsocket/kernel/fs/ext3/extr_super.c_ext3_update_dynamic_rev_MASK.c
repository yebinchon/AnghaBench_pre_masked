
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext3_super_block {void* s_rev_level; int s_inode_size; void* s_first_ino; } ;
struct TYPE_2__ {struct ext3_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,int ,char*,int ) ;
 scalar_t__ FUNC_4 (void*) ;

void FUNC_5(struct super_block *VAR_5)
{
 struct ext3_super_block *VAR_6 = FUNC_0(VAR_5)->s_es;

 if (FUNC_4(VAR_6->s_rev_level) > VAR_3)
  return;

 FUNC_3(VAR_5, VAR_4,
  "warning: updating to rev %d because of "
  "new feature flag, running e2fsck is recommended",
  VAR_0);

 VAR_6->s_first_ino = FUNC_2(VAR_1);
 VAR_6->s_inode_size = FUNC_1(VAR_2);
 VAR_6->s_rev_level = FUNC_2(VAR_0);
}
