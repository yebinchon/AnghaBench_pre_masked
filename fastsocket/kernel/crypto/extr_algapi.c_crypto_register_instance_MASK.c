
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_template {int instances; int module; } ;
struct crypto_larval {int dummy; } ;
struct TYPE_3__ {int cra_module; } ;
struct crypto_instance {struct crypto_template* tmpl; int list; TYPE_1__ alg; } ;


 scalar_t__ FUNC_0 (struct crypto_larval*) ;
 int FUNC_1 (struct crypto_larval*) ;
 struct crypto_larval* FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct crypto_larval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct crypto_template *VAR_1,
        struct crypto_instance *VAR_2)
{
 struct crypto_larval *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_2->alg);
 if (VAR_4)
  goto err;

 VAR_2->alg.cra_module = VAR_1->module;

 FUNC_5(&VAR_0);

 VAR_3 = FUNC_2(&VAR_2->alg);
 if (FUNC_0(VAR_3))
  goto unlock;

 FUNC_6(&VAR_2->list, &VAR_1->instances);
 VAR_2->tmpl = VAR_1;

unlock:
 FUNC_7(&VAR_0);

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_3))
  goto err;

 FUNC_4(VAR_3);
 VAR_4 = 0;

err:
 return VAR_4;
}
