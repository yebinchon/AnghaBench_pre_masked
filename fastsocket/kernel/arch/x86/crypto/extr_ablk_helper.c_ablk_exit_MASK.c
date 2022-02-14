
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct async_helper_ctx {int cryptd_tfm; } ;


 int FUNC_0 (int ) ;
 struct async_helper_ctx* FUNC_1 (struct crypto_tfm*) ;

void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct async_helper_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cryptd_tfm);
}
