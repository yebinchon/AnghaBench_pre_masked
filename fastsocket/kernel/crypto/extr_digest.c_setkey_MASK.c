
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_3__ {int (* dia_setkey ) (struct crypto_tfm*,int const*,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ cra_digest; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_hash*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_hash*) ;
 int FUNC_2 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_hash *VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);
 return VAR_4->__crt_alg->cra_digest.dia_setkey(VAR_4, VAR_2, VAR_3);
}
