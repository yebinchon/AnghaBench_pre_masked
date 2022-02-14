
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct xcbc_tfm_ctx {struct crypto_cipher* child; } ;
struct xcbc_desc_ctx {unsigned int len; int * ctx; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int const* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct crypto_cipher*,int const*,int const*) ;
 unsigned long FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (struct crypto_shash*) ;
 struct xcbc_tfm_ctx* FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (int const*,int const*,int) ;
 int FUNC_6 (int const*,int const*,unsigned int) ;
 struct xcbc_desc_ctx* FUNC_7 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct crypto_shash *VAR_3 = VAR_0->tfm;
 unsigned long VAR_4 = FUNC_2(VAR_3);
 struct xcbc_tfm_ctx *VAR_5 = FUNC_4(VAR_3);
 struct xcbc_desc_ctx *VAR_6 = FUNC_7(VAR_0);
 struct crypto_cipher *VAR_7 = VAR_5->child;
 int VAR_8 = FUNC_3(VAR_3);
 u8 *VAR_9 = FUNC_0(&VAR_6->ctx[0], VAR_4 + 1);
 u8 *VAR_10 = VAR_9 + VAR_8;


 if ((VAR_6->len + VAR_2) <= VAR_8) {
  FUNC_6(VAR_9 + VAR_6->len, VAR_1, VAR_2);
  VAR_6->len += VAR_2;
  return 0;
 }


 FUNC_6(VAR_9 + VAR_6->len, VAR_1, VAR_8 - VAR_6->len);
 VAR_2 -= VAR_8 - VAR_6->len;
 VAR_1 += VAR_8 - VAR_6->len;

 FUNC_5(VAR_10, VAR_9, VAR_8);
 FUNC_1(VAR_7, VAR_10, VAR_10);


 VAR_6->len = 0;


 while (VAR_2 > VAR_8) {
  FUNC_5(VAR_10, VAR_1, VAR_8);
  FUNC_1(VAR_7, VAR_10, VAR_10);
  VAR_1 += VAR_8;
  VAR_2 -= VAR_8;
 }


 if (VAR_2) {
  FUNC_6(VAR_9, VAR_1, VAR_2);
  VAR_6->len = VAR_2;
 }

 return 0;
}
