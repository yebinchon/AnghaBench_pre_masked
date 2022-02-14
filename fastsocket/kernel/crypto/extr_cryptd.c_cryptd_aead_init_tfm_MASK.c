
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_aead; } ;
struct crypto_instance {int dummy; } ;
struct crypto_aead_spawn {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cryptd_aead_request_ctx {int dummy; } ;
struct cryptd_aead_ctx {struct crypto_aead* child; } ;
struct aead_instance_ctx {struct crypto_aead_spawn aead_spawn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int ) ;
 struct aead_instance_ctx* FUNC_3 (struct crypto_instance*) ;
 struct crypto_aead* FUNC_4 (struct crypto_aead_spawn*) ;
 struct crypto_instance* FUNC_5 (struct crypto_tfm*) ;
 struct cryptd_aead_ctx* FUNC_6 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_1)
{
 struct crypto_instance *VAR_2 = FUNC_5(VAR_1);
 struct aead_instance_ctx *VAR_3 = FUNC_3(VAR_2);
 struct crypto_aead_spawn *VAR_4 = &VAR_3->aead_spawn;
 struct cryptd_aead_ctx *VAR_5 = FUNC_6(VAR_1);
 struct crypto_aead *VAR_6;

 VAR_6 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_2(VAR_6, VAR_0);
 VAR_5->child = VAR_6;
 VAR_1->crt_aead.reqsize = sizeof(struct cryptd_aead_request_ctx);
 return 0;
}
