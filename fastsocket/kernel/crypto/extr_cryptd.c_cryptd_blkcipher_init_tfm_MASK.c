
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct cryptd_instance_ctx {struct crypto_spawn spawn; } ;
struct cryptd_blkcipher_request_ctx {int dummy; } ;
struct cryptd_blkcipher_ctx {struct crypto_blkcipher* child; } ;


 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 int FUNC_1 (struct crypto_blkcipher*) ;
 struct cryptd_instance_ctx* FUNC_2 (struct crypto_instance*) ;
 struct crypto_blkcipher* FUNC_3 (struct crypto_spawn*) ;
 struct crypto_instance* FUNC_4 (struct crypto_tfm*) ;
 struct cryptd_blkcipher_ctx* FUNC_5 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = FUNC_4(VAR_0);
 struct cryptd_instance_ctx *VAR_2 = FUNC_2(VAR_1);
 struct crypto_spawn *VAR_3 = &VAR_2->spawn;
 struct cryptd_blkcipher_ctx *VAR_4 = FUNC_5(VAR_0);
 struct crypto_blkcipher *VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->child = VAR_5;
 VAR_0->crt_ablkcipher.reqsize =
  sizeof(struct cryptd_blkcipher_request_ctx);
 return 0;
}
