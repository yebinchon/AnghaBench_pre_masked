
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_larval {int completion; } ;
struct crypto_alg {int cra_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_alg*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct crypto_alg *VAR_1)
{
 struct crypto_larval *VAR_2 = (void *)VAR_1;

 FUNC_2(&VAR_0);
 FUNC_3(&VAR_1->cra_list);
 FUNC_4(&VAR_0);
 FUNC_0(&VAR_2->completion);
 FUNC_1(VAR_1);
}
