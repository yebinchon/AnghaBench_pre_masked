
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_tfm {int dummy; } ;
typedef struct crypto_tfm crypto_alg ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_ablkcipher* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 struct crypto_ablkcipher* FUNC_3 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_4 (struct crypto_tfm*,int ,int ) ;
 struct crypto_tfm* FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ) ;

struct crypto_ablkcipher *FUNC_10(const char *VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 struct crypto_tfm *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_8(VAR_4);
 VAR_5 = FUNC_7(VAR_5);

 for (;;) {
  struct crypto_alg *VAR_8;

  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5);
  if (FUNC_1(VAR_8)) {
   VAR_7 = FUNC_2(VAR_8);
   goto err;
  }

  VAR_6 = FUNC_4(VAR_8, VAR_4, VAR_5);
  if (!FUNC_1(VAR_6))
   return FUNC_3(VAR_6);

  FUNC_6(VAR_8);
  VAR_7 = FUNC_2(VAR_6);

err:
  if (VAR_7 != -VAR_0)
   break;
  if (FUNC_9(VAR_2)) {
   VAR_7 = -VAR_1;
   break;
  }
 }

 return FUNC_0(VAR_7);
}
