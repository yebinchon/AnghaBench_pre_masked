
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_givcrypt_request {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct async_chainiv_ctx {int state; int iv; } ;
struct TYPE_2__ {scalar_t__ givencrypt; } ;


 int VAR_0 ;
 int FUNC_0 (struct skcipher_givcrypt_request*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (struct crypto_ablkcipher*) ;
 struct async_chainiv_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ) ;
 struct crypto_ablkcipher* FUNC_6 (struct skcipher_givcrypt_request*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct skcipher_givcrypt_request *VAR_2)
{
 struct crypto_ablkcipher *VAR_3 = FUNC_6(VAR_2);
 struct async_chainiv_ctx *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = 0;

 if (FUNC_7(VAR_0, &VAR_4->state))
  goto out;

 if (FUNC_2(VAR_3)->givencrypt !=
     FUNC_8)
  goto unlock;

 FUNC_2(VAR_3)->givencrypt = FUNC_0;
 VAR_5 = FUNC_5(VAR_1, VAR_4->iv,
       FUNC_4(VAR_3));

unlock:
 FUNC_1(VAR_0, &VAR_4->state);

 if (VAR_5)
  return VAR_5;

out:
 return FUNC_0(VAR_2);
}
