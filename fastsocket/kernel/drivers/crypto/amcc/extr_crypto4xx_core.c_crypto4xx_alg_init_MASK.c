
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int cra_flags; } ;
struct crypto4xx_ctx {scalar_t__ sa_len; scalar_t__ sa_out_dma_addr; scalar_t__ sa_in_dma_addr; int * sa_out; int * sa_in; int dev; } ;
struct crypto4xx_alg {int dev; } ;



 int VAR_0 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int) ;
 struct crypto4xx_alg* FUNC_2 (struct crypto_alg*) ;
 struct crypto4xx_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_1)
{
 struct crypto_alg *VAR_2 = VAR_1->__crt_alg;
 struct crypto4xx_alg *VAR_3 = FUNC_2(VAR_2);
 struct crypto4xx_ctx *VAR_4 = FUNC_3(VAR_1);

 VAR_4->dev = VAR_3->dev;
 VAR_4->sa_in = ((void*)0);
 VAR_4->sa_out = ((void*)0);
 VAR_4->sa_in_dma_addr = 0;
 VAR_4->sa_out_dma_addr = 0;
 VAR_4->sa_len = 0;

 switch (VAR_2->cra_flags & VAR_0) {
 default:
  VAR_1->crt_ablkcipher.reqsize = sizeof(struct crypto4xx_ctx);
  break;
 case 128:
  FUNC_1(FUNC_0(VAR_1),
      sizeof(struct crypto4xx_ctx));
  break;
 }

 return 0;
}
