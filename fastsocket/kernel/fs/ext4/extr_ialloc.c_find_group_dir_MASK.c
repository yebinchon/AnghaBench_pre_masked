
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
typedef unsigned int ext4_group_t ;
struct TYPE_2__ {int s_freeinodes_counter; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,struct ext4_group_desc*) ;
 unsigned int FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_3 (struct super_block*,unsigned int,int *) ;
 unsigned int FUNC_4 (struct super_block*) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0, struct inode *VAR_1,
    ext4_group_t *VAR_2)
{
 ext4_group_t VAR_3 = FUNC_4(VAR_0);
 unsigned int VAR_4, VAR_5;
 struct ext4_group_desc *VAR_6, *VAR_7 = ((void*)0);
 ext4_group_t VAR_8;
 int VAR_9 = -1;

 VAR_4 = FUNC_5(&FUNC_0(VAR_0)->s_freeinodes_counter);
 VAR_5 = VAR_4 / VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_6 = FUNC_3(VAR_0, VAR_8, ((void*)0));
  if (!VAR_6 || !FUNC_2(VAR_0, VAR_6))
   continue;
  if (FUNC_2(VAR_0, VAR_6) < VAR_5)
   continue;
  if (!VAR_7 ||
      (FUNC_1(VAR_0, VAR_6) >
       FUNC_1(VAR_0, VAR_7))) {
   *VAR_2 = VAR_8;
   VAR_7 = VAR_6;
   VAR_9 = 0;
  }
 }
 return VAR_9;
}
