
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* final ) (struct shash_desc*,int *) ;} ;
struct crypto_shash {int dummy; } ;


 struct shash_alg* FUNC_0 (struct crypto_shash*) ;
 unsigned long FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct shash_desc*,int *) ;
 int FUNC_3 (struct shash_desc*,int *) ;

int FUNC_4(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct crypto_shash *VAR_2 = VAR_0->tfm;
 struct shash_alg *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4 = FUNC_1(VAR_2);

 if ((unsigned long)VAR_1 & VAR_4)
  return FUNC_2(VAR_0, VAR_1);

 return VAR_3->final(VAR_0, VAR_1);
}
