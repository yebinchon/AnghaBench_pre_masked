
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_mount_crypt_stat {int dummy; } ;
struct ecryptfs_crypt_stat {struct ecryptfs_mount_crypt_stat* mount_crypt_stat; int file_version; int flags; int key_size; int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecryptfs_crypt_stat*,struct ecryptfs_mount_crypt_stat*) ;
 int FUNC_1 (struct ecryptfs_crypt_stat*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct ecryptfs_crypt_stat *VAR_4,
 struct ecryptfs_mount_crypt_stat *VAR_5)
{
 FUNC_0(VAR_4,
            VAR_5);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4->cipher, VAR_0);
 VAR_4->key_size = VAR_1;
 VAR_4->flags &= ~(VAR_3);
 VAR_4->file_version = VAR_2;
 VAR_4->mount_crypt_stat = VAR_5;
}
