
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtattr {int dummy; } ;
struct TYPE_3__ {int ivsize; int givencrypt; } ;
struct TYPE_4__ {TYPE_1__ cra_aead; int cra_ctxsize; int cra_exit; int cra_init; } ;
struct crypto_instance {TYPE_2__ alg; } ;


 scalar_t__ FUNC_0 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_1 (int *,struct rtattr**,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct crypto_instance *FUNC_2(struct rtattr **VAR_4)
{
 struct crypto_instance *VAR_5;

 VAR_5 = FUNC_1(&VAR_3, VAR_4, 0, 0);

 if (FUNC_0(VAR_5))
  goto out;

 VAR_5->alg.cra_aead.givencrypt = VAR_1;

 VAR_5->alg.cra_init = VAR_2;
 VAR_5->alg.cra_exit = VAR_0;

 VAR_5->alg.cra_ctxsize = VAR_5->alg.cra_aead.ivsize;

out:
 return VAR_5;
}
