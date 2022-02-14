
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct eseqiv_ctx {int dummy; } ;
struct TYPE_3__ {scalar_t__ ivsize; int givencrypt; } ;
struct TYPE_4__ {scalar_t__ cra_blocksize; int cra_ctxsize; TYPE_1__ cra_ablkcipher; int cra_exit; int cra_init; } ;
struct crypto_instance {TYPE_2__ alg; } ;


 int VAR_0 ;
 struct crypto_instance* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_instance*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct crypto_instance* FUNC_4 (int *,struct rtattr**,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct crypto_instance*) ;

__attribute__((used)) static struct crypto_instance *FUNC_6(struct rtattr **VAR_5)
{
 struct crypto_instance *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2();
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_6 = FUNC_4(&VAR_3, VAR_5, 0, 0);
 if (FUNC_1(VAR_6))
  goto put_rng;

 VAR_7 = -VAR_0;
 if (VAR_6->alg.cra_ablkcipher.ivsize != VAR_6->alg.cra_blocksize)
  goto free_inst;

 VAR_6->alg.cra_ablkcipher.givencrypt = VAR_1;

 VAR_6->alg.cra_init = VAR_2;
 VAR_6->alg.cra_exit = VAR_4;

 VAR_6->alg.cra_ctxsize = sizeof(struct eseqiv_ctx);
 VAR_6->alg.cra_ctxsize += VAR_6->alg.cra_ablkcipher.ivsize;

out:
 return VAR_6;

free_inst:
 FUNC_5(VAR_6);
 VAR_6 = FUNC_0(VAR_7);
put_rng:
 FUNC_3();
 goto out;
}
