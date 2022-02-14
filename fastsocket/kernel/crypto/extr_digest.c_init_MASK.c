
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hash_desc {int tfm; } ;
struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct TYPE_3__ {int (* dia_init ) (struct crypto_tfm*) ;} ;
struct TYPE_4__ {TYPE_1__ cra_digest; } ;


 struct crypto_tfm* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct hash_desc *VAR_0)
{
 struct crypto_tfm *VAR_1 = FUNC_0(VAR_0->tfm);

 VAR_1->__crt_alg->cra_digest.dia_init(VAR_1);
 return 0;
}
