
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_crypto_capabilities {int cipher_keysize; void* cipher_strlen; void* hash_strlen; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct netfs_crypto_capabilities *VAR_0)
{
 VAR_0->hash_strlen = FUNC_0(VAR_0->hash_strlen);
 VAR_0->cipher_strlen = FUNC_0(VAR_0->cipher_strlen);
 VAR_0->cipher_keysize = FUNC_1(VAR_0->cipher_keysize);
}
