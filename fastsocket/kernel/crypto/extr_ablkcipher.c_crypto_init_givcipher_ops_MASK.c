
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ablkcipher_tfm {int ivsize; int base; int givdecrypt; int givencrypt; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct ablkcipher_tfm crt_ablkcipher; } ;
struct ablkcipher_alg {int ivsize; scalar_t__ givdecrypt; int givencrypt; int decrypt; int encrypt; int setkey; } ;
struct TYPE_2__ {int cra_flags; struct ablkcipher_alg cra_ablkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_5, u32 VAR_6,
          u32 VAR_7)
{
 struct ablkcipher_alg *VAR_8 = &VAR_5->__crt_alg->cra_ablkcipher;
 struct ablkcipher_tfm *VAR_9 = &VAR_5->crt_ablkcipher;

 if (VAR_8->ivsize > VAR_2 / 8)
  return -VAR_1;

 VAR_9->setkey = VAR_5->__crt_alg->cra_flags & VAR_0 ?
        VAR_8->setkey : VAR_4;
 VAR_9->encrypt = VAR_8->encrypt;
 VAR_9->decrypt = VAR_8->decrypt;
 VAR_9->givencrypt = VAR_8->givencrypt;
 VAR_9->givdecrypt = VAR_8->givdecrypt ?: VAR_3;
 VAR_9->base = FUNC_0(VAR_5);
 VAR_9->ivsize = VAR_8->ivsize;

 return 0;
}
