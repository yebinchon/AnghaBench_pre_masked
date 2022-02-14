
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_ablkcipher {int dummy; } ;
struct blkcipher_desc {int tfm; scalar_t__ flags; int info; } ;
struct async_helper_ctx {int cryptd_tfm; } ;
struct ablkcipher_request {int nbytes; int src; int dst; int info; } ;
struct TYPE_2__ {int (* encrypt ) (struct blkcipher_desc*,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 struct async_helper_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct blkcipher_desc*,int ,int ,int ) ;

int FUNC_5(struct ablkcipher_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_2(VAR_0);
 struct async_helper_ctx *VAR_2 = FUNC_1(VAR_1);
 struct blkcipher_desc VAR_3;

 VAR_3.tfm = FUNC_0(VAR_2->cryptd_tfm);
 VAR_3.info = VAR_0->info;
 VAR_3.flags = 0;

 return FUNC_3(VAR_3.tfm)->encrypt(
  &VAR_3, VAR_0->dst, VAR_0->src, VAR_0->nbytes);
}
