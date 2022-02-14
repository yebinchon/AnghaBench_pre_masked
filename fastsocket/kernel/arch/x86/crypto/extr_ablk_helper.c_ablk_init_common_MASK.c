
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct cryptd_ablkcipher {int base; } ;
struct async_helper_ctx {struct cryptd_ablkcipher* cryptd_tfm; } ;
struct ablkcipher_request {int dummy; } ;


 scalar_t__ FUNC_0 (struct cryptd_ablkcipher*) ;
 int FUNC_1 (struct cryptd_ablkcipher*) ;
 struct cryptd_ablkcipher* FUNC_2 (char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct async_helper_ctx* FUNC_4 (struct crypto_tfm*) ;

int FUNC_5(struct crypto_tfm *VAR_0, const char *VAR_1)
{
 struct async_helper_ctx *VAR_2 = FUNC_4(VAR_0);
 struct cryptd_ablkcipher *VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->cryptd_tfm = VAR_3;
 VAR_0->crt_ablkcipher.reqsize = sizeof(struct ablkcipher_request) +
  FUNC_3(&VAR_3->base);

 return 0;
}
