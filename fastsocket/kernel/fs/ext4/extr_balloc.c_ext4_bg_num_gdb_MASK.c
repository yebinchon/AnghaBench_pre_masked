
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef unsigned long ext4_group_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_meta_bg; } ;


 unsigned long FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*,int ) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 unsigned long FUNC_3 (struct super_block*,unsigned long) ;
 unsigned long FUNC_4 (struct super_block*,unsigned long) ;
 unsigned long FUNC_5 (int ) ;

unsigned long FUNC_6(struct super_block *VAR_1, ext4_group_t VAR_2)
{
 unsigned long VAR_3 =
   FUNC_5(FUNC_2(VAR_1)->s_es->s_first_meta_bg);
 unsigned long VAR_4 = VAR_2 / FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1,VAR_0) ||
   VAR_4 < VAR_3)
  return FUNC_4(VAR_1, VAR_2);

 return FUNC_3(VAR_1,VAR_2);

}
