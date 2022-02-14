
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int (* setkey ) (struct crypto_ahash*,int const*,unsigned int) ;} ;


 int FUNC_0 (struct crypto_ahash*,int const*,unsigned int) ;
 unsigned long FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*,int const*,unsigned int) ;

int FUNC_3(struct crypto_ahash *VAR_0, const u8 *VAR_1,
   unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);

 if ((unsigned long)VAR_1 & VAR_3)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 return VAR_0->setkey(VAR_0, VAR_1, VAR_2);
}
