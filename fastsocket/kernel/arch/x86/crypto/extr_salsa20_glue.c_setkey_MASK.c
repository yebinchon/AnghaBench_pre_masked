
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct salsa20_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 struct salsa20_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct salsa20_ctx*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_1, const u8 *VAR_2,
    unsigned int VAR_3)
{
 struct salsa20_ctx *VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_4, VAR_2, VAR_3*8, VAR_0*8);
 return 0;
}
