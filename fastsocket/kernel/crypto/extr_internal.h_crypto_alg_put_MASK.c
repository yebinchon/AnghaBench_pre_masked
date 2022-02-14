
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int (* cra_destroy ) (struct crypto_alg*) ;int cra_refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_alg*) ;

__attribute__((used)) static inline void FUNC_2(struct crypto_alg *VAR_0)
{
 if (FUNC_0(&VAR_0->cra_refcnt) && VAR_0->cra_destroy)
  VAR_0->cra_destroy(VAR_0);
}
