
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_ablkcipher {int dummy; } ;
struct blkcipher_desc {int tfm; scalar_t__ flags; int info; } ;
struct async_helper_ctx {TYPE_2__* cryptd_tfm; } ;
struct ablkcipher_request {int nbytes; int src; int dst; int info; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int (* decrypt ) (struct blkcipher_desc*,int ,int ,int ) ;} ;


 struct ablkcipher_request* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct ablkcipher_request*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 struct async_helper_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (struct ablkcipher_request*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct ablkcipher_request*,struct ablkcipher_request*,int) ;
 int FUNC_9 (struct blkcipher_desc*,int ,int ,int ) ;

int FUNC_10(struct ablkcipher_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_5(VAR_0);
 struct async_helper_ctx *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_7()) {
  struct ablkcipher_request *VAR_3 =
   FUNC_0(VAR_0);

  FUNC_8(VAR_3, VAR_0, sizeof(*VAR_0));
  FUNC_1(VAR_3, &VAR_2->cryptd_tfm->base);

  return FUNC_4(VAR_3);
 } else {
  struct blkcipher_desc VAR_4;

  VAR_4.tfm = FUNC_2(VAR_2->cryptd_tfm);
  VAR_4.info = VAR_0->info;
  VAR_4.flags = 0;

  return FUNC_6(VAR_4.tfm)->decrypt(
   &VAR_4, VAR_0->dst, VAR_0->src, VAR_0->nbytes);
 }
}
