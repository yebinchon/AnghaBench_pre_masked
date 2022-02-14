
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ablkcipher_tfm {scalar_t__ ivsize; int base; int givdecrypt; int givencrypt; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct ablkcipher_tfm crt_ablkcipher; } ;
struct blkcipher_alg {scalar_t__ ivsize; } ;
struct TYPE_2__ {struct blkcipher_alg cra_blkcipher; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_5)
{
 struct ablkcipher_tfm *VAR_6 = &VAR_5->crt_ablkcipher;
 struct blkcipher_alg *VAR_7 = &VAR_5->__crt_alg->cra_blkcipher;

 VAR_6->setkey = VAR_2;
 VAR_6->encrypt = VAR_1;
 VAR_6->decrypt = VAR_0;
 if (!VAR_7->ivsize) {
  VAR_6->givencrypt = VAR_4;
  VAR_6->givdecrypt = VAR_3;
 }
 VAR_6->base = FUNC_0(VAR_5);
 VAR_6->ivsize = VAR_7->ivsize;

 return 0;
}
