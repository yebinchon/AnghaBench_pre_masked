
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_tfm {int dummy; } ;
typedef struct crypto_tfm crypto_alg ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_aead* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 struct crypto_aead* FUNC_3 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_4 (struct crypto_tfm*,int,int) ;
 struct crypto_tfm* FUNC_5 (char const*,int,int) ;
 int FUNC_6 (struct crypto_tfm*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;

struct crypto_aead *FUNC_8(const char *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct crypto_tfm *VAR_9;
 int VAR_10;

 VAR_7 &= ~(VAR_2 | VAR_0);
 VAR_7 |= VAR_1;
 VAR_8 &= ~(VAR_2 | VAR_0);
 VAR_8 |= VAR_2;

 for (;;) {
  struct crypto_alg *VAR_11;

  VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_8);
  if (FUNC_1(VAR_11)) {
   VAR_10 = FUNC_2(VAR_11);
   goto err;
  }

  VAR_9 = FUNC_4(VAR_11, VAR_7, VAR_8);
  if (!FUNC_1(VAR_9))
   return FUNC_3(VAR_9);

  FUNC_6(VAR_11);
  VAR_10 = FUNC_2(VAR_9);

err:
  if (VAR_10 != -VAR_3)
   break;
  if (FUNC_7(VAR_5)) {
   VAR_10 = -VAR_4;
   break;
  }
 }

 return FUNC_0(VAR_10);
}
