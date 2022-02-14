
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cryptd_aead_request_ctx {int (* complete ) (TYPE_1__*,int) ;} ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct aead_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct cryptd_aead_request_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,struct crypto_aead*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct aead_request *VAR_1,
   struct crypto_aead *VAR_2,
   int VAR_3,
   int (*VAR_4)(struct aead_request *VAR_5))
{
 struct cryptd_aead_request_ctx *VAR_6;
 VAR_6 = FUNC_0(VAR_1);

 if (FUNC_5(VAR_3 == -VAR_0))
  goto out;
 FUNC_1(VAR_1, VAR_2);
 VAR_3 = VAR_4( VAR_1 );
 VAR_1->base.complete = VAR_6->complete;
out:
 FUNC_2();
 VAR_6->complete(&VAR_1->base, VAR_3);
 FUNC_3();
}
