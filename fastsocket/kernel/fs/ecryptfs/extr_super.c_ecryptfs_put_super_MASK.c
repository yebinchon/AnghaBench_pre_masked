
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ecryptfs_sb_info {int mount_crypt_stat; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct super_block*,int *) ;
 struct ecryptfs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ,struct ecryptfs_sb_info*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_1)
{
 struct ecryptfs_sb_info *VAR_2 = FUNC_2(VAR_1);

 FUNC_4();

 FUNC_0(&VAR_2->mount_crypt_stat);
 FUNC_3(VAR_0, VAR_2);
 FUNC_1(VAR_1, ((void*)0));

 FUNC_5();
}
