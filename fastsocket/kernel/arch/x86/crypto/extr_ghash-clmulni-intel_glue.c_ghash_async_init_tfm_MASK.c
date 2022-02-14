
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghash_async_ctx {struct cryptd_ahash* cryptd_tfm; } ;
struct crypto_tfm {int dummy; } ;
struct cryptd_ahash {int base; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ FUNC_0 (struct cryptd_ahash*) ;
 int FUNC_1 (struct cryptd_ahash*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 struct cryptd_ahash* FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct ghash_async_ctx* FUNC_6 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_0)
{
 struct cryptd_ahash *VAR_1;
 struct ghash_async_ctx *VAR_2 = FUNC_6(VAR_0);

 VAR_1 = FUNC_3("__ghash-pclmulqdqni", 0, 0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 VAR_2->cryptd_tfm = VAR_1;
 FUNC_5(FUNC_2(VAR_0),
     sizeof(struct ahash_request) +
     FUNC_4(&VAR_1->base));

 return 0;
}
