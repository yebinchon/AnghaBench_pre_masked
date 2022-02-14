
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghash_ctx {scalar_t__ gf128; } ;
struct crypto_tfm {int dummy; } ;


 struct ghash_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct ghash_ctx *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->gf128)
  FUNC_1(VAR_1->gf128);
}
