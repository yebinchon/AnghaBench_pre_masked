
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; struct crypto_aead* base; } ;
struct crypto_tfm {TYPE_1__ crt_aead; scalar_t__ __crt_alg; } ;
struct crypto_instance {int dummy; } ;
struct crypto_aead {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_instance*) ;
 struct crypto_aead* FUNC_4 (int ) ;

int FUNC_5(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0->__crt_alg;
 struct crypto_aead *VAR_2;

 VAR_2 = FUNC_4(FUNC_3(VAR_1));
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_0->crt_aead.base = VAR_2;
 VAR_0->crt_aead.reqsize += FUNC_2(VAR_2);

 return 0;
}
