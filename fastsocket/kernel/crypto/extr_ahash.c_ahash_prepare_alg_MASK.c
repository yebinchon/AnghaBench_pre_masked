
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int cra_flags; int * cra_type; } ;
struct TYPE_2__ {int digestsize; int statesize; struct crypto_alg base; } ;
struct ahash_alg {TYPE_1__ halg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct ahash_alg *VAR_5)
{
 struct crypto_alg *VAR_6 = &VAR_5->halg.base;

 if (VAR_5->halg.digestsize > VAR_3 / 8 ||
     VAR_5->halg.statesize > VAR_3 / 8)
  return -VAR_2;

 VAR_6->cra_type = &VAR_4;
 VAR_6->cra_flags &= ~VAR_1;
 VAR_6->cra_flags |= VAR_0;

 return 0;
}
