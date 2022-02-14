
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct aead_tfm {int authsize; int ivsize; int base; void* givdecrypt; void* givencrypt; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct aead_tfm crt_aead; } ;
struct aead_alg {int maxauthsize; int ivsize; scalar_t__ givdecrypt; scalar_t__ givencrypt; int decrypt; int encrypt; int setkey; } ;
struct TYPE_2__ {int cra_flags; struct aead_alg cra_aead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct aead_alg *VAR_8 = &VAR_5->__crt_alg->cra_aead;
 struct aead_tfm *VAR_9 = &VAR_5->crt_aead;

 if (FUNC_1(VAR_8->maxauthsize, VAR_8->ivsize) > VAR_2 / 8)
  return -VAR_1;

 VAR_9->setkey = VAR_5->__crt_alg->cra_flags & VAR_0 ?
        VAR_8->setkey : VAR_4;
 VAR_9->encrypt = VAR_8->encrypt;
 VAR_9->decrypt = VAR_8->decrypt;
 VAR_9->givencrypt = VAR_8->givencrypt ?: VAR_3;
 VAR_9->givdecrypt = VAR_8->givdecrypt ?: VAR_3;
 VAR_9->base = FUNC_0(VAR_5);
 VAR_9->ivsize = VAR_8->ivsize;
 VAR_9->authsize = VAR_8->maxauthsize;

 return 0;
}
