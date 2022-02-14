
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct TYPE_5__ {int decrypt; int encrypt; int setkey; int max_keysize; int min_keysize; int ivsize; } ;
struct TYPE_6__ {int cra_ctxsize; TYPE_2__ cra_blkcipher; int cra_exit; int cra_init; int cra_type; int cra_alignmask; int cra_blocksize; int cra_priority; int cra_flags; } ;
struct TYPE_4__ {int max_keysize; int min_keysize; int ivsize; } ;
struct crypto_instance {TYPE_3__ alg; TYPE_1__ cra_blkcipher; int cra_type; int cra_alignmask; int cra_blocksize; int cra_priority; int cra_flags; } ;
struct crypto_fpu_ctx {int dummy; } ;
struct crypto_alg {TYPE_3__ alg; TYPE_1__ cra_blkcipher; int cra_type; int cra_alignmask; int cra_blocksize; int cra_priority; int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_instance* FUNC_0 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_3 (char*,struct crypto_instance*) ;
 int FUNC_4 (struct rtattr**,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct crypto_instance* FUNC_5 (struct rtattr**,int ,int ) ;
 int FUNC_6 (struct crypto_instance*) ;

__attribute__((used)) static struct crypto_instance *FUNC_7(struct rtattr **VAR_7)
{
 struct crypto_instance *VAR_8;
 struct crypto_alg *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_7, VAR_0);
 if (VAR_10)
  return FUNC_1(VAR_10);

 VAR_9 = FUNC_5(VAR_7, VAR_0,
      VAR_1);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 VAR_8 = FUNC_3("fpu", VAR_9);
 if (FUNC_2(VAR_8))
  goto out_put_alg;

 VAR_8->alg.cra_flags = VAR_9->cra_flags;
 VAR_8->alg.cra_priority = VAR_9->cra_priority;
 VAR_8->alg.cra_blocksize = VAR_9->cra_blocksize;
 VAR_8->alg.cra_alignmask = VAR_9->cra_alignmask;
 VAR_8->alg.cra_type = VAR_9->cra_type;
 VAR_8->alg.cra_blkcipher.ivsize = VAR_9->cra_blkcipher.ivsize;
 VAR_8->alg.cra_blkcipher.min_keysize = VAR_9->cra_blkcipher.min_keysize;
 VAR_8->alg.cra_blkcipher.max_keysize = VAR_9->cra_blkcipher.max_keysize;
 VAR_8->alg.cra_ctxsize = sizeof(struct crypto_fpu_ctx);
 VAR_8->alg.cra_init = VAR_5;
 VAR_8->alg.cra_exit = VAR_4;
 VAR_8->alg.cra_blkcipher.setkey = VAR_6;
 VAR_8->alg.cra_blkcipher.encrypt = VAR_3;
 VAR_8->alg.cra_blkcipher.decrypt = VAR_2;

out_put_alg:
 FUNC_6(VAR_9);
 return VAR_8;
}
