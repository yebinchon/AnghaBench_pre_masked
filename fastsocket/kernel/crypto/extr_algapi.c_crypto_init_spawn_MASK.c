
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_spawn {struct crypto_alg* alg; int list; int mask; struct crypto_instance* inst; } ;
struct crypto_instance {int dummy; } ;
struct crypto_alg {int cra_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct crypto_spawn *VAR_2, struct crypto_alg *VAR_3,
        struct crypto_instance *VAR_4, u32 VAR_5)
{
 int VAR_6 = -VAR_0;

 VAR_2->inst = VAR_4;
 VAR_2->mask = VAR_5;

 FUNC_1(&VAR_1);
 if (!FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->list, &VAR_3->cra_users);
  VAR_2->alg = VAR_3;
  VAR_6 = 0;
 }
 FUNC_3(&VAR_1);

 return VAR_6;
}
