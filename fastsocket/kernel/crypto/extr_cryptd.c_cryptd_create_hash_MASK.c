
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cra_ctxsize; int cra_exit; int cra_init; int cra_flags; } ;
struct TYPE_5__ {TYPE_1__ base; int digestsize; } ;
struct TYPE_6__ {int digest; int setkey; int import; int export; int finup; int final; int update; int init; TYPE_2__ halg; } ;
struct crypto_alg {int dummy; } ;
struct shash_alg {TYPE_3__ alg; int digestsize; struct crypto_alg base; } ;
struct rtattr {int dummy; } ;
struct hashd_instance_ctx {int spawn; struct cryptd_queue* queue; } ;
struct crypto_template {int dummy; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_hash_ctx {int dummy; } ;
struct ahash_instance {TYPE_3__ alg; int digestsize; struct crypto_alg base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct shash_alg*) ;
 int FUNC_1 (struct shash_alg*) ;
 int FUNC_2 (struct shash_alg*) ;
 struct hashd_instance_ctx* FUNC_3 (struct shash_alg*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct crypto_template*,struct shash_alg*) ;
 struct shash_alg* FUNC_6 (struct crypto_alg*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct shash_alg*,int ) ;
 int FUNC_9 (struct crypto_alg*) ;
 int FUNC_10 (struct shash_alg*) ;
 struct shash_alg* FUNC_11 (struct rtattr*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct crypto_template *VAR_11, struct rtattr **VAR_12,
         struct cryptd_queue *VAR_13)
{
 struct hashd_instance_ctx *VAR_14;
 struct ahash_instance *VAR_15;
 struct shash_alg *VAR_16;
 struct crypto_alg *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_11(VAR_12[1], 0, 0);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 VAR_17 = &VAR_16->base;
 VAR_15 = FUNC_6(VAR_17, FUNC_4(),
         sizeof(*VAR_14));
 VAR_18 = FUNC_1(VAR_15);
 if (FUNC_0(VAR_15))
  goto out_put_alg;

 VAR_14 = FUNC_3(VAR_15);
 VAR_14->queue = VAR_13;

 VAR_18 = FUNC_8(&VAR_14->spawn, VAR_16,
          FUNC_2(VAR_15));
 if (VAR_18)
  goto out_free_inst;

 VAR_15->alg.halg.base.cra_flags = VAR_0;

 VAR_15->alg.halg.digestsize = VAR_16->digestsize;
 VAR_15->alg.halg.base.cra_ctxsize = sizeof(struct cryptd_hash_ctx);

 VAR_15->alg.halg.base.cra_init = VAR_8;
 VAR_15->alg.halg.base.cra_exit = VAR_2;

 VAR_15->alg.init = VAR_7;
 VAR_15->alg.update = VAR_10;
 VAR_15->alg.final = VAR_4;
 VAR_15->alg.finup = VAR_5;
 VAR_15->alg.export = VAR_3;
 VAR_15->alg.import = VAR_6;
 VAR_15->alg.setkey = VAR_9;
 VAR_15->alg.digest = VAR_1;

 VAR_18 = FUNC_5(VAR_11, VAR_15);
 if (VAR_18) {
  FUNC_7(&VAR_14->spawn);
out_free_inst:
  FUNC_10(VAR_15);
 }

out_put_alg:
 FUNC_9(VAR_17);
 return VAR_18;
}
