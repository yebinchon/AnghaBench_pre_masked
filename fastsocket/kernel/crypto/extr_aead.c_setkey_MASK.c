
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct aead_alg {int (* setkey ) (struct crypto_aead*,int const*,unsigned int) ;} ;


 struct aead_alg* FUNC_0 (struct crypto_aead*) ;
 unsigned long FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct aead_alg *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4 = FUNC_1(VAR_0);

 if ((unsigned long)VAR_1 & VAR_4)
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_3->setkey(VAR_0, VAR_1, VAR_2);
}
