
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_tfm {int digestsize; int setkey; int digest; int final; int update; int init; } ;
struct digest_alg {int dia_digestsize; scalar_t__ dia_setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct hash_tfm crt_hash; } ;
struct TYPE_2__ {struct digest_alg cra_digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(struct crypto_tfm *VAR_8)
{
 struct hash_tfm *VAR_9 = &VAR_8->crt_hash;
 struct digest_alg *VAR_10 = &VAR_8->__crt_alg->cra_digest;

 if (VAR_10->dia_digestsize > VAR_1 / 8)
  return -VAR_0;

 VAR_9->init = VAR_4;
 VAR_9->update = VAR_7;
 VAR_9->final = VAR_3;
 VAR_9->digest = VAR_2;
 VAR_9->setkey = VAR_10->dia_setkey ? VAR_6 : VAR_5;
 VAR_9->digestsize = VAR_10->dia_digestsize;

 return 0;
}
