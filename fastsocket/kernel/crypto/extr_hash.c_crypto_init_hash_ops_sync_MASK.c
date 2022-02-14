
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_tfm {int digestsize; int setkey; int digest; int final; int update; int init; } ;
struct hash_alg {int digestsize; int digest; int final; int update; int init; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct hash_tfm crt_hash; } ;
struct TYPE_2__ {struct hash_alg cra_hash; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct crypto_tfm *VAR_1)
{
 struct hash_tfm *VAR_2 = &VAR_1->crt_hash;
 struct hash_alg *VAR_3 = &VAR_1->__crt_alg->cra_hash;

 VAR_2->init = VAR_3->init;
 VAR_2->update = VAR_3->update;
 VAR_2->final = VAR_3->final;
 VAR_2->digest = VAR_3->digest;
 VAR_2->setkey = VAR_0;
 VAR_2->digestsize = VAR_3->digestsize;

 return 0;
}
