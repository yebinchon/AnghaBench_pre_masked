
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_alignmask; int cra_blocksize; scalar_t__ cra_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_alg*) ;

__attribute__((used)) static int FUNC_1(struct crypto_alg *VAR_2)
{
 if (VAR_2->cra_alignmask & (VAR_2->cra_alignmask + 1))
  return -VAR_0;

 if (VAR_2->cra_blocksize > VAR_1 / 8)
  return -VAR_0;

 if (VAR_2->cra_priority < 0)
  return -VAR_0;

 return FUNC_0(VAR_2);
}
