
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_givcrypt_request {int giv; } ;
struct crypto_ablkcipher {int dummy; } ;
struct async_chainiv_ctx {int iv; scalar_t__ err; } ;
struct ablkcipher_request {int info; } ;


 int FUNC_0 (struct async_chainiv_ctx*) ;
 struct async_chainiv_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_2 (struct ablkcipher_request*) ;
 unsigned int FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 struct ablkcipher_request* FUNC_5 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_6 (struct skcipher_givcrypt_request*) ;

__attribute__((used)) static int FUNC_7(struct skcipher_givcrypt_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_6(VAR_0);
 struct async_chainiv_ctx *VAR_2 = FUNC_1(VAR_1);
 struct ablkcipher_request *VAR_3 = FUNC_5(VAR_0);
 unsigned int VAR_4 = FUNC_3(VAR_1);

 FUNC_4(VAR_0->giv, VAR_2->iv, VAR_4);
 FUNC_4(VAR_3->info, VAR_2->iv, VAR_4);

 VAR_2->err = FUNC_2(VAR_3);
 if (VAR_2->err)
  goto out;

 FUNC_4(VAR_2->iv, VAR_3->info, VAR_4);

out:
 return FUNC_0(VAR_2);
}
