
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xcbc_tfm_ctx {int * ctx; struct crypto_cipher* child; } ;
struct xcbc_desc_ctx {int len; int * ctx; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct crypto_cipher*,int*,int*) ;
 unsigned long FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (struct crypto_shash*) ;
 struct xcbc_tfm_ctx* FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int ,unsigned int) ;
 struct xcbc_desc_ctx* FUNC_7 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct crypto_shash *VAR_2 = VAR_0->tfm;
 unsigned long VAR_3 = FUNC_2(VAR_2);
 struct xcbc_tfm_ctx *VAR_4 = FUNC_4(VAR_2);
 struct xcbc_desc_ctx *VAR_5 = FUNC_7(VAR_0);
 struct crypto_cipher *VAR_6 = VAR_4->child;
 int VAR_7 = FUNC_3(VAR_2);
 u8 *VAR_8 = FUNC_0(&VAR_4->ctx[0], VAR_3 + 1);
 u8 *VAR_9 = FUNC_0(&VAR_5->ctx[0], VAR_3 + 1);
 u8 *VAR_10 = VAR_9 + VAR_7;
 unsigned int VAR_11 = 0;

 if (VAR_5->len != VAR_7) {
  unsigned int VAR_12;
  u8 *VAR_13 = VAR_9 + VAR_5->len;

  *VAR_13 = 0x80;
  VAR_13++;

  VAR_12 = VAR_7 - VAR_5->len -1;
  if (VAR_12)
   FUNC_6(VAR_13, 0, VAR_12);

  VAR_11 += VAR_7;
 }

 FUNC_5(VAR_10, VAR_9, VAR_7);
 FUNC_5(VAR_10, VAR_8 + VAR_11, VAR_7);

 FUNC_1(VAR_6, VAR_1, VAR_10);

 return 0;
}
