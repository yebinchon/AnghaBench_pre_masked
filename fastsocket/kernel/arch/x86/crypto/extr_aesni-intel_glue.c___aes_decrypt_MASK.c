
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;


 struct crypto_aes_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aes_ctx*,int *,int const*) ;
 int FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct crypto_aes_ctx *VAR_3 = FUNC_0(FUNC_2(VAR_0));

 FUNC_1(VAR_3, VAR_1, VAR_2);
}
