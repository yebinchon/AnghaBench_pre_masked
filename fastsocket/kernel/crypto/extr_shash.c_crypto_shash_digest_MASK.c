
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* digest ) (struct shash_desc*,int const*,unsigned int,int *) ;} ;
struct crypto_shash {int dummy; } ;


 struct shash_alg* FUNC_0 (struct crypto_shash*) ;
 unsigned long FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct shash_desc*,int const*,unsigned int,int *) ;
 int FUNC_3 (struct shash_desc*,int const*,unsigned int,int *) ;

int FUNC_4(struct shash_desc *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2, u8 *VAR_3)
{
 struct crypto_shash *VAR_4 = VAR_0->tfm;
 struct shash_alg *VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6 = FUNC_1(VAR_4);

 if (((unsigned long)VAR_1 | (unsigned long)VAR_3) & VAR_6)
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_5->digest(VAR_0, VAR_1, VAR_2, VAR_3);
}
