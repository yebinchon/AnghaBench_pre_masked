
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_aead; scalar_t__ __crt_alg; } ;
struct crypto_rfc4106_ctx {struct crypto_aead* child; } ;
struct crypto_instance {int dummy; } ;
struct crypto_aead_spawn {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 unsigned long FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead_spawn* FUNC_5 (struct crypto_instance*) ;
 struct crypto_aead* FUNC_6 (struct crypto_aead_spawn*) ;
 struct crypto_rfc4106_ctx* FUNC_7 (struct crypto_tfm*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0->__crt_alg;
 struct crypto_aead_spawn *VAR_2 = FUNC_5(VAR_1);
 struct crypto_rfc4106_ctx *VAR_3 = FUNC_7(VAR_0);
 struct crypto_aead *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_6(VAR_2);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_3->child = VAR_4;

 VAR_5 = FUNC_3(VAR_4);
 VAR_5 &= ~(FUNC_8() - 1);
 VAR_0->crt_aead.reqsize = sizeof(struct aead_request) +
    FUNC_0(FUNC_4(VAR_4),
          FUNC_8()) +
    VAR_5 + 16;

 return 0;
}
