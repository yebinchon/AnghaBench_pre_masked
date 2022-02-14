
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct aesni_lrw_ctx {int lrw_table; } ;


 struct aesni_lrw_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct aesni_lrw_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lrw_table);
}
