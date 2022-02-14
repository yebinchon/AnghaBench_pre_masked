
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct async_chainiv_ctx {int postponed; int queue; int lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *,int) ;
 struct async_chainiv_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1)
{
 struct async_chainiv_ctx *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(&VAR_2->lock);

 FUNC_2(&VAR_2->queue, 100);
 FUNC_0(&VAR_2->postponed, VAR_0);

 return FUNC_1(VAR_1);
}
