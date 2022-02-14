
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vmac_t ;
struct vmac_ctx_t {int dummy; } ;
struct TYPE_3__ {int cra_ctxsize; int cra_exit; int cra_init; int cra_alignmask; int cra_blocksize; int cra_priority; } ;
struct TYPE_4__ {int digestsize; int setkey; int final; int update; int init; TYPE_1__ base; } ;
struct shash_instance {TYPE_2__ alg; int cra_alignmask; int cra_blocksize; int cra_priority; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {TYPE_2__ alg; int cra_alignmask; int cra_blocksize; int cra_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct shash_instance*) ;
 int FUNC_1 (struct shash_instance*) ;
 int FUNC_2 (struct rtattr**,int ) ;
 struct shash_instance* FUNC_3 (struct rtattr**,int ,int ) ;
 int FUNC_4 (int ,struct shash_instance*,int ,int ) ;
 int FUNC_5 (struct shash_instance*) ;
 struct shash_instance* FUNC_6 (char*,struct shash_instance*) ;
 int FUNC_7 (struct shash_instance*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct shash_instance*) ;
 int FUNC_10 (struct crypto_template*,struct shash_instance*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct crypto_template *VAR_9, struct rtattr **VAR_10)
{
 struct shash_instance *VAR_11;
 struct crypto_alg *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_2);
 if (VAR_13)
  return VAR_13;

 VAR_12 = FUNC_3(VAR_10, VAR_0,
   VAR_1);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = FUNC_6("vmac", VAR_12);
 VAR_13 = FUNC_1(VAR_11);
 if (FUNC_0(VAR_11))
  goto out_put_alg;

 VAR_13 = FUNC_4(FUNC_9(VAR_11), VAR_12,
   FUNC_7(VAR_11),
   VAR_1);
 if (VAR_13)
  goto out_free_inst;

 VAR_11->alg.base.cra_priority = VAR_12->cra_priority;
 VAR_11->alg.base.cra_blocksize = VAR_12->cra_blocksize;
 VAR_11->alg.base.cra_alignmask = VAR_12->cra_alignmask;

 VAR_11->alg.digestsize = sizeof(vmac_t);
 VAR_11->alg.base.cra_ctxsize = sizeof(struct vmac_ctx_t);
 VAR_11->alg.base.cra_init = VAR_6;
 VAR_11->alg.base.cra_exit = VAR_3;

 VAR_11->alg.init = VAR_5;
 VAR_11->alg.update = VAR_8;
 VAR_11->alg.final = VAR_4;
 VAR_11->alg.setkey = VAR_7;

 VAR_13 = FUNC_10(VAR_9, VAR_11);
 if (VAR_13) {
out_free_inst:
  FUNC_8(FUNC_7(VAR_11));
 }

out_put_alg:
 FUNC_5(VAR_12);
 return VAR_13;
}
