
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seqiv_ctx {int lock; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 struct crypto_ablkcipher* FUNC_0 (struct crypto_tfm*) ;
 struct seqiv_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_0(VAR_0);
 struct seqiv_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->lock);

 VAR_0->crt_ablkcipher.reqsize = sizeof(struct ablkcipher_request);

 return FUNC_2(VAR_0);
}
