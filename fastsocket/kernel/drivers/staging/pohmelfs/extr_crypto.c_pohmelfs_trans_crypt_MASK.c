
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int perform_crypto; int cipher_string; int hash_string; } ;
struct netfs_trans {int dummy; } ;


 int FUNC_0 (struct netfs_trans*) ;
 int FUNC_1 (struct netfs_trans*,struct pohmelfs_sb*,int ) ;
 int FUNC_2 (struct pohmelfs_sb*,int ,struct netfs_trans*) ;
 int VAR_0 ;

int FUNC_3(struct netfs_trans *VAR_1, struct pohmelfs_sb *VAR_2)
{
 if ((!VAR_2->hash_string && !VAR_2->cipher_string) || !VAR_2->perform_crypto) {
  FUNC_0(VAR_1);
  return FUNC_1(VAR_1, VAR_2, 0);
 }

 return FUNC_2(VAR_2, VAR_0, VAR_1);
}
