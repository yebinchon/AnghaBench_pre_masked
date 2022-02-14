
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_spawn {struct crypto_instance* inst; } ;
struct TYPE_3__ {int cra_users; int cra_destroy; int cra_list; int cra_flags; } ;
struct crypto_instance {TYPE_1__ alg; int list; struct crypto_template* tmpl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct crypto_template*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_8(struct crypto_spawn *VAR_3,
    struct list_head *VAR_4)
{
 struct crypto_instance *VAR_5 = VAR_3->inst;
 struct crypto_template *VAR_6 = VAR_5->tmpl;

 if (FUNC_1(&VAR_5->alg))
  return;

 VAR_5->alg.cra_flags |= VAR_0;
 if (FUNC_5(&VAR_5->list))
  return;

 if (!VAR_6 || !FUNC_3(VAR_6))
  return;

 FUNC_2(VAR_1, &VAR_5->alg);
 FUNC_7(&VAR_5->alg.cra_list, VAR_4);
 FUNC_4(&VAR_5->list);
 VAR_5->alg.cra_destroy = VAR_2;

 FUNC_0(!FUNC_6(&VAR_5->alg.cra_users));
}
