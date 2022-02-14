
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eseqiv_request_ctx {int dummy; } ;
struct eseqiv_ctx {unsigned int reqoff; int lock; } ;
struct TYPE_2__ {unsigned int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 struct crypto_ablkcipher* FUNC_1 (struct crypto_tfm*) ;
 unsigned long FUNC_2 (struct crypto_ablkcipher*) ;
 struct eseqiv_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_4 (struct crypto_ablkcipher*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_1(VAR_0);
 struct eseqiv_ctx *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_7(&VAR_2->lock);

 VAR_3 = FUNC_5() - 1;
 VAR_4 = sizeof(struct eseqiv_request_ctx);

 if (VAR_3 & VAR_4) {
  VAR_3 &= VAR_4;
  VAR_3--;
 }

 VAR_3 = ~VAR_3;
 VAR_3 &= FUNC_2(VAR_1);

 VAR_4 += VAR_3;
 VAR_4 += FUNC_4(VAR_1);
 VAR_4 = FUNC_0(VAR_4, FUNC_5());

 VAR_2->reqoff = VAR_4 - sizeof(struct eseqiv_request_ctx);

 VAR_0->crt_ablkcipher.reqsize = VAR_4 +
          sizeof(struct ablkcipher_request);

 return FUNC_6(VAR_0);
}
