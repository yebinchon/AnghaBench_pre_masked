
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_template {int dummy; } ;
struct ahash_instance {int alg; } ;


 int FUNC_0 (struct ahash_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct crypto_template*,int ) ;

int FUNC_3(struct crypto_template *VAR_0,
       struct ahash_instance *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->alg);
 if (VAR_2)
  return VAR_2;

 return FUNC_2(VAR_0, FUNC_0(VAR_1));
}
