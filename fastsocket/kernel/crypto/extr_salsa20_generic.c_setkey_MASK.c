
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct salsa20_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 struct salsa20_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct salsa20_ctx*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2)
{
 struct salsa20_ctx *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_3, VAR_1, VAR_2);
 return 0;
}
