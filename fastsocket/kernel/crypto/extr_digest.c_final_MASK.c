
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hash_desc {int tfm; } ;
struct digest_alg {int (* dia_final ) (struct crypto_tfm*,int *) ;int dia_digestsize; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {unsigned long cra_ctxsize; struct digest_alg cra_digest; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 struct crypto_tfm* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct crypto_tfm*,int *) ;
 int FUNC_6 (struct crypto_tfm*,int *) ;
 scalar_t__ FUNC_7 (unsigned long) ;

__attribute__((used)) static int FUNC_8(struct hash_desc *VAR_0, u8 *VAR_1)
{
 struct crypto_tfm *VAR_2 = FUNC_1(VAR_0->tfm);
 unsigned long VAR_3 = FUNC_2(VAR_2);
 struct digest_alg *VAR_4 = &VAR_2->__crt_alg->cra_digest;

 if (FUNC_7((unsigned long)VAR_1 & VAR_3)) {
  unsigned long VAR_5 = VAR_3 + 1;
  unsigned long VAR_6 = (unsigned long)FUNC_3(VAR_2);
  u8 *VAR_7 = (u8 *)FUNC_0(VAR_6, VAR_5) +
     FUNC_0(VAR_2->__crt_alg->cra_ctxsize, VAR_5);

  VAR_4->dia_final(VAR_2, VAR_7);
  FUNC_4(VAR_1, VAR_7, VAR_4->dia_digestsize);
 } else
  VAR_4->dia_final(VAR_2, VAR_1);

 return 0;
}
