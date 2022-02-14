
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct hmac_ctx {struct crypto_shash* hash; } ;
struct crypto_tfm {scalar_t__ __crt_alg; } ;
struct crypto_shash_spawn {int dummy; } ;
struct crypto_shash {scalar_t__ descsize; } ;
struct crypto_instance {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (struct crypto_tfm*) ;
 struct crypto_shash_spawn* FUNC_3 (struct crypto_instance*) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_5 (struct crypto_shash_spawn*) ;
 struct hmac_ctx* FUNC_6 (struct crypto_shash*) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_0)
{
 struct crypto_shash *VAR_1 = FUNC_2(VAR_0);
 struct crypto_shash *VAR_2;
 struct crypto_instance *VAR_3 = (void *)VAR_0->__crt_alg;
 struct crypto_shash_spawn *VAR_4 = FUNC_3(VAR_3);
 struct hmac_ctx *VAR_5 = FUNC_6(VAR_1);

 VAR_2 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->descsize = sizeof(struct shash_desc) +
      FUNC_4(VAR_2);

 VAR_5->hash = VAR_2;
 return 0;
}
