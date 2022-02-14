
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int data; int complete; } ;
struct TYPE_4__ {int info; int nbytes; int dst; int src; TYPE_1__ base; } ;
struct skcipher_givcrypt_request {int giv; TYPE_2__ creq; } ;
struct crypto_ablkcipher {int dummy; } ;
struct chainiv_ctx {int lock; int iv; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 struct chainiv_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 unsigned int FUNC_5 (struct crypto_ablkcipher*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (struct crypto_ablkcipher*) ;
 struct ablkcipher_request* FUNC_8 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_9 (struct skcipher_givcrypt_request*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct skcipher_givcrypt_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_9(VAR_1);
 struct chainiv_ctx *VAR_3 = FUNC_3(VAR_2);
 struct ablkcipher_request *VAR_4 = FUNC_8(VAR_1);
 unsigned int VAR_5;
 int VAR_6;

 FUNC_2(VAR_4, FUNC_7(VAR_2));
 FUNC_0(VAR_4, VAR_1->creq.base.flags &
      ~VAR_0,
     VAR_1->creq.base.complete,
     VAR_1->creq.base.data);
 FUNC_1(VAR_4, VAR_1->creq.src, VAR_1->creq.dst,
         VAR_1->creq.nbytes, VAR_1->creq.info);

 FUNC_10(&VAR_3->lock);

 VAR_5 = FUNC_5(VAR_2);

 FUNC_6(VAR_1->giv, VAR_3->iv, VAR_5);
 FUNC_6(VAR_4->info, VAR_3->iv, VAR_5);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto unlock;

 FUNC_6(VAR_3->iv, VAR_4->info, VAR_5);

unlock:
 FUNC_11(&VAR_3->lock);

 return VAR_6;
}
