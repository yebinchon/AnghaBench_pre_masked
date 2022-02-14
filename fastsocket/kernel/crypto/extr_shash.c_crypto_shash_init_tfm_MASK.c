
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct crypto_shash {int descsize; } ;
struct TYPE_2__ {int descsize; } ;


 struct crypto_shash* FUNC_0 (struct crypto_tfm*) ;
 TYPE_1__* FUNC_1 (struct crypto_shash*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0)
{
 struct crypto_shash *VAR_1 = FUNC_0(VAR_0);

 VAR_1->descsize = FUNC_1(VAR_1)->descsize;
 return 0;
}
