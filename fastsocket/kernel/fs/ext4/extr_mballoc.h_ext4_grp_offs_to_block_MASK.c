
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_free_extent {int fe_start; scalar_t__ fe_group; } ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_first_data_block; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline ext4_fsblk_t FUNC_3(struct super_block *VAR_0,
     struct ext4_free_extent *VAR_1)
{
 ext4_fsblk_t VAR_2;

 VAR_2 = (ext4_fsblk_t) VAR_1->fe_group * FUNC_0(VAR_0)
   + VAR_1->fe_start
   + FUNC_2(FUNC_1(VAR_0)->s_es->s_first_data_block);
 return VAR_2;
}
