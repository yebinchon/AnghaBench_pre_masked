
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_type {int dummy; } ;
struct crypto_tfm {int (* exit ) (struct crypto_tfm*) ;TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {struct crypto_type* cra_type; } ;


 int FUNC_0 () ;


 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_0)
{
 const struct crypto_type *VAR_1 = VAR_0->__crt_alg->cra_type;

 if (VAR_1) {
  if (VAR_0->exit)
   VAR_0->exit(VAR_0);
  return;
 }

 switch (FUNC_3(VAR_0)) {
 case 129:
  FUNC_1(VAR_0);
  break;

 case 128:
  FUNC_2(VAR_0);
  break;

 default:
  FUNC_0();

 }
}
