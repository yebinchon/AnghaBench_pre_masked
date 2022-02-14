
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_template {int (* free ) (struct crypto_instance*) ;} ;
struct crypto_instance {struct crypto_template* tmpl; } ;
struct crypto_alg {int dummy; } ;


 int FUNC_0 (struct crypto_template*) ;
 int FUNC_1 (struct crypto_instance*) ;

__attribute__((used)) static void FUNC_2(struct crypto_alg *VAR_0)
{
 struct crypto_instance *VAR_1 = (void *)VAR_0;
 struct crypto_template *VAR_2 = VAR_1->tmpl;

 VAR_2->free(VAR_1);
 FUNC_0(VAR_2);
}
