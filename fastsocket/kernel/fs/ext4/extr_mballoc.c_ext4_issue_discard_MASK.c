
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef scalar_t__ ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct super_block*,scalar_t__,int,int ,int ) ;
 int FUNC_2 (struct super_block*,unsigned long long,int) ;

__attribute__((used)) static inline int FUNC_3(struct super_block *VAR_1,
  ext4_group_t VAR_2, ext4_grpblk_t VAR_3, int VAR_4)
{
 ext4_fsblk_t VAR_5;

 VAR_5 = VAR_3 + FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_1,
   (unsigned long long) VAR_5, VAR_4);
 return FUNC_1(VAR_1, VAR_5, VAR_4, VAR_0, 0);
}
