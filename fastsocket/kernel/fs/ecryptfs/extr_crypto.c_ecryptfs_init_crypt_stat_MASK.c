
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int flags; int cs_hash_tfm_mutex; int cs_tfm_mutex; int cs_mutex; int keysig_list_mutex; int keysig_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ecryptfs_crypt_stat *VAR_1)
{
 FUNC_1((void *)VAR_1, 0, sizeof(struct ecryptfs_crypt_stat));
 FUNC_0(&VAR_1->keysig_list);
 FUNC_2(&VAR_1->keysig_list_mutex);
 FUNC_2(&VAR_1->cs_mutex);
 FUNC_2(&VAR_1->cs_tfm_mutex);
 FUNC_2(&VAR_1->cs_hash_tfm_mutex);
 VAR_1->flags |= VAR_0;
}
