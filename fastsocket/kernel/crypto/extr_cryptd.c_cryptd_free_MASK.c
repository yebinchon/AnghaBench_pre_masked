
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hashd_instance_ctx {int spawn; } ;
struct TYPE_3__ {int cra_flags; } ;
struct crypto_instance {TYPE_1__ alg; } ;
struct cryptd_instance_ctx {int spawn; } ;
struct TYPE_4__ {int base; } ;
struct aead_instance_ctx {TYPE_2__ aead_spawn; } ;




 int VAR_0 ;
 struct crypto_instance* FUNC_0 (struct crypto_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct crypto_instance*) ;
 int FUNC_4 (struct crypto_instance*) ;

__attribute__((used)) static void FUNC_5(struct crypto_instance *VAR_1)
{
 struct cryptd_instance_ctx *VAR_2 = FUNC_3(VAR_1);
 struct hashd_instance_ctx *VAR_3 = FUNC_3(VAR_1);
 struct aead_instance_ctx *VAR_4 = FUNC_3(VAR_1);

 switch (VAR_1->alg.cra_flags & VAR_0) {
 case 128:
  FUNC_1(&VAR_3->spawn);
  FUNC_4(FUNC_0(VAR_1));
  return;
 case 129:
  FUNC_2(&VAR_4->aead_spawn.base);
  FUNC_4(VAR_1);
  return;
 default:
  FUNC_2(&VAR_2->spawn);
  FUNC_4(VAR_1);
 }
}
