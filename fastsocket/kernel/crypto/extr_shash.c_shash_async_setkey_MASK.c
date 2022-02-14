
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 struct crypto_shash** FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_shash*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_ahash *VAR_0, const u8 *VAR_1,
         unsigned int VAR_2)
{
 struct crypto_shash **VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(*VAR_3, VAR_1, VAR_2);
}
