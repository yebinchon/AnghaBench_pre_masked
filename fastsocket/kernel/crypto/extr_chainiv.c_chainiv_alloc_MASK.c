
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct TYPE_3__ {scalar_t__ ivsize; int givencrypt; } ;
struct TYPE_4__ {int cra_ctxsize; TYPE_1__ cra_ablkcipher; int cra_exit; int cra_init; int cra_flags; } ;
struct crypto_instance {TYPE_2__ alg; int mask; int type; } ;
struct crypto_attr_type {TYPE_2__ alg; int mask; int type; } ;
struct chainiv_ctx {int dummy; } ;
struct async_chainiv_ctx {int dummy; } ;


 int VAR_0 ;
 struct crypto_instance* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_instance*) ;
 int FUNC_2 (struct crypto_instance*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct crypto_instance* FUNC_3 (struct rtattr**) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 struct crypto_instance* FUNC_7 (int *,struct rtattr**,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static struct crypto_instance *FUNC_8(struct rtattr **VAR_8)
{
 struct crypto_attr_type *VAR_9;
 struct crypto_instance *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 VAR_11 = FUNC_2(VAR_9);
 if (FUNC_1(VAR_9))
  return FUNC_0(VAR_11);

 VAR_11 = FUNC_4();
 if (VAR_11)
  return FUNC_0(VAR_11);

 VAR_10 = FUNC_7(&VAR_6, VAR_8, 0, 0);
 if (FUNC_1(VAR_10))
  goto put_rng;

 VAR_10->alg.cra_ablkcipher.givencrypt = VAR_4;

 VAR_10->alg.cra_init = VAR_5;
 VAR_10->alg.cra_exit = VAR_7;

 VAR_10->alg.cra_ctxsize = sizeof(struct chainiv_ctx);

 if (!FUNC_6(VAR_9->type, VAR_9->mask)) {
  VAR_10->alg.cra_flags |= VAR_0;

  VAR_10->alg.cra_ablkcipher.givencrypt =
   VAR_2;

  VAR_10->alg.cra_init = VAR_3;
  VAR_10->alg.cra_exit = VAR_1;

  VAR_10->alg.cra_ctxsize = sizeof(struct async_chainiv_ctx);
 }

 VAR_10->alg.cra_ctxsize += VAR_10->alg.cra_ablkcipher.ivsize;

out:
 return VAR_10;

put_rng:
 FUNC_5();
 goto out;
}
