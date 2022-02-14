
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_crypto_ctl {scalar_t__* hash_algo; scalar_t__* cipher_algo; } ;
struct dst_node {int cipher_key; int hash_key; struct dst_crypto_ctl crypto; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct dst_node *VAR_0)
{
 struct dst_crypto_ctl *VAR_1 = &VAR_0->crypto;

 if (VAR_1->cipher_algo[0] || VAR_1->hash_algo[0]) {
  FUNC_0(VAR_0->hash_key);
  FUNC_0(VAR_0->cipher_key);
 }
}
