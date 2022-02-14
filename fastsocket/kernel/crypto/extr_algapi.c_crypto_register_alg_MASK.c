
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_larval {int dummy; } ;
struct crypto_alg {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_larval*) ;
 int FUNC_1 (struct crypto_larval*) ;
 struct crypto_larval* FUNC_2 (struct crypto_alg*) ;
 int VAR_0 ;
 int FUNC_3 (struct crypto_alg*) ;
 int FUNC_4 (struct crypto_larval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct crypto_alg *VAR_1)
{
 struct crypto_larval *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_5(&VAR_0);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_6(&VAR_0);

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_4(VAR_2);
 return 0;
}
