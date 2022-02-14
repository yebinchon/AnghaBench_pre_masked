
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rng_tfm {int rng_reset; int rng_gen_random; } ;
struct rng_alg {int rng_make_random; } ;
struct crypto_tfm {struct rng_tfm crt_rng; TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {struct rng_alg cra_rng; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct crypto_tfm *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct rng_alg *VAR_4 = &VAR_1->__crt_alg->cra_rng;
 struct rng_tfm *VAR_5 = &VAR_1->crt_rng;

 VAR_5->rng_gen_random = VAR_4->rng_make_random;
 VAR_5->rng_reset = VAR_0;

 return 0;
}
