
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_gcm_ctx {int ctr; int ghash; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct crypto_gcm_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_gcm_ctx *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->ghash);
 FUNC_0(VAR_1->ctr);
}
