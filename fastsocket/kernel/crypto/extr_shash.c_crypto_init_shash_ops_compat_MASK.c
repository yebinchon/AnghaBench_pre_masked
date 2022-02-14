
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int digestsize; } ;
struct hash_tfm {int digestsize; int setkey; int digest; int final; int update; int init; } ;
struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; struct hash_tfm crt_hash; } ;
struct crypto_shash {int dummy; } ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct shash_alg* FUNC_2 (struct crypto_alg*) ;
 struct crypto_shash* FUNC_3 (struct crypto_alg*,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct crypto_alg*) ;
 int FUNC_6 (struct crypto_alg*) ;
 scalar_t__ FUNC_7 (struct crypto_shash*) ;
 int VAR_4 ;
 struct shash_desc** FUNC_8 (struct crypto_tfm*) ;
 struct shash_desc* FUNC_9 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct crypto_tfm *VAR_10)
{
 struct hash_tfm *VAR_11 = &VAR_10->crt_hash;
 struct crypto_alg *VAR_12 = VAR_10->__crt_alg;
 struct shash_alg *VAR_13 = FUNC_2(VAR_12);
 struct shash_desc **VAR_14 = FUNC_8(VAR_10);
 struct crypto_shash *VAR_15;
 struct shash_desc *VAR_16;

 if (!FUNC_5(VAR_12))
  return -VAR_0;

 VAR_15 = FUNC_3(VAR_12, &VAR_4);
 if (FUNC_0(VAR_15)) {
  FUNC_6(VAR_12);
  return FUNC_1(VAR_15);
 }

 VAR_16 = FUNC_9(sizeof(*VAR_16) + FUNC_7(VAR_15),
         VAR_2);
 if (!VAR_16) {
  FUNC_4(VAR_15);
  return -VAR_1;
 }

 *VAR_14 = VAR_16;
 VAR_16->tfm = VAR_15;
 VAR_10->exit = VAR_3;

 VAR_11->init = VAR_7;
 VAR_11->update = VAR_9;
 VAR_11->final = VAR_6;
 VAR_11->digest = VAR_5;
 VAR_11->setkey = VAR_8;

 VAR_11->digestsize = VAR_13->digestsize;

 return 0;
}
