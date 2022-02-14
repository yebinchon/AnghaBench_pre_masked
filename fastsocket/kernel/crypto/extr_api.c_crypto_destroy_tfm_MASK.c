
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int (* cra_exit ) (struct crypto_tfm*) ;} ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct crypto_tfm*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(void *VAR_0, struct crypto_tfm *VAR_1)
{
 struct crypto_alg *VAR_2;

 if (FUNC_4(!VAR_0))
  return;

 VAR_2 = VAR_1->__crt_alg;

 if (!VAR_1->exit && VAR_2->cra_exit)
  VAR_2->cra_exit(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 FUNC_2(VAR_0);
}
