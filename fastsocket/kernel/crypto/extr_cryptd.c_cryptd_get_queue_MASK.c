
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_instance_ctx {struct cryptd_queue* queue; } ;


 struct cryptd_instance_ctx* FUNC_0 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static inline struct cryptd_queue *FUNC_2(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = FUNC_1(VAR_0);
 struct cryptd_instance_ctx *VAR_2 = FUNC_0(VAR_1);
 return VAR_2->queue;
}
