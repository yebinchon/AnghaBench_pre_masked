
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_group_desc {int bg_flags; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {scalar_t__ s_groups_count; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 struct ext4_group_desc* FUNC_2 (struct super_block*,scalar_t__,int *) ;

__attribute__((used)) static ext4_group_t FUNC_3(struct super_block *VAR_1)
{
 ext4_group_t VAR_2, VAR_3 = FUNC_0(VAR_1)->s_groups_count;
 struct ext4_group_desc *VAR_4 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, ((void*)0));
  if (!VAR_4)
   continue;

  if (!(VAR_4->bg_flags & FUNC_1(VAR_0)))
   break;
 }

 return VAR_2;
}
