
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_givcrypt_request {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct async_chainiv_ctx {int err; int state; int lock; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct async_chainiv_ctx*) ;
 struct async_chainiv_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (int *,struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_3 (struct skcipher_givcrypt_request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct skcipher_givcrypt_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_3(VAR_1);
 struct async_chainiv_ctx *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_2(&VAR_3->queue, VAR_1);
 FUNC_5(&VAR_3->lock);

 if (FUNC_6(VAR_0, &VAR_3->state))
  return VAR_4;

 VAR_3->err = VAR_4;
 return FUNC_0(VAR_3);
}
