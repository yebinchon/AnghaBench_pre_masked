
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_givcrypt_request {int dummy; } ;
struct eseqiv_ctx {int lock; int salt; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {scalar_t__ givencrypt; } ;


 TYPE_1__* FUNC_0 (struct crypto_ablkcipher*) ;
 struct eseqiv_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_5 (struct skcipher_givcrypt_request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct skcipher_givcrypt_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_5(VAR_1);
 struct eseqiv_ctx *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 FUNC_6(&VAR_3->lock);
 if (FUNC_0(VAR_2)->givencrypt != FUNC_8)
  goto unlock;

 FUNC_0(VAR_2)->givencrypt = FUNC_4;
 VAR_4 = FUNC_3(VAR_0, VAR_3->salt,
       FUNC_2(VAR_2));

unlock:
 FUNC_7(&VAR_3->lock);

 if (VAR_4)
  return VAR_4;

 return FUNC_4(VAR_1);
}
