
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hash_alg {int (* setkey ) (struct crypto_hash*,int const*,unsigned int) ;} ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_2__ {struct hash_alg cra_hash; } ;


 unsigned long FUNC_0 (struct crypto_hash*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_hash*) ;
 int FUNC_2 (struct crypto_hash*,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_hash*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_hash *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct crypto_tfm *VAR_3 = FUNC_1(VAR_0);
 struct hash_alg *VAR_4 = &VAR_3->__crt_alg->cra_hash;
 unsigned long VAR_5 = FUNC_0(VAR_0);

 if ((unsigned long)VAR_1 & VAR_5)
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_4->setkey(VAR_0, VAR_1, VAR_2);
}
