
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* iv; char* nonce; } ;
struct TYPE_6__ {TYPE_2__ gcm; } ;
struct nx_crypto_ctx {TYPE_3__ priv; } ;
struct TYPE_4__ {int tfm; } ;
struct aead_request {char* iv; TYPE_1__ base; } ;


 int VAR_0 ;
 struct nx_crypto_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1)
{
 struct nx_crypto_ctx *VAR_2 = FUNC_0(VAR_1->base.tfm);
 char *VAR_3 = VAR_2->priv.gcm.iv;
 char *VAR_4 = VAR_2->priv.gcm.nonce;

 FUNC_2(VAR_3, VAR_4, VAR_0);
 FUNC_2(VAR_3 + VAR_0, VAR_1->iv, 8);

 return FUNC_1(VAR_1, 0);
}
