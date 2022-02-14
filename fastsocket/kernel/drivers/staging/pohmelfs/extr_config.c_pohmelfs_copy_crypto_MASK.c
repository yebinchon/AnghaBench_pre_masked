
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {void* hash_string; void* cipher_string; void* hash_key; scalar_t__ cipher_keysize; void* cipher_key; scalar_t__ hash_keysize; int cipher_strlen; int hash_strlen; int idx; } ;
struct pohmelfs_config_group {scalar_t__ cipher_keysize; int cipher_key; scalar_t__ hash_keysize; int hash_key; int cipher_strlen; scalar_t__ cipher_string; int hash_strlen; scalar_t__ hash_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 struct pohmelfs_config_group* FUNC_6 (int ) ;

int FUNC_7(struct pohmelfs_sb *VAR_4)
{
 struct pohmelfs_config_group *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_4(&VAR_3);
 VAR_5 = FUNC_6(VAR_4->idx);
 if (!VAR_5)
  goto err_out_exit;

 if (VAR_5->hash_string) {
  VAR_6 = -VAR_1;
  VAR_4->hash_string = FUNC_2(VAR_5->hash_string, VAR_2);
  if (!VAR_4->hash_string)
   goto err_out_exit;
  VAR_4->hash_strlen = VAR_5->hash_strlen;
 }

 if (VAR_5->cipher_string) {
  VAR_4->cipher_string = FUNC_2(VAR_5->cipher_string, VAR_2);
  if (!VAR_4->cipher_string)
   goto err_out_free_hash_string;
  VAR_4->cipher_strlen = VAR_5->cipher_strlen;
 }

 if (VAR_5->hash_keysize) {
  VAR_4->hash_key = FUNC_1(VAR_5->hash_keysize, VAR_2);
  if (!VAR_4->hash_key)
   goto err_out_free_cipher_string;
  FUNC_3(VAR_4->hash_key, VAR_5->hash_key, VAR_5->hash_keysize);
  VAR_4->hash_keysize = VAR_5->hash_keysize;
 }

 if (VAR_5->cipher_keysize) {
  VAR_4->cipher_key = FUNC_1(VAR_5->cipher_keysize, VAR_2);
  if (!VAR_4->cipher_key)
   goto err_out_free_hash;
  FUNC_3(VAR_4->cipher_key, VAR_5->cipher_key, VAR_5->cipher_keysize);
  VAR_4->cipher_keysize = VAR_5->cipher_keysize;
 }

 FUNC_5(&VAR_3);

 return 0;

err_out_free_hash:
 FUNC_0(VAR_4->hash_key);
err_out_free_cipher_string:
 FUNC_0(VAR_4->cipher_string);
err_out_free_hash_string:
 FUNC_0(VAR_4->hash_string);
err_out_exit:
 FUNC_5(&VAR_3);
 return VAR_6;
}
