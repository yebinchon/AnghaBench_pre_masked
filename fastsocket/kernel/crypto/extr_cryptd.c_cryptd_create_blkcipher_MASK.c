
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct TYPE_5__ {int decrypt; int encrypt; int setkey; int geniv; int max_keysize; int min_keysize; int ivsize; } ;
struct TYPE_6__ {int cra_flags; int cra_ctxsize; TYPE_2__ cra_ablkcipher; int cra_exit; int cra_init; int * cra_type; } ;
struct TYPE_4__ {int geniv; int max_keysize; int min_keysize; int ivsize; } ;
struct crypto_instance {TYPE_3__ alg; TYPE_1__ cra_blkcipher; } ;
struct crypto_alg {TYPE_3__ alg; TYPE_1__ cra_blkcipher; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_instance_ctx {int spawn; struct cryptd_queue* queue; } ;
struct cryptd_blkcipher_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_2 (struct crypto_instance*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 struct crypto_instance* FUNC_4 (struct rtattr**,int ,int) ;
 int FUNC_5 (int *,struct crypto_instance*,struct crypto_instance*,int) ;
 struct cryptd_instance_ctx* FUNC_6 (struct crypto_instance*) ;
 int FUNC_7 (struct crypto_instance*) ;
 int FUNC_8 (struct crypto_template*,struct crypto_instance*) ;
 int FUNC_9 (struct crypto_instance*) ;

__attribute__((used)) static int FUNC_10(struct crypto_template *VAR_10,
       struct rtattr **VAR_11,
       struct cryptd_queue *VAR_12)
{
 struct cryptd_instance_ctx *VAR_13;
 struct crypto_instance *VAR_14;
 struct crypto_alg *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_4(VAR_11, VAR_2,
      VAR_3);
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_14 = FUNC_2(VAR_15, 0, sizeof(*VAR_13));
 VAR_16 = FUNC_1(VAR_14);
 if (FUNC_0(VAR_14))
  goto out_put_alg;

 VAR_13 = FUNC_6(VAR_14);
 VAR_13->queue = VAR_12;

 VAR_16 = FUNC_5(&VAR_13->spawn, VAR_15, VAR_14,
    VAR_3 | VAR_0);
 if (VAR_16)
  goto out_free_inst;

 VAR_14->alg.cra_flags = VAR_1 | VAR_0;
 VAR_14->alg.cra_type = &VAR_9;

 VAR_14->alg.cra_ablkcipher.ivsize = VAR_15->cra_blkcipher.ivsize;
 VAR_14->alg.cra_ablkcipher.min_keysize = VAR_15->cra_blkcipher.min_keysize;
 VAR_14->alg.cra_ablkcipher.max_keysize = VAR_15->cra_blkcipher.max_keysize;

 VAR_14->alg.cra_ablkcipher.geniv = VAR_15->cra_blkcipher.geniv;

 VAR_14->alg.cra_ctxsize = sizeof(struct cryptd_blkcipher_ctx);

 VAR_14->alg.cra_init = VAR_7;
 VAR_14->alg.cra_exit = VAR_6;

 VAR_14->alg.cra_ablkcipher.setkey = VAR_8;
 VAR_14->alg.cra_ablkcipher.encrypt = VAR_5;
 VAR_14->alg.cra_ablkcipher.decrypt = VAR_4;

 VAR_16 = FUNC_8(VAR_10, VAR_14);
 if (VAR_16) {
  FUNC_3(&VAR_13->spawn);
out_free_inst:
  FUNC_9(VAR_14);
 }

out_put_alg:
 FUNC_7(VAR_15);
 return VAR_16;
}
