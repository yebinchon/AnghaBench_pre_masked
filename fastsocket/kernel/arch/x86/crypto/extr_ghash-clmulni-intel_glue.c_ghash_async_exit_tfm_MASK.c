
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghash_async_ctx {int cryptd_tfm; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ghash_async_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct ghash_async_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cryptd_tfm);
}
