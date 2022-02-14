
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_alg {int (* setkey ) (struct crypto_shash*,int const*,unsigned int) ;} ;
struct crypto_shash {int dummy; } ;


 struct shash_alg* FUNC_0 (struct crypto_shash*) ;
 unsigned long FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_shash*,int const*,unsigned int) ;

int FUNC_4(struct crypto_shash *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 struct shash_alg *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = FUNC_1(VAR_0);

 if ((unsigned long)VAR_1 & VAR_4)
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_3->setkey(VAR_0, VAR_1, VAR_2);
}
