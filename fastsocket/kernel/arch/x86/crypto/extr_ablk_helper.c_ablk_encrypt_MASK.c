
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_ablkcipher {int dummy; } ;
struct async_helper_ctx {TYPE_1__* cryptd_tfm; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (struct ablkcipher_request*) ;
 struct ablkcipher_request* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct ablkcipher_request*,int *) ;
 struct async_helper_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ablkcipher_request*,struct ablkcipher_request*,int) ;

int FUNC_8(struct ablkcipher_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_5(VAR_0);
 struct async_helper_ctx *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_6()) {
  struct ablkcipher_request *VAR_3 =
   FUNC_1(VAR_0);

  FUNC_7(VAR_3, VAR_0, sizeof(*VAR_0));
  FUNC_2(VAR_3, &VAR_2->cryptd_tfm->base);

  return FUNC_4(VAR_3);
 } else {
  return FUNC_0(VAR_0);
 }
}
