
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hash_alg {int (* setkey ) (struct crypto_hash*,int const*,unsigned int) ;} ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_hash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_2__ {struct hash_alg cra_hash; } ;


 struct crypto_hash* FUNC_0 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_hash*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_ahash *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 struct crypto_tfm *VAR_3 = FUNC_1(VAR_0);
 struct crypto_hash *VAR_4 = FUNC_0(VAR_3);
 struct hash_alg *VAR_5 = &VAR_3->__crt_alg->cra_hash;

 return VAR_5->setkey(VAR_4, VAR_1, VAR_2);
}
