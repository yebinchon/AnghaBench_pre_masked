
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct aesni_lrw_ctx {int lrw_table; int raw_aes_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_tfm*,int ,int const*,int) ;
 struct aesni_lrw_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1, const u8 *VAR_2,
       unsigned int VAR_3)
{
 struct aesni_lrw_ctx *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4->raw_aes_ctx, VAR_2,
     VAR_3 - VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(&VAR_4->lrw_table, VAR_2 + VAR_3 - VAR_0);
}
