
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pohmelfs_crypto {int strlen; int keysize; scalar_t__ data; } ;
struct pohmelfs_config_group {int cipher_strlen; int cipher_key; scalar_t__ cipher_string; int cipher_keysize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct pohmelfs_config_group *VAR_3, struct pohmelfs_crypto *VAR_4)
{
 char *VAR_5 = (char *)VAR_4->data;
 u8 *VAR_6 = (u8 *)(VAR_5 + VAR_4->strlen);

 if (VAR_3->cipher_string)
  return -VAR_0;

 VAR_3->cipher_string = FUNC_2(VAR_5, VAR_2);
 if (!VAR_3->cipher_string)
  return -VAR_1;
 VAR_3->cipher_strlen = VAR_4->strlen;
 VAR_3->cipher_keysize = VAR_4->keysize;

 VAR_3->cipher_key = FUNC_1(VAR_4->keysize, VAR_2);
 if (!VAR_3->cipher_key) {
  FUNC_0(VAR_3->cipher_string);
  return -VAR_1;
 }

 FUNC_3(VAR_3->cipher_key, VAR_6, VAR_4->keysize);

 return 0;
}
