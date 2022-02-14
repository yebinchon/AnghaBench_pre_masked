
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent {int dummy; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ext4_extent*) ;
 int FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct ext4_extent *VAR_2)
{
 ext4_fsblk_t VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_2);

 VAR_5 = FUNC_2(VAR_1->i_sb, VAR_3, VAR_4, VAR_0);
 if (VAR_5 > 0)
  VAR_5 = 0;

 return VAR_5;
}
