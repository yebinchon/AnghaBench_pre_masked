
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_aead; scalar_t__ __crt_alg; } ;
struct crypto_instance {int dummy; } ;
struct crypto_cipher {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int dummy; } ;
struct crypto_ccm_ctx {struct crypto_cipher* ctr; struct crypto_cipher* cipher; } ;
typedef struct crypto_cipher crypto_ablkcipher ;
struct ccm_instance_ctx {int ctr; int cipher; } ;


 scalar_t__ FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 scalar_t__ FUNC_2 (struct crypto_cipher*) ;
 int FUNC_3 (struct crypto_cipher*) ;
 struct ccm_instance_ctx* FUNC_4 (struct crypto_instance*) ;
 struct crypto_cipher* FUNC_5 (int *) ;
 struct crypto_cipher* FUNC_6 (int *) ;
 unsigned long FUNC_7 (struct crypto_tfm*) ;
 struct crypto_ccm_ctx* FUNC_8 (struct crypto_tfm*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0->__crt_alg;
 struct ccm_instance_ctx *VAR_2 = FUNC_4(VAR_1);
 struct crypto_ccm_ctx *VAR_3 = FUNC_8(VAR_0);
 struct crypto_cipher *VAR_4;
 struct crypto_ablkcipher *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(&VAR_2->cipher);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_6(&VAR_2->ctr);
 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto err_free_cipher;

 VAR_3->cipher = VAR_4;
 VAR_3->ctr = VAR_5;

 VAR_6 = FUNC_7(VAR_0);
 VAR_6 &= ~(FUNC_9() - 1);
 VAR_0->crt_aead.reqsize = VAR_6 +
    sizeof(struct crypto_ccm_req_priv_ctx) +
    FUNC_2(VAR_5);

 return 0;

err_free_cipher:
 FUNC_3(VAR_4);
 return VAR_7;
}
