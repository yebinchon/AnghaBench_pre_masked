
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; } ;
struct pcomp_alg {struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_alg*) ;

int FUNC_1(struct pcomp_alg *VAR_3)
{
 struct crypto_alg *VAR_4 = &VAR_3->base;

 VAR_4->cra_type = &VAR_2;
 VAR_4->cra_flags &= ~VAR_0;
 VAR_4->cra_flags |= VAR_1;

 return FUNC_0(VAR_4);
}
