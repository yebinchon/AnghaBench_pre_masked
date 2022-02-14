
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* iv; } ;
struct TYPE_6__ {TYPE_2__ gcm; } ;
struct nx_crypto_ctx {TYPE_3__ priv; } ;
struct TYPE_4__ {int tfm; } ;
struct aead_request {int iv; TYPE_1__ base; } ;


 struct nx_crypto_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_0)
{
 struct nx_crypto_ctx *VAR_1 = FUNC_0(VAR_0->base.tfm);
 char *VAR_2 = VAR_1->priv.gcm.iv;

 FUNC_2(VAR_2, VAR_0->iv, 12);

 return FUNC_1(VAR_0, 0);
}
