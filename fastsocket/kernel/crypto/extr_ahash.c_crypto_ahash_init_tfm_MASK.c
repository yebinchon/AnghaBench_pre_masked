
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_ahash {scalar_t__ import; scalar_t__ export; scalar_t__ setkey; int digest; int finup; int final; int update; int init; } ;
struct ahash_alg {scalar_t__ import; scalar_t__ export; scalar_t__ setkey; int digest; scalar_t__ finup; int final; int update; int init; } ;
struct TYPE_2__ {int * cra_type; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ahash_alg* FUNC_1 (struct crypto_ahash*) ;
 int VAR_4 ;
 int FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_5)
{
 struct crypto_ahash *VAR_6 = FUNC_0(VAR_5);
 struct ahash_alg *VAR_7 = FUNC_1(VAR_6);

 VAR_6->setkey = VAR_3;
 VAR_6->export = VAR_1;
 VAR_6->import = VAR_2;

 if (VAR_5->__crt_alg->cra_type != &VAR_4)
  return FUNC_2(VAR_5);

 VAR_6->init = VAR_7->init;
 VAR_6->update = VAR_7->update;
 VAR_6->final = VAR_7->final;
 VAR_6->finup = VAR_7->finup ?: VAR_0;
 VAR_6->digest = VAR_7->digest;

 if (VAR_7->setkey)
  VAR_6->setkey = VAR_7->setkey;
 if (VAR_7->export)
  VAR_6->export = VAR_7->export;
 if (VAR_7->import)
  VAR_6->import = VAR_7->import;

 return 0;
}
