
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* __crt_alg; } ;
struct crypto_aead {TYPE_2__ base; } ;
struct cryptd_aead {int dummy; } ;
struct TYPE_3__ {scalar_t__ cra_module; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cryptd_aead* FUNC_0 (struct crypto_aead*) ;
 struct cryptd_aead* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 scalar_t__ VAR_2 ;
 struct cryptd_aead* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (char*,int,char*,char const*) ;

struct cryptd_aead *FUNC_7(const char *VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 char VAR_6[VAR_0];
 struct crypto_aead *VAR_7;

 if (FUNC_6(VAR_6, VAR_0,
       "cryptd(%s)", VAR_3) >= VAR_0)
  return FUNC_1(-VAR_1);
 VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_5);
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);
 if (VAR_7->base.__crt_alg->cra_module != VAR_2) {
  FUNC_5(VAR_7);
  return FUNC_1(-VAR_1);
 }
 return FUNC_3(VAR_7);
}
