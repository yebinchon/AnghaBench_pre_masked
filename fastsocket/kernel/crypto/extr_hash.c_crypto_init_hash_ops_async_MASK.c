
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_alg {int digestsize; } ;
struct ahash_tfm {int digestsize; int setkey; int digest; int final; int update; int init; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct ahash_tfm crt_ahash; } ;
struct TYPE_2__ {struct hash_alg cra_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct crypto_tfm *VAR_5)
{
 struct ahash_tfm *VAR_6 = &VAR_5->crt_ahash;
 struct hash_alg *VAR_7 = &VAR_5->__crt_alg->cra_hash;

 VAR_6->init = VAR_2;
 VAR_6->update = VAR_4;
 VAR_6->final = VAR_1;
 VAR_6->digest = VAR_0;
 VAR_6->setkey = VAR_3;
 VAR_6->digestsize = VAR_7->digestsize;

 return 0;
}
