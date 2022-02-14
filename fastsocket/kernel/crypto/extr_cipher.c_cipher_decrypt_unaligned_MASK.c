
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct cipher_alg {int (* cia_decrypt ) (struct crypto_tfm*,int *,int const*) ;} ;
struct TYPE_2__ {struct cipher_alg cra_cipher; } ;


 int FUNC_0 (int (*) (struct crypto_tfm*,int *,int const*),struct crypto_tfm*,int *,int const*) ;
 unsigned long FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*,int *,int const*) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0,
         u8 *VAR_1, const u8 *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 struct cipher_alg *VAR_4 = &VAR_0->__crt_alg->cra_cipher;

 if (FUNC_3(((unsigned long)VAR_1 | (unsigned long)VAR_2) & VAR_3)) {
  FUNC_0(VAR_4->cia_decrypt, VAR_0, VAR_1, VAR_2);
  return;
 }

 VAR_4->cia_decrypt(VAR_0, VAR_1, VAR_2);
}
