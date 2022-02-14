
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hash_desc {int flags; int tfm; } ;
struct hash_alg {int (* init ) (struct hash_desc*) ;} ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_4__ {int flags; struct crypto_tfm* tfm; } ;
struct ahash_request {TYPE_2__ base; } ;
struct TYPE_3__ {struct hash_alg cra_hash; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct hash_desc*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct crypto_tfm *VAR_1 = VAR_0->base.tfm;
 struct hash_alg *VAR_2 = &VAR_1->__crt_alg->cra_hash;
 struct hash_desc VAR_3 = {
  .tfm = FUNC_0(VAR_1),
  .flags = VAR_0->base.flags,
 };

 return VAR_2->init(&VAR_3);
}
