
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct priv {struct crypto_cipher* tweak; struct crypto_cipher* child; } ;
struct crypto_tfm {int crt_flags; scalar_t__ __crt_alg; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct crypto_cipher*) ;
 int FUNC_3 (struct crypto_cipher*) ;
 struct crypto_spawn* FUNC_4 (struct crypto_instance*) ;
 struct crypto_cipher* FUNC_5 (struct crypto_spawn*) ;
 struct priv* FUNC_6 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_3)
{
 struct crypto_cipher *VAR_4;
 struct crypto_instance *VAR_5 = (void *)VAR_3->__crt_alg;
 struct crypto_spawn *VAR_6 = FUNC_4(VAR_5);
 struct priv *VAR_7 = FUNC_6(VAR_3);
 u32 *VAR_8 = &VAR_3->crt_flags;

 VAR_4 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (FUNC_2(VAR_4) != VAR_2) {
  *VAR_8 |= VAR_0;
  FUNC_3(VAR_4);
  return -VAR_1;
 }

 VAR_7->child = VAR_4;

 VAR_4 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_7->child);
  return FUNC_1(VAR_4);
 }


 if (FUNC_2(VAR_4) != VAR_2) {
  FUNC_3(VAR_4);
  FUNC_3(VAR_7->child);
  *VAR_8 |= VAR_0;
  return -VAR_1;
 }

 VAR_7->tweak = VAR_4;

 return 0;
}
