
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int ext4_group_t ;
struct TYPE_4__ {unsigned long s_gdb_count; TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_meta_bg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct super_block *VAR_1,
     ext4_group_t VAR_2)
{
 if (!FUNC_2(VAR_1, VAR_2))
  return 0;

 if (FUNC_0(VAR_1,VAR_0))
  return FUNC_3(FUNC_1(VAR_1)->s_es->s_first_meta_bg);
 else
  return FUNC_1(VAR_1)->s_gdb_count;
}
