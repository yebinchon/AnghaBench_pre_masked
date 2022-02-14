
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info; } ;
struct skcipher_givcrypt_request {TYPE_1__ creq; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ablkcipher_request* FUNC_3 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_4 (struct skcipher_givcrypt_request*) ;

__attribute__((used)) static void FUNC_5(struct skcipher_givcrypt_request *VAR_1, int VAR_2)
{
 struct ablkcipher_request *VAR_3 = FUNC_3(VAR_1);
 struct crypto_ablkcipher *VAR_4;

 if (VAR_2 == -VAR_0)
  return;

 if (VAR_2)
  goto out;

 VAR_4 = FUNC_4(VAR_1);
 FUNC_2(VAR_1->creq.info, VAR_3->info, FUNC_0(VAR_4));

out:
 FUNC_1(VAR_3->info);
}
