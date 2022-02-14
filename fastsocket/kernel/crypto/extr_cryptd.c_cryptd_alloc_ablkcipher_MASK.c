
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct cryptd_ablkcipher {int dummy; } ;
struct TYPE_2__ {scalar_t__ cra_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cryptd_ablkcipher* FUNC_0 (struct crypto_tfm*) ;
 struct cryptd_ablkcipher* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ VAR_6 ;
 struct cryptd_ablkcipher* FUNC_3 (int ) ;
 int FUNC_4 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (char*,int,char*,char const*) ;

struct cryptd_ablkcipher *FUNC_8(const char *VAR_7,
        u32 VAR_8, u32 VAR_9)
{
 char VAR_10[VAR_4];
 struct crypto_tfm *VAR_11;

 if (FUNC_7(VAR_10, VAR_4,
       "cryptd(%s)", VAR_7) >= VAR_4)
  return FUNC_1(-VAR_5);
 VAR_8 &= ~(VAR_3 | VAR_0);
 VAR_8 |= VAR_1;
 VAR_9 &= ~VAR_3;
 VAR_9 |= (VAR_0 | VAR_2);
 VAR_11 = FUNC_5(VAR_10, VAR_8, VAR_9);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);
 if (VAR_11->__crt_alg->cra_module != VAR_6) {
  FUNC_6(VAR_11);
  return FUNC_1(-VAR_5);
 }

 return FUNC_3(FUNC_4(VAR_11));
}
