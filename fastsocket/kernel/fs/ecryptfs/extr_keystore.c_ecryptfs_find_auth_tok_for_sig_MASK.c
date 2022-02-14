
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct ecryptfs_mount_crypt_stat {int dummy; } ;
struct ecryptfs_global_auth_tok {struct ecryptfs_auth_tok* global_auth_tok; } ;
struct ecryptfs_auth_tok {int dummy; } ;


 scalar_t__ FUNC_0 (struct ecryptfs_global_auth_tok**,struct ecryptfs_mount_crypt_stat*,char*) ;
 int FUNC_1 (struct key**,struct ecryptfs_auth_tok**,char*) ;

__attribute__((used)) static int
FUNC_2(
 struct ecryptfs_auth_tok **VAR_0,
 struct ecryptfs_mount_crypt_stat *VAR_1,
 char *VAR_2)
{
 struct ecryptfs_global_auth_tok *VAR_3;
 int VAR_4 = 0;

 (*VAR_0) = ((void*)0);
 if (FUNC_0(&VAR_3,
        VAR_1, VAR_2)) {
  struct key *VAR_5;

  VAR_4 = FUNC_1(&VAR_5, VAR_0,
             VAR_2);
 } else
  (*VAR_0) = VAR_3->global_auth_tok;
 return VAR_4;
}
