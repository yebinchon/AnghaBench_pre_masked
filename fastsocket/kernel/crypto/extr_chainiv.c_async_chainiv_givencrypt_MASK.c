
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int complete; int flags; } ;
struct TYPE_5__ {int info; int nbytes; int dst; int src; TYPE_1__ base; } ;
struct skcipher_givcrypt_request {TYPE_2__ creq; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct async_chainiv_ctx {int state; TYPE_3__ queue; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 int FUNC_3 (struct skcipher_givcrypt_request*) ;
 int FUNC_4 (struct skcipher_givcrypt_request*) ;
 int FUNC_5 (int ,int *) ;
 struct async_chainiv_ctx* FUNC_6 (struct crypto_ablkcipher*) ;
 int FUNC_7 (struct crypto_ablkcipher*) ;
 struct ablkcipher_request* FUNC_8 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_9 (struct skcipher_givcrypt_request*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct skcipher_givcrypt_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_9(VAR_1);
 struct async_chainiv_ctx *VAR_3 = FUNC_6(VAR_2);
 struct ablkcipher_request *VAR_4 = FUNC_8(VAR_1);

 FUNC_2(VAR_4, FUNC_7(VAR_2));
 FUNC_0(VAR_4, VAR_1->creq.base.flags,
     VAR_1->creq.base.complete,
     VAR_1->creq.base.data);
 FUNC_1(VAR_4, VAR_1->creq.src, VAR_1->creq.dst,
         VAR_1->creq.nbytes, VAR_1->creq.info);

 if (FUNC_10(VAR_0, &VAR_3->state))
  goto postpone;

 if (VAR_3->queue.qlen) {
  FUNC_5(VAR_0, &VAR_3->state);
  goto postpone;
 }

 return FUNC_3(VAR_1);

postpone:
 return FUNC_4(VAR_1);
}
