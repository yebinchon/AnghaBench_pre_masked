
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct crypto_hash {int dummy; } ;


 struct shash_desc** FUNC_0 (struct crypto_hash*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_hash *VAR_0, const u8 *VAR_1,
          unsigned int VAR_2)
{
 struct shash_desc **VAR_3 = FUNC_0(VAR_0);
 struct shash_desc *VAR_4 = *VAR_3;

 return FUNC_1(VAR_4->tfm, VAR_1, VAR_2);
}
