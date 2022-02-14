
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {scalar_t__ __crt_alg; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct crypto_cts_ctx {struct crypto_blkcipher* child; } ;
struct crypto_blkcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 struct crypto_spawn* FUNC_2 (struct crypto_instance*) ;
 struct crypto_blkcipher* FUNC_3 (struct crypto_spawn*) ;
 struct crypto_cts_ctx* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0->__crt_alg;
 struct crypto_spawn *VAR_2 = FUNC_2(VAR_1);
 struct crypto_cts_ctx *VAR_3 = FUNC_4(VAR_0);
 struct crypto_blkcipher *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;
 return 0;
}
