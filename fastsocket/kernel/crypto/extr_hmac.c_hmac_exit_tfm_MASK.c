
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int hash; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ) ;
 struct hmac_ctx* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct hmac_ctx *VAR_1 = FUNC_2(FUNC_0(VAR_0));
 FUNC_1(VAR_1->hash);
}
