
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_node {scalar_t__ trans_cache; } ;
struct dst_ctl {int dummy; } ;
struct dst_crypto_ctl {int hash_keysize; int cipher_keysize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_node*,struct dst_crypto_ctl*) ;

__attribute__((used)) static int FUNC_1(struct dst_node *VAR_3, struct dst_ctl *VAR_4,
  void *VAR_5, unsigned int VAR_6)
{
 struct dst_crypto_ctl *VAR_7 = VAR_5;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_6 != sizeof(struct dst_crypto_ctl) + VAR_7->hash_keysize +
   VAR_7->cipher_keysize)
  return -VAR_1;

 if (VAR_3->trans_cache)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_7);
}
