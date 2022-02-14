
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct async_chainiv_ctx {TYPE_1__ queue; int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct async_chainiv_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_1)
{
 struct async_chainiv_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(FUNC_3(VAR_0, &VAR_2->state) || VAR_2->queue.qlen);

 FUNC_2(VAR_1);
}
