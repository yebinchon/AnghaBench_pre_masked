
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct shash_desc** FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct shash_desc **VAR_1 = FUNC_1(VAR_0);
 struct shash_desc *VAR_2 = *VAR_1;

 FUNC_0(VAR_2->tfm);
 FUNC_2(VAR_2);
}
