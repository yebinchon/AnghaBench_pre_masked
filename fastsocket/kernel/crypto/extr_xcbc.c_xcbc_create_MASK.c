
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xcbc_tfm_ctx {int dummy; } ;
struct xcbc_desc_ctx {int dummy; } ;
struct TYPE_3__ {unsigned long cra_alignmask; int cra_blocksize; int cra_exit; int cra_init; void* cra_ctxsize; int cra_priority; } ;
struct TYPE_4__ {int digestsize; int setkey; int final; int update; int init; TYPE_1__ base; void* descsize; } ;
struct shash_instance {int cra_blocksize; int cra_alignmask; TYPE_2__ alg; int cra_priority; } ;
struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_alg {int cra_blocksize; int cra_alignmask; TYPE_2__ alg; int cra_priority; } ;


 void* FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct shash_instance*) ;
 int FUNC_2 (struct shash_instance*) ;
 int FUNC_3 (struct rtattr**,int ) ;
 struct shash_instance* FUNC_4 (struct rtattr**,int ,int ) ;
 int FUNC_5 (int ,struct shash_instance*,int ,int ) ;
 int FUNC_6 (struct shash_instance*) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct shash_instance* FUNC_8 (char*,struct shash_instance*) ;
 int FUNC_9 (struct shash_instance*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct shash_instance*) ;
 int FUNC_12 (struct crypto_template*,struct shash_instance*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct crypto_template *VAR_9, struct rtattr **VAR_10)
{
 struct shash_instance *VAR_11;
 struct crypto_alg *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_10, VAR_2);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_4(VAR_10, VAR_0,
      VAR_1);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 switch(VAR_12->cra_blocksize) {
 case 16:
  break;
 default:
  goto out_put_alg;
 }

 VAR_11 = FUNC_8("xcbc", VAR_12);
 VAR_14 = FUNC_2(VAR_11);
 if (FUNC_1(VAR_11))
  goto out_put_alg;

 VAR_14 = FUNC_5(FUNC_11(VAR_11), VAR_12,
    FUNC_9(VAR_11),
    VAR_1);
 if (VAR_14)
  goto out_free_inst;

 VAR_13 = VAR_12->cra_alignmask | 3;
 VAR_11->alg.base.cra_alignmask = VAR_13;
 VAR_11->alg.base.cra_priority = VAR_12->cra_priority;
 VAR_11->alg.base.cra_blocksize = VAR_12->cra_blocksize;

 VAR_11->alg.digestsize = VAR_12->cra_blocksize;
 VAR_11->alg.descsize = FUNC_0(sizeof(struct xcbc_desc_ctx),
       FUNC_7()) +
        (VAR_13 &
         ~(FUNC_7() - 1)) +
        VAR_12->cra_blocksize * 2;

 VAR_11->alg.base.cra_ctxsize = FUNC_0(sizeof(struct xcbc_tfm_ctx),
        VAR_13 + 1) +
         VAR_12->cra_blocksize * 2;
 VAR_11->alg.base.cra_init = VAR_8;
 VAR_11->alg.base.cra_exit = VAR_7;

 VAR_11->alg.init = VAR_4;
 VAR_11->alg.update = VAR_6;
 VAR_11->alg.final = VAR_3;
 VAR_11->alg.setkey = VAR_5;

 VAR_14 = FUNC_12(VAR_9, VAR_11);
 if (VAR_14) {
out_free_inst:
  FUNC_10(FUNC_9(VAR_11));
 }

out_put_alg:
 FUNC_6(VAR_12);
 return VAR_14;
}
