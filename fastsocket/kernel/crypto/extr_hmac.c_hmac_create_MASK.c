
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cra_blocksize; int cra_ctxsize; int cra_exit; int cra_init; scalar_t__ cra_alignmask; int cra_priority; } ;
struct TYPE_4__ {int digestsize; int statesize; int setkey; int import; int export; int finup; int final; int update; int init; TYPE_1__ base; } ;
struct crypto_alg {int cra_blocksize; scalar_t__ cra_alignmask; int cra_priority; } ;
struct shash_instance {int digestsize; int statesize; TYPE_2__ alg; struct crypto_alg base; } ;
struct shash_alg {int digestsize; int statesize; TYPE_2__ alg; struct crypto_alg base; } ;
struct rtattr {int dummy; } ;
struct hmac_ctx {int dummy; } ;
struct crypto_template {int dummy; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct shash_instance*) ;
 int FUNC_2 (struct shash_instance*) ;
 int FUNC_3 (struct rtattr**,int ) ;
 int FUNC_4 (int ,struct shash_instance*,int ) ;
 int FUNC_5 (struct crypto_alg*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct shash_instance* FUNC_7 (char*,struct crypto_alg*) ;
 struct shash_instance* FUNC_8 (struct rtattr*,int ,int ) ;
 int FUNC_9 (struct shash_instance*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct shash_instance*) ;
 int FUNC_12 (struct crypto_template*,struct shash_instance*) ;

__attribute__((used)) static int FUNC_13(struct crypto_template *VAR_11, struct rtattr **VAR_12)
{
 struct shash_instance *VAR_13;
 struct crypto_alg *VAR_14;
 struct shash_alg *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_3(VAR_12, VAR_0);
 if (VAR_16)
  return VAR_16;

 VAR_15 = FUNC_8(VAR_12[1], 0, 0);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 VAR_16 = -VAR_1;
 VAR_17 = VAR_15->digestsize;
 VAR_18 = VAR_15->statesize;
 VAR_14 = &VAR_15->base;
 if (VAR_17 > VAR_14->cra_blocksize ||
     VAR_18 < VAR_14->cra_blocksize)
  goto out_put_alg;

 VAR_13 = FUNC_7("hmac", VAR_14);
 VAR_16 = FUNC_2(VAR_13);
 if (FUNC_1(VAR_13))
  goto out_put_alg;

 VAR_16 = FUNC_4(FUNC_11(VAR_13), VAR_15,
          FUNC_9(VAR_13));
 if (VAR_16)
  goto out_free_inst;

 VAR_13->alg.base.cra_priority = VAR_14->cra_priority;
 VAR_13->alg.base.cra_blocksize = VAR_14->cra_blocksize;
 VAR_13->alg.base.cra_alignmask = VAR_14->cra_alignmask;

 VAR_18 = FUNC_0(VAR_18, VAR_14->cra_alignmask + 1);
 VAR_13->alg.digestsize = VAR_17;
 VAR_13->alg.statesize = VAR_18;

 VAR_13->alg.base.cra_ctxsize = sizeof(struct hmac_ctx) +
         FUNC_0(VAR_18 * 2, FUNC_6());

 VAR_13->alg.base.cra_init = VAR_8;
 VAR_13->alg.base.cra_exit = VAR_2;

 VAR_13->alg.init = VAR_7;
 VAR_13->alg.update = VAR_10;
 VAR_13->alg.final = VAR_4;
 VAR_13->alg.finup = VAR_5;
 VAR_13->alg.export = VAR_3;
 VAR_13->alg.import = VAR_6;
 VAR_13->alg.setkey = VAR_9;

 VAR_16 = FUNC_12(VAR_11, VAR_13);
 if (VAR_16) {
out_free_inst:
  FUNC_10(FUNC_9(VAR_13));
 }

out_put_alg:
 FUNC_5(VAR_14);
 return VAR_16;
}
