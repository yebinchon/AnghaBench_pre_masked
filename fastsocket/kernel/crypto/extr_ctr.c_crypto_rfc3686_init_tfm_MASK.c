
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; scalar_t__ __crt_alg; } ;
struct crypto_skcipher_spawn {int dummy; } ;
struct crypto_rfc3686_req_ctx {int dummy; } ;
struct crypto_rfc3686_ctx {struct crypto_ablkcipher* child; } ;
struct crypto_instance {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_skcipher_spawn* FUNC_3 (struct crypto_instance*) ;
 struct crypto_ablkcipher* FUNC_4 (struct crypto_skcipher_spawn*) ;
 unsigned long FUNC_5 (struct crypto_tfm*) ;
 struct crypto_rfc3686_ctx* FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0->__crt_alg;
 struct crypto_skcipher_spawn *VAR_2 = FUNC_3(VAR_1);
 struct crypto_rfc3686_ctx *VAR_3 = FUNC_6(VAR_0);
 struct crypto_ablkcipher *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;

 VAR_5 = FUNC_5(VAR_0);
 VAR_5 &= ~(FUNC_7() - 1);
 VAR_0->crt_ablkcipher.reqsize = VAR_5 +
  sizeof(struct crypto_rfc3686_req_ctx) +
  FUNC_2(VAR_4);

 return 0;
}
