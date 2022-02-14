
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_alg {int cra_list; int cra_refcnt; } ;
struct crypto_larval {struct crypto_alg alg; } ;


 struct crypto_alg* FUNC_0 (struct crypto_larval*) ;
 scalar_t__ FUNC_1 (struct crypto_larval*) ;
 struct crypto_alg* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct crypto_alg*) ;
 struct crypto_larval* FUNC_5 (char const*,int ,int ) ;
 struct crypto_alg* FUNC_6 (struct crypto_alg*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct crypto_larval*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct crypto_alg *FUNC_11(const char *VAR_2, u32 VAR_3,
         u32 VAR_4)
{
 struct crypto_alg *VAR_5;
 struct crypto_larval *VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_3(&VAR_6->alg.cra_refcnt, 2);

 FUNC_7(&VAR_1);
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_5 = &VAR_6->alg;
  FUNC_9(&VAR_5->cra_list, &VAR_0);
 }
 FUNC_10(&VAR_1);

 if (VAR_5 != &VAR_6->alg) {
  FUNC_8(VAR_6);
  if (FUNC_4(VAR_5))
   VAR_5 = FUNC_6(VAR_5);
 }

 return VAR_5;
}
