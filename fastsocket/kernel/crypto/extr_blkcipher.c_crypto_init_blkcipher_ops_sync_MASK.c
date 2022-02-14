
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkcipher_tfm {void* iv; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct blkcipher_tfm crt_blkcipher; } ;
struct blkcipher_alg {int decrypt; int encrypt; } ;
struct TYPE_2__ {unsigned long cra_ctxsize; struct blkcipher_alg cra_blkcipher; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct crypto_tfm*) ;
 scalar_t__ FUNC_2 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct blkcipher_tfm *VAR_2 = &VAR_1->crt_blkcipher;
 struct blkcipher_alg *VAR_3 = &VAR_1->__crt_alg->cra_blkcipher;
 unsigned long VAR_4 = FUNC_1(VAR_1) + 1;
 unsigned long VAR_5;

 VAR_2->setkey = VAR_0;
 VAR_2->encrypt = VAR_3->encrypt;
 VAR_2->decrypt = VAR_3->decrypt;

 VAR_5 = (unsigned long)FUNC_2(VAR_1);
 VAR_5 = FUNC_0(VAR_5, VAR_4);
 VAR_5 += FUNC_0(VAR_1->__crt_alg->cra_ctxsize, VAR_4);
 VAR_2->iv = (void *)VAR_5;

 return 0;
}
