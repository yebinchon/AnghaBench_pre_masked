
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_sb_info {TYPE_1__* s_es; int s_mount_state; } ;
struct TYPE_2__ {int s_state; } ;


 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0)
{
 struct ext2_sb_info *VAR_1 = FUNC_0(VAR_0);


 FUNC_3();
 VAR_1->s_es->s_state = FUNC_1(VAR_1->s_mount_state);
 FUNC_4();
 FUNC_2(VAR_0, VAR_1->s_es);

 return 0;
}
