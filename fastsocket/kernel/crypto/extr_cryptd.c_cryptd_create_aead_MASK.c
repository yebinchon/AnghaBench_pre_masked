
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct TYPE_7__ {int givdecrypt; int givencrypt; int maxauthsize; int ivsize; int geniv; int setauthsize; int setkey; } ;
struct TYPE_5__ {int givdecrypt; int givencrypt; int decrypt; int encrypt; int maxauthsize; int ivsize; int geniv; int setauthsize; int setkey; } ;
struct TYPE_6__ {int cra_flags; int cra_ctxsize; TYPE_1__ cra_aead; int cra_exit; int cra_init; int cra_type; } ;
struct crypto_instance {TYPE_3__ cra_aead; TYPE_2__ alg; int cra_type; } ;
struct crypto_alg {TYPE_3__ cra_aead; TYPE_2__ alg; int cra_type; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_aead_ctx {int dummy; } ;
struct TYPE_8__ {int base; } ;
struct aead_instance_ctx {TYPE_4__ aead_spawn; struct cryptd_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (struct crypto_instance*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct crypto_instance* FUNC_2 (struct crypto_instance*,int ,int) ;
 int FUNC_3 (int *) ;
 struct crypto_instance* FUNC_4 (struct rtattr**,int,int) ;
 int FUNC_5 (int *,struct crypto_instance*,struct crypto_instance*,int) ;
 struct aead_instance_ctx* FUNC_6 (struct crypto_instance*) ;
 int FUNC_7 (struct crypto_instance*) ;
 int FUNC_8 (struct crypto_template*,struct crypto_instance*) ;
 int FUNC_9 (struct crypto_instance*) ;

__attribute__((used)) static int FUNC_10(struct crypto_template *VAR_7,
                struct rtattr **VAR_8,
         struct cryptd_queue *VAR_9)
{
 struct aead_instance_ctx *VAR_10;
 struct crypto_instance *VAR_11;
 struct crypto_alg *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_8, VAR_1,
    VAR_2);
        if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = FUNC_2(VAR_12, 0, sizeof(*VAR_10));
 VAR_13 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11))
  goto out_put_alg;

 VAR_10 = FUNC_6(VAR_11);
 VAR_10->queue = VAR_9;

 VAR_13 = FUNC_5(&VAR_10->aead_spawn.base, VAR_12, VAR_11,
   VAR_2 | VAR_0);
 if (VAR_13)
  goto out_free_inst;

 VAR_11->alg.cra_flags = VAR_1 | VAR_0;
 VAR_11->alg.cra_type = VAR_12->cra_type;
 VAR_11->alg.cra_ctxsize = sizeof(struct cryptd_aead_ctx);
 VAR_11->alg.cra_init = VAR_6;
 VAR_11->alg.cra_exit = VAR_5;
 VAR_11->alg.cra_aead.setkey = VAR_12->cra_aead.setkey;
 VAR_11->alg.cra_aead.setauthsize = VAR_12->cra_aead.setauthsize;
 VAR_11->alg.cra_aead.geniv = VAR_12->cra_aead.geniv;
 VAR_11->alg.cra_aead.ivsize = VAR_12->cra_aead.ivsize;
 VAR_11->alg.cra_aead.maxauthsize = VAR_12->cra_aead.maxauthsize;
 VAR_11->alg.cra_aead.encrypt = VAR_4;
 VAR_11->alg.cra_aead.decrypt = VAR_3;
 VAR_11->alg.cra_aead.givencrypt = VAR_12->cra_aead.givencrypt;
 VAR_11->alg.cra_aead.givdecrypt = VAR_12->cra_aead.givdecrypt;

 VAR_13 = FUNC_8(VAR_7, VAR_11);
 if (VAR_13) {
  FUNC_3(&VAR_10->aead_spawn.base);
out_free_inst:
  FUNC_9(VAR_11);
 }
out_put_alg:
 FUNC_7(VAR_12);
 return VAR_13;
}
