
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cryptd_queue {int dummy; } ;
struct cryptd_aead_request_ctx {int complete; } ;
struct TYPE_2__ {int complete; } ;
struct aead_request {TYPE_1__ base; } ;
typedef int crypto_completion_t ;


 struct cryptd_aead_request_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct cryptd_queue*,TYPE_1__*) ;
 struct cryptd_queue* FUNC_2 (int ) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_0,
        crypto_completion_t VAR_1)
{
 struct cryptd_aead_request_ctx *VAR_2 = FUNC_0(VAR_0);
 struct crypto_aead *VAR_3 = FUNC_3(VAR_0);
 struct cryptd_queue *VAR_4 = FUNC_2(FUNC_4(VAR_3));

 VAR_2->complete = VAR_0->base.complete;
 VAR_0->base.complete = VAR_1;
 return FUNC_1(VAR_4, &VAR_0->base);
}
