
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct chainiv_ctx {int lock; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 struct chainiv_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_0)
{
 struct chainiv_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->lock);

 return FUNC_0(VAR_0);
}
