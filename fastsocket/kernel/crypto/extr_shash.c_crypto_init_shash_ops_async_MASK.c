
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct shash_alg {scalar_t__ import; scalar_t__ export; scalar_t__ setkey; } ;
struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_shash {int dummy; } ;
struct crypto_alg {int dummy; } ;
struct crypto_ahash {scalar_t__ reqsize; int import; int export; int setkey; int digest; int finup; int final; int update; int init; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_ahash* FUNC_2 (struct crypto_tfm*) ;
 struct shash_alg* FUNC_3 (struct crypto_alg*) ;
 struct crypto_shash* FUNC_4 (struct crypto_alg*,int *) ;
 int VAR_1 ;
 int FUNC_5 (struct crypto_alg*) ;
 int FUNC_6 (struct crypto_alg*) ;
 scalar_t__ FUNC_7 (struct crypto_shash*) ;
 int VAR_2 ;
 struct crypto_shash** FUNC_8 (struct crypto_tfm*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_9(struct crypto_tfm *VAR_11)
{
 struct crypto_alg *VAR_12 = VAR_11->__crt_alg;
 struct shash_alg *VAR_13 = FUNC_3(VAR_12);
 struct crypto_ahash *VAR_14 = FUNC_2(VAR_11);
 struct crypto_shash **VAR_15 = FUNC_8(VAR_11);
 struct crypto_shash *VAR_16;

 if (!FUNC_5(VAR_12))
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_12, &VAR_2);
 if (FUNC_0(VAR_16)) {
  FUNC_6(VAR_12);
  return FUNC_1(VAR_16);
 }

 *VAR_15 = VAR_16;
 VAR_11->exit = VAR_1;

 VAR_14->init = VAR_8;
 VAR_14->update = VAR_10;
 VAR_14->final = VAR_5;
 VAR_14->finup = VAR_6;
 VAR_14->digest = VAR_3;

 if (VAR_13->setkey)
  VAR_14->setkey = VAR_9;
 if (VAR_13->export)
  VAR_14->export = VAR_4;
 if (VAR_13->import)
  VAR_14->import = VAR_7;

 VAR_14->reqsize = sizeof(struct shash_desc) + FUNC_7(VAR_16);

 return 0;
}
